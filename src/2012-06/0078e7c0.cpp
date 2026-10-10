// from server: 43% by atomic.potato
struct S
{
    unsigned long value;
    unsigned long data;
    unsigned long size;
    void f(unsigned long index);
};

extern "C" void Function_007adbd0(S* object, unsigned long value);

void S::f(unsigned long index)
{
    while (size > index)
    {
        Function_007adbd0(this, *(unsigned long*)(*(unsigned long*)((char*)this + 8) + 4) + 8);
    }
}
