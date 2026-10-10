// from server: 43% by colin
struct P8ModelInstance {
    float field_0;
    float field_4;
    float field_8;
    void method(const P8ModelInstance& other);
};

void P8ModelInstance::method(const P8ModelInstance& other)
{
    float* a = (float*)&other;
    float* b = (float*)this;

    float* pa0 = a + 2;
    float* pb0 = b + 2;
    if (!(*pa0 >= *pb0))
        pa0 = pb0;
    float v2 = *pa0;

    float* pa1 = a + 1;
    float* pb1 = b + 1;
    if (!(*pa1 < *pb1))
        pa1 = pb1;
    float v1 = *pa1;

    float* pa2 = a;
    float* pb2 = b;
    if (!(*pa2 < *pb2))
        pa2 = pb2;
    float v0 = *pa2;

    b[0] = v0;
    b[1] = v1;
    b[2] = v2;
}
