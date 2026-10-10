// from server: 77% by atomic.potato
extern "C" void Function_007f88b0(void*, unsigned int);

struct S
{
    void f(unsigned int);
};

void S::f(unsigned int value)
{
    while (value < *(unsigned int*)((char*)this + 0x0c))
    {
        unsigned int* p = *(unsigned int**)((char*)this + 8);
        Function_007f88b0(this, p[1] + 8);
    }
}
