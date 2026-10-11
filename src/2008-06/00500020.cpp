// from server: 42% by atomic.potato
struct HeadBuilder
{
    char padding[32];
    float value;
    unsigned short code;
    void f(int a);
};

extern "C" void __cdecl sub_004fef10(float, unsigned short, unsigned short, int);

void HeadBuilder::f(int a)
{
    sub_004fef10(value, code, code, a);
}
