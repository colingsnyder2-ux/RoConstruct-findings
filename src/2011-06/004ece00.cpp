// from server: 89% by atomic.potato
struct S
{
    unsigned int value;
    char padding[8];
    char *buffer;

    void f(const char *p);
};

extern "C" void __stdcall sub_004ecbd0(S *, int);

void S::f(const char *p)
{
    sub_004ecbd0(this, 8);
    buffer[value >> 3] = *p;
    value += 8;
}
