// WARNING: Please don't edit this file. It was generated by C++/WinRT v2.0.210806.1

#pragma once
#ifndef WINRT_Windows_Media_2_H
#define WINRT_Windows_Media_2_H
#include "winrt/impl/Windows.Foundation.2.h"
#include "winrt/impl/Windows.Graphics.DirectX.2.h"
#include "winrt/impl/Windows.Graphics.DirectX.Direct3D11.2.h"
#include "winrt/impl/Windows.Graphics.Imaging.2.h"
#include "winrt/impl/Windows.Media.1.h"
WINRT_EXPORT namespace winrt::Windows::Media
{
    struct MediaTimeRange
    {
        winrt::Windows::Foundation::TimeSpan Start;
        winrt::Windows::Foundation::TimeSpan End;
    };
    inline bool operator==(MediaTimeRange const& left, MediaTimeRange const& right) noexcept
    {
        return left.Start == right.Start && left.End == right.End;
    }
    inline bool operator!=(MediaTimeRange const& left, MediaTimeRange const& right) noexcept
    {
        return !(left == right);
    }
    struct __declspec(empty_bases) AudioBuffer : winrt::Windows::Media::IAudioBuffer
    {
        AudioBuffer(std::nullptr_t) noexcept {}
        AudioBuffer(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Media::IAudioBuffer(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) AudioFrame : winrt::Windows::Media::IAudioFrame
    {
        AudioFrame(std::nullptr_t) noexcept {}
        AudioFrame(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Media::IAudioFrame(ptr, take_ownership_from_abi) {}
        explicit AudioFrame(uint32_t capacity);
    };
    struct __declspec(empty_bases) AutoRepeatModeChangeRequestedEventArgs : winrt::Windows::Media::IAutoRepeatModeChangeRequestedEventArgs
    {
        AutoRepeatModeChangeRequestedEventArgs(std::nullptr_t) noexcept {}
        AutoRepeatModeChangeRequestedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Media::IAutoRepeatModeChangeRequestedEventArgs(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) ImageDisplayProperties : winrt::Windows::Media::IImageDisplayProperties
    {
        ImageDisplayProperties(std::nullptr_t) noexcept {}
        ImageDisplayProperties(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Media::IImageDisplayProperties(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) MediaExtensionManager : winrt::Windows::Media::IMediaExtensionManager,
        impl::require<MediaExtensionManager, winrt::Windows::Media::IMediaExtensionManager2>
    {
        MediaExtensionManager(std::nullptr_t) noexcept {}
        MediaExtensionManager(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Media::IMediaExtensionManager(ptr, take_ownership_from_abi) {}
        MediaExtensionManager();
    };
    struct MediaMarkerTypes
    {
        MediaMarkerTypes() = delete;
        [[nodiscard]] static auto Bookmark();
    };
    struct __declspec(empty_bases) MediaProcessingTriggerDetails : winrt::Windows::Media::IMediaProcessingTriggerDetails
    {
        MediaProcessingTriggerDetails(std::nullptr_t) noexcept {}
        MediaProcessingTriggerDetails(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Media::IMediaProcessingTriggerDetails(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) MediaTimelineController : winrt::Windows::Media::IMediaTimelineController,
        impl::require<MediaTimelineController, winrt::Windows::Media::IMediaTimelineController2>
    {
        MediaTimelineController(std::nullptr_t) noexcept {}
        MediaTimelineController(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Media::IMediaTimelineController(ptr, take_ownership_from_abi) {}
        MediaTimelineController();
    };
    struct __declspec(empty_bases) MediaTimelineControllerFailedEventArgs : winrt::Windows::Media::IMediaTimelineControllerFailedEventArgs
    {
        MediaTimelineControllerFailedEventArgs(std::nullptr_t) noexcept {}
        MediaTimelineControllerFailedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Media::IMediaTimelineControllerFailedEventArgs(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) MusicDisplayProperties : winrt::Windows::Media::IMusicDisplayProperties,
        impl::require<MusicDisplayProperties, winrt::Windows::Media::IMusicDisplayProperties2, winrt::Windows::Media::IMusicDisplayProperties3>
    {
        MusicDisplayProperties(std::nullptr_t) noexcept {}
        MusicDisplayProperties(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Media::IMusicDisplayProperties(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) PlaybackPositionChangeRequestedEventArgs : winrt::Windows::Media::IPlaybackPositionChangeRequestedEventArgs
    {
        PlaybackPositionChangeRequestedEventArgs(std::nullptr_t) noexcept {}
        PlaybackPositionChangeRequestedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Media::IPlaybackPositionChangeRequestedEventArgs(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) PlaybackRateChangeRequestedEventArgs : winrt::Windows::Media::IPlaybackRateChangeRequestedEventArgs
    {
        PlaybackRateChangeRequestedEventArgs(std::nullptr_t) noexcept {}
        PlaybackRateChangeRequestedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Media::IPlaybackRateChangeRequestedEventArgs(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) ShuffleEnabledChangeRequestedEventArgs : winrt::Windows::Media::IShuffleEnabledChangeRequestedEventArgs
    {
        ShuffleEnabledChangeRequestedEventArgs(std::nullptr_t) noexcept {}
        ShuffleEnabledChangeRequestedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Media::IShuffleEnabledChangeRequestedEventArgs(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) SystemMediaTransportControls : winrt::Windows::Media::ISystemMediaTransportControls,
        impl::require<SystemMediaTransportControls, winrt::Windows::Media::ISystemMediaTransportControls2>
    {
        SystemMediaTransportControls(std::nullptr_t) noexcept {}
        SystemMediaTransportControls(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Media::ISystemMediaTransportControls(ptr, take_ownership_from_abi) {}
        static auto GetForCurrentView();
    };
    struct __declspec(empty_bases) SystemMediaTransportControlsButtonPressedEventArgs : winrt::Windows::Media::ISystemMediaTransportControlsButtonPressedEventArgs
    {
        SystemMediaTransportControlsButtonPressedEventArgs(std::nullptr_t) noexcept {}
        SystemMediaTransportControlsButtonPressedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Media::ISystemMediaTransportControlsButtonPressedEventArgs(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) SystemMediaTransportControlsDisplayUpdater : winrt::Windows::Media::ISystemMediaTransportControlsDisplayUpdater
    {
        SystemMediaTransportControlsDisplayUpdater(std::nullptr_t) noexcept {}
        SystemMediaTransportControlsDisplayUpdater(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Media::ISystemMediaTransportControlsDisplayUpdater(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) SystemMediaTransportControlsPropertyChangedEventArgs : winrt::Windows::Media::ISystemMediaTransportControlsPropertyChangedEventArgs
    {
        SystemMediaTransportControlsPropertyChangedEventArgs(std::nullptr_t) noexcept {}
        SystemMediaTransportControlsPropertyChangedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Media::ISystemMediaTransportControlsPropertyChangedEventArgs(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) SystemMediaTransportControlsTimelineProperties : winrt::Windows::Media::ISystemMediaTransportControlsTimelineProperties
    {
        SystemMediaTransportControlsTimelineProperties(std::nullptr_t) noexcept {}
        SystemMediaTransportControlsTimelineProperties(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Media::ISystemMediaTransportControlsTimelineProperties(ptr, take_ownership_from_abi) {}
        SystemMediaTransportControlsTimelineProperties();
    };
    struct __declspec(empty_bases) VideoDisplayProperties : winrt::Windows::Media::IVideoDisplayProperties,
        impl::require<VideoDisplayProperties, winrt::Windows::Media::IVideoDisplayProperties2>
    {
        VideoDisplayProperties(std::nullptr_t) noexcept {}
        VideoDisplayProperties(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Media::IVideoDisplayProperties(ptr, take_ownership_from_abi) {}
    };
    struct VideoEffects
    {
        VideoEffects() = delete;
        [[nodiscard]] static auto VideoStabilization();
    };
    struct __declspec(empty_bases) VideoFrame : winrt::Windows::Media::IVideoFrame,
        impl::require<VideoFrame, winrt::Windows::Media::IVideoFrame2>
    {
        VideoFrame(std::nullptr_t) noexcept {}
        VideoFrame(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Media::IVideoFrame(ptr, take_ownership_from_abi) {}
        VideoFrame(winrt::Windows::Graphics::Imaging::BitmapPixelFormat const& format, int32_t width, int32_t height);
        VideoFrame(winrt::Windows::Graphics::Imaging::BitmapPixelFormat const& format, int32_t width, int32_t height, winrt::Windows::Graphics::Imaging::BitmapAlphaMode const& alpha);
        using winrt::Windows::Media::IVideoFrame::CopyToAsync;
        using impl::consume_t<VideoFrame, winrt::Windows::Media::IVideoFrame2>::CopyToAsync;
        static auto CreateAsDirect3D11SurfaceBacked(winrt::Windows::Graphics::DirectX::DirectXPixelFormat const& format, int32_t width, int32_t height);
        static auto CreateAsDirect3D11SurfaceBacked(winrt::Windows::Graphics::DirectX::DirectXPixelFormat const& format, int32_t width, int32_t height, winrt::Windows::Graphics::DirectX::Direct3D11::IDirect3DDevice const& device);
        static auto CreateWithSoftwareBitmap(winrt::Windows::Graphics::Imaging::SoftwareBitmap const& bitmap);
        static auto CreateWithDirect3D11Surface(winrt::Windows::Graphics::DirectX::Direct3D11::IDirect3DSurface const& surface);
    };
}
#endif
