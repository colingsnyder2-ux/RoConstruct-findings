// from server: 95% by atomic.potato
extern "C" void __cdecl sub_004ecbd0(int);

struct S
{
    int value;
    int unknown;
    int unknown2;
    unsigned char* data;
    void f();
};

void S::f()
{
    sub_004ecbd0(1);
    if ((value & 7) == 0)
        data[(unsigned int)value >> 3] = 0;
    ++value;
}
