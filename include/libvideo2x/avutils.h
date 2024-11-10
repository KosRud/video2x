#ifndef AVUTILS_H
#define AVUTILS_H

extern "C" {
#include <libavformat/avformat.h>
}

int64_t get_video_frame_count(AVFormatContext *ifmt_ctx, int in_vstream_idx);

enum AVPixelFormat
get_encoder_default_pix_fmt(const AVCodec *encoder, AVPixelFormat target_pix_fmt);

#endif  // AVUTILS_H
