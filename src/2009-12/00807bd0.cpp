// from server: 94% by atomic.potato
extern "C" void* __cdecl GetCommandBar();

struct S
{
    void* f();
};

void* S::f()
{
    void* p = GetCommandBar();
    if (p)
    {
        void* v = *(void**)p;
        if (((int (__thiscall *)(void*))(*(void**)((char*)v + 0x130)))(p))
            return p;
    }
    return 0;
}
