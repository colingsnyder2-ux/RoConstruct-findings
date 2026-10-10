// from server: 36% by atomic.potato
struct S
{
    void* f();
};

void* S::f()
{
    void* p = *(void**)((char*)this + 8);
    ((void (__thiscall*)(S*, void*))0x005ec6f0)(this, p);
    return this;
}
