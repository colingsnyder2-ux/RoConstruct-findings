// from server: 85% by atomic.potato
struct S
{
    void __thiscall f(unsigned long value);
    void __thiscall g(void* value);
};

void S::f(unsigned long value)
{
    while (*(unsigned long*)((char*)this + 12) > value)
    {
        g((char*)*(void**)((char*)this + 8) + *(unsigned long*)((char*)*(void**)((char*)this + 8) + 4) + 8);
    }
}
