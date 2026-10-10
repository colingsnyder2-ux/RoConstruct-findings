// from server: 77% by atomic.potato
struct S
{
    void __thiscall f(unsigned long);
    void __thiscall g(void*);
};

void S::f(unsigned long n)
{
    while (*(unsigned long*)((char*)this + 0x0c) > n)
    {
        g((char*)(*(unsigned long*)((char*)this + 8)) + 0x0c);
    }
}
