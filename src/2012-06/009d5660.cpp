// from server: 76% by atomic.potato
extern "C" void* __stdcall SelectObject(void*, void*);

struct S
{
    int f();
};

int S::f()
{
    void* a = *(void**)((char*)this + 0x10);
    void* b = *(void**)((char*)this + 0x0c);
    *(void**)this = (void*)0xc15e58;
    SelectObject(b, a);
    *(void**)((char*)this + 4) = (void*)0xc15db0;
    return 0;
}
