#include "force_verified.h"
// G3D core: vector/matrix/quaternion math, containers and binary serialization.
#include "G3D/Vector3.h"
#include "G3D/Matrix3.h"
#include "G3D/CoordinateFrame.h"
#include "G3D/Quat.h"
#include "G3D/Array.h"
#include "G3D/Table.h"
#include "G3D/BinaryOutput.h"
#include "G3D/BinaryInput.h"
#include "G3D/format.h"
#include "G3D/GImage.h"
#include <string.h>
#include <stdio.h>
#include <math.h>
extern "C" {
#include "jpeglib.h"
}
using namespace G3D;

int main()
{
    int failures = 0;
    Vector3 x(1, 0, 0), y(0, 1, 0);
    if (x.cross(y) != Vector3(0, 0, 1)) ++failures;
    Matrix3 rot = Matrix3::fromAxisAngle(Vector3(0, 0, 1), (float)G3D_PI / 2);
    Vector3 r = rot * x;
    if (fabs(r.x) > 1e-5 || fabs(r.y - 1) > 1e-5) ++failures;
    CoordinateFrame frame(rot, Vector3(10, 0, 0));
    if ((frame.pointToWorldSpace(x) - Vector3(10, 1, 0)).length() > 1e-4) ++failures;
    Quat q(rot);
    if ((q.toRotationMatrix() * x - r).length() > 1e-4) ++failures;

    Array<int> values;
    for (int i = 0; i < 100; ++i) values.append(i * i);
    if (values.size() != 100 || values.last() != 9801) ++failures;
    values.resize(16);
    values.append(256);
    if (values.size() != 17 || values[15] != 225 || values.last() != 256) ++failures;
    Array<int> copied(values);
    values.clear();
    if (copied.size() != 17 || copied[15] != 225 || values.size() != 0) ++failures;
    Table<std::string, int> table;
    table.set("a", 1); table.set("b", 2);
    if (!table.containsKey("b") || table["a"] != 1) ++failures;

    BinaryOutput out("<memory>", G3D_LITTLE_ENDIAN);
    out.writeInt32(0x12345678); out.writeFloat32(2.5f); out.writeString("roc");
    BinaryInput in(out.getCArray(), out.size(), G3D_LITTLE_ENDIAN, false, true);
    if (in.readInt32() != 0x12345678 || in.readFloat32() != 2.5f || in.readString() != "roc") ++failures;

    out.compress();
    BinaryInput compressed(out.getCArray(), out.size(), G3D_LITTLE_ENDIAN, true, true);
    if (compressed.readInt32() != 0x12345678 || compressed.readFloat32() != 2.5f || compressed.readString() != "roc") ++failures;

    GImage image(64,48,3);
    for (int row=0;row<48;++row) for (int col=0;col<64;++col) {
        uint8* pixel=image.byte()+(row*64+col)*3;
        pixel[0]=(uint8)(col*4); pixel[1]=(uint8)(row*5); pixel[2]=128;
    }
    BinaryOutput jpeg("<memory>",G3D_LITTLE_ENDIAN);
    image.encode(GImage::JPEG,jpeg);
    GImage decoded(jpeg.getCArray(),(int)jpeg.size(),GImage::JPEG);
    if (decoded.width!=64 || decoded.height!=48 || decoded.channels!=3) ++failures;
    int worst=0;
    for (int i=0;i<64*48*3;++i) {
        int error=abs((int)image.byte()[i]-(int)decoded.byte()[i]);
        if (error>worst) worst=error;
    }
    if (worst>=24) ++failures;
    GImage copiedImage(decoded);
    if (copiedImage.width!=64 || copiedImage.height!=48 || memcmp(copiedImage.byte(),decoded.byte(),64*48*3)) ++failures;
    printf("GImage JPEG memory roundtrip and copy worst=%d\n",worst);
    FILE* file=fopen("g3d_float.jpg","wb");
    if (!file) return 2;
    jpeg_compress_struct encoder;
    jpeg_error_mgr jpegError;
    encoder.err=jpeg_std_error(&jpegError);
    jpeg_create_compress(&encoder);
    jpeg_stdio_dest(&encoder,file);
    encoder.image_width=64; encoder.image_height=48; encoder.input_components=3; encoder.in_color_space=JCS_RGB;
    jpeg_set_defaults(&encoder); jpeg_set_quality(&encoder,95,TRUE); encoder.dct_method=JDCT_FLOAT;
    jpeg_start_compress(&encoder,TRUE);
    while (encoder.next_scanline<encoder.image_height) {
        JSAMPROW row=image.byte()+encoder.next_scanline*64*3;
        jpeg_write_scanlines(&encoder,&row,1);
    }
    jpeg_finish_compress(&encoder); jpeg_destroy_compress(&encoder); fclose(file);
    GImage fromFloat("g3d_float.jpg");
    if (fromFloat.width!=64 || fromFloat.height!=48 || fromFloat.channels!=3) ++failures;
    file=fopen("g3d_float.jpg","rb");
    if (!file) return 3;
    jpeg_decompress_struct decoder;
    decoder.err=jpeg_std_error(&jpegError);
    jpeg_create_decompress(&decoder); jpeg_stdio_src(&decoder,file); jpeg_read_header(&decoder,TRUE);
    decoder.dct_method=JDCT_FLOAT; jpeg_start_decompress(&decoder);
    if (decoder.output_width!=64 || decoder.output_height!=48 || decoder.output_components!=3) return 4;
    JSAMPLE pixels[64*48*3];
    while (decoder.output_scanline<decoder.output_height) {
        JSAMPROW row=pixels+decoder.output_scanline*64*3;
        jpeg_read_scanlines(&decoder,&row,1);
    }
    jpeg_finish_decompress(&decoder); jpeg_destroy_decompress(&decoder); fclose(file);
    int floatWorst=0, consumerWorst=0;
    for (int i=0;i<64*48*3;++i) {
        int a=abs((int)pixels[i]-(int)image.byte()[i]);
        int b=abs((int)pixels[i]-(int)fromFloat.byte()[i]);
        if (a>floatWorst) floatWorst=a;
        if (b>consumerWorst) consumerWorst=b;
    }
    if (floatWorst>=24 || consumerWorst>3) ++failures;
    printf("bundled IJG float roundtrip worst=%d GImage agreement=%d\n",floatWorst,consumerWorst);

    printf("%s failures=%d\n", format("g3d %d.%02d", G3D_VER / 10000, (G3D_VER / 100) % 100).c_str(), failures);
    return failures;
}
