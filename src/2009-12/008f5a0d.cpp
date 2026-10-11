// from server: 26% by atomic.potato
extern "C" void* __stdcall HeapReAlloc(void*, unsigned long, void*, unsigned long);

struct CXTIconHandle {
    void* f(void* a, void* b);
};

void* CXTIconHandle::f(void* a, void* b)
{
    if (a == 0) {
        void** vt = *(void***)this;
        typedef void* (__thiscall *Fn)(void*, void*);
        return ((Fn)vt[0])(this, b);
    }
    if (b == 0) {
        void** vt = *(void***)this;
        typedef void* (__thiscall *Fn)(void*, void*);
        ((Fn)vt[1])(this, a);
        return 0;
    }
    return HeapReAlloc(*(void**)((char*)this + 4), 0, a, (unsigned long)b);
}
