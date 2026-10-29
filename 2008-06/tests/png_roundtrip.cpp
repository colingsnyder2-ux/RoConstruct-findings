#include "force_verified.h"
// Exercise native read/write, palette expansion, gray conversion, alpha and Adam7 paths.
#include "png.h"
#include <stdio.h>
#include <string.h>

static int roundtrip(int color, int depth, int interlace)
{
    const int W = 32, H = 16;
    png_byte image[H][W * 8] = {{0}}, expected[H][W * 4], back[H][W * 4];
    png_color palette[4] = {{10, 20, 30}, {40, 50, 60}, {70, 80, 90}, {100, 110, 120}};
    png_byte alpha[4] = {0, 80, 160, 255};
    int channels = color == PNG_COLOR_TYPE_RGB ? 3 : color == PNG_COLOR_TYPE_RGBA ? 4 : 1;
    for (int y = 0; y < H; ++y) for (int x = 0; x < W; ++x) {
        png_byte v = (png_byte)(x * 3 + y * 11);
        png_byte* pixel = &image[y][x * channels * (depth / 8)];
        png_byte* want = &expected[y][x * 4];
        if (color == PNG_COLOR_TYPE_PALETTE) {
            int i = (x + y) % 4;
            pixel[0] = (png_byte)i;
            want[0] = palette[i].red; want[1] = palette[i].green; want[2] = palette[i].blue; want[3] = alpha[i];
        } else if (color == PNG_COLOR_TYPE_GRAY) {
            pixel[0] = v;
            if (depth == 16) pixel[1] = (png_byte)(255 - v);
            want[0] = want[1] = want[2] = v; want[3] = 255;
        } else {
            for (int c = 0; c < channels; ++c) pixel[c] = (png_byte)(v + c * 23);
            want[0] = pixel[0]; want[1] = pixel[1]; want[2] = pixel[2];
            want[3] = channels == 4 ? pixel[3] : 255;
        }
    }
    png_bytep rows[H];
    for (int y = 0; y < H; ++y) rows[y] = image[y];
    FILE* out = fopen("png_roundtrip.png", "wb");
    png_structp w = png_create_write_struct(PNG_LIBPNG_VER_STRING, 0, 0, 0);
    png_infop wi = png_create_info_struct(w);
    png_init_io(w, out);
    png_set_IHDR(w, wi, W, H, depth, color, interlace, PNG_COMPRESSION_TYPE_DEFAULT, PNG_FILTER_TYPE_DEFAULT);
    if (color == PNG_COLOR_TYPE_PALETTE) {
        png_set_PLTE(w, wi, palette, 4);
        png_set_tRNS(w, wi, alpha, 4, 0);
    }
    png_write_info(w, wi);
    png_write_image(w, rows);
    png_write_end(w, wi);
    png_destroy_write_struct(&w, &wi);
    fclose(out);

    FILE* in = fopen("png_roundtrip.png", "rb");
    png_structp r = png_create_read_struct(PNG_LIBPNG_VER_STRING, 0, 0, 0);
    png_infop ri = png_create_info_struct(r);
    png_init_io(r, in);
    png_read_info(r, ri);
    if (color == PNG_COLOR_TYPE_PALETTE) {
        png_set_palette_to_rgb(r);
        png_set_tRNS_to_alpha(r);
    } else {
        if (depth == 16) png_set_strip_16(r);
        if (color == PNG_COLOR_TYPE_GRAY) png_set_gray_to_rgb(r);
        if (color != PNG_COLOR_TYPE_RGBA) png_set_filler(r, 255, PNG_FILLER_AFTER);
    }
    png_set_interlace_handling(r);
    png_read_update_info(r, ri);
    if (png_get_rowbytes(r, ri) != W * 4) return 2;
    for (int y = 0; y < H; ++y) rows[y] = back[y];
    png_read_image(r, rows);
    png_read_end(r, ri);
    int width = png_get_image_width(r, ri), height = png_get_image_height(r, ri);
    png_destroy_read_struct(&r, &ri, 0);
    fclose(in);
    int same = memcmp(expected, back, sizeof(expected)) == 0;
    printf("libpng %s color=%d depth=%d interlace=%d same=%d\n", png_get_libpng_ver(0), color, depth, interlace, same);
    return same && width == W && height == H ? 0 : 1;
}

int main()
{
    int colors[] = {PNG_COLOR_TYPE_RGB, PNG_COLOR_TYPE_RGBA, PNG_COLOR_TYPE_PALETTE, PNG_COLOR_TYPE_GRAY};
    for (int interlace = PNG_INTERLACE_NONE; interlace <= PNG_INTERLACE_ADAM7; ++interlace) {
        for (int i = 0; i < 4; ++i) if (roundtrip(colors[i], 8, interlace)) return 1;
        if (roundtrip(PNG_COLOR_TYPE_GRAY, 16, interlace)) return 1;
    }
    return 0;
}
