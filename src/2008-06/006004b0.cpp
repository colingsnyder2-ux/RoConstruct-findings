// from server: 63% by atomic.potato
struct S
{
    void f();
    int value[114];
};

extern "C" void __cdecl sub_600420(int);

void S::f()
{
    int value = this->value[114];
    int adjust = value & 0x80000001;
    if (adjust < 0)
        adjust = (adjust - 1) | ~1;
    ++adjust;
    sub_600420(adjust + value);
}
