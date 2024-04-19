﻿//------------------------------------------------------------------------------
//     This code was generated by a tool.
//
//     Changes to this file may cause incorrect behavior and will be lost if
//     the code is regenerated.
//------------------------------------------------------------------------------
#pragma once


namespace winrt::BlankApp2::implementation
{
    using IInspectable = ::winrt::Windows::Foundation::IInspectable;

    template <typename D, typename ... I>
    struct MainPageT : public ::winrt::BlankApp2::implementation::MainPage_base<D,
        ::winrt::Windows::UI::Xaml::Markup::IComponentConnector,
        ::winrt::Windows::UI::Xaml::Markup::IComponentConnector2,
        I...>
    {
        using base_type = typename MainPageT::base_type;
        using base_type::base_type;
        using class_type = typename MainPageT::class_type;

        void InitializeComponent();
        void Connect(int32_t connectionId, IInspectable const& target);
        ::winrt::Windows::UI::Xaml::Markup::IComponentConnector GetBindingConnector(int32_t connectionId, IInspectable const& target);
        void UnloadObject(::winrt::Windows::UI::Xaml::DependencyObject const& dependencyObject);
        void DisconnectUnloadedObject(int32_t connectionId);

        ::winrt::Windows::UI::Xaml::Controls::TextBlock OutputBox()
        {
            return _OutputBox;
        }
        void OutputBox(::winrt::Windows::UI::Xaml::Controls::TextBlock value)
        {
            _OutputBox = value;
        }

        ::winrt::Windows::UI::Xaml::Controls::TextBox InputBox()
        {
            return _InputBox;
        }
        void InputBox(::winrt::Windows::UI::Xaml::Controls::TextBox value)
        {
            _InputBox = value;
        }
        
    protected:
        bool _contentLoaded{false};

    private:
        struct MainPage_obj1_Bindings;

        ::winrt::Windows::UI::Xaml::Controls::TextBlock _OutputBox{nullptr};
        ::winrt::Windows::UI::Xaml::Controls::TextBox _InputBox{nullptr};
    };
}

