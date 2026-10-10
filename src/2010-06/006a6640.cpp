// from server: 78% by atomic.potato
struct S
{
    void f();
};

extern "C" void func_006a1f20(void*);

void S::f()
{
    void* p = *(void**)this;
    if (*((unsigned char*)p + 0x58) != 0)
    {
        func_006a1f20(p);
        *((unsigned char*)p + 0x58) = 0;
    }
}
