// from server: 50% by why2
struct CXTIconHandle {
    void* f();
};

void* CXTIconHandle::f()
{
    void* p = *(void**)((char*)this + 4);
    void** vtbl = *(void***)p;
    typedef void* (__thiscall *Fn)(void*);
    Fn fn = (Fn)vtbl[1];
    return fn(p);
}
