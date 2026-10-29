#include "jpeg_native_roots.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <setjmp.h>
extern "C" {
#include "jpeglib.h"
#include "jerror.h"
}

static int roundtrip(J_COLOR_SPACE color, J_DCT_METHOD method, bool progressive, int scale)
{
    const int W=64, H=48;
    int channels=color==JCS_RGB ? 3 : 1;
    JSAMPLE image[W*H*3], back[W*H*3];
    for (int y=0;y<H;++y) for (int x=0;x<W;++x) {
        int i=(y*W+x)*channels;
        if (channels==3) { image[i]=(JSAMPLE)(x*4); image[i+1]=(JSAMPLE)(y*5); image[i+2]=128; }
        else image[i]=(JSAMPLE)((x+y)*2);
    }
    FILE* out=fopen("jpeg_roundtrip.jpg","wb");
    if (!out) return 2;
    jpeg_compress_struct c;
    jpeg_error_mgr err;
    c.err=jpeg_std_error(&err);
    jpeg_create_compress(&c);
    jpeg_stdio_dest(&c,out);
    c.image_width=W; c.image_height=H; c.input_components=channels; c.in_color_space=color;
    jpeg_set_defaults(&c);
    jpeg_set_quality(&c,95,TRUE);
    c.dct_method=method;
    if (progressive) jpeg_simple_progression(&c);
    jpeg_start_compress(&c,TRUE);
    while (c.next_scanline<c.image_height) {
        JSAMPROW row=&image[c.next_scanline*W*channels];
        jpeg_write_scanlines(&c,&row,1);
    }
    jpeg_finish_compress(&c);
    jpeg_destroy_compress(&c);
    fclose(out);

    FILE* in=fopen("jpeg_roundtrip.jpg","rb");
    if (!in) return 3;
    jpeg_decompress_struct d;
    d.err=jpeg_std_error(&err);
    jpeg_create_decompress(&d);
    jpeg_stdio_src(&d,in);
    jpeg_read_header(&d,TRUE);
    if ((d.progressive_mode!=FALSE)!=progressive) return 5;
    d.dct_method=method; d.scale_num=1; d.scale_denom=scale;
    jpeg_start_decompress(&d);
    int width=d.output_width, height=d.output_height;
    if (width!=W/scale || height!=H/scale || d.output_components!=channels) return 4;
    while (d.output_scanline<d.output_height) {
        JSAMPROW row=&back[d.output_scanline*width*channels];
        jpeg_read_scanlines(&d,&row,1);
    }
    jpeg_finish_decompress(&d);
    jpeg_destroy_decompress(&d);
    fclose(in);
    long worst=0;
    for (int y=0;y<height;++y) for (int x=0;x<width;++x) for (int k=0;k<channels;++k) {
        int expected=channels==1 ? (x+y)*scale*2+2*(scale-1) :
                     k==0 ? x*scale*4+2*(scale-1) : k==1 ? y*scale*5+5*(scale-1)/2 : 128;
        long error=labs((long)back[(y*width+x)*channels+k]-expected);
        if (error>worst) worst=error;
    }
    printf("jpeg channels=%d dct=%d progressive=%d scale=%d worst=%ld\n",channels,(int)method,progressive,scale,worst);
    return worst<24 ? 0 : 1;
}

struct Fault { jpeg_error_mgr error; jmp_buf escape; };
static void failed(j_common_ptr c) { longjmp(((Fault*)c->err)->escape,1); }
static int malformed()
{
    FILE* file=fopen("jpeg_invalid.jpg","w+b");
    if (!file) return 2;
    fputs("not a JPEG",file); rewind(file);
    static jpeg_decompress_struct d;
    static Fault fault;
    d.err=jpeg_std_error(&fault.error); fault.error.error_exit=failed;
    jpeg_create_decompress(&d);
    if (setjmp(fault.escape)) {
        char message[JMSG_LENGTH_MAX];
        (*fault.error.format_message)((j_common_ptr)&d,message);
        printf("malformed code=%d expected=%d message=%s\n",fault.error.msg_code,(int)JERR_NO_SOI,message);
        jpeg_destroy_decompress(&d); fclose(file);
        return fault.error.msg_code==JERR_NO_SOI ? 0 : 1;
    }
    jpeg_stdio_src(&d,file);
    jpeg_read_header(&d,TRUE);
    jpeg_destroy_decompress(&d); fclose(file);
    return 1;
}

int main()
{
    J_DCT_METHOD methods[]={JDCT_ISLOW,JDCT_IFAST,JDCT_FLOAT};
    for (int method=0;method<3;++method) for (int progressive=0;progressive<2;++progressive)
        for (int gray=0;gray<2;++gray) for (int scale=1;scale<=8;scale*=2)
            if (roundtrip(gray ? JCS_GRAYSCALE : JCS_RGB,methods[method],progressive!=0,scale)) return 1;
    if (malformed()) return 2;
    printf("48 JPEG modes and malformed-input recovery passed\n");
    return 0;
}
