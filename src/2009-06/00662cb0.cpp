// from server: 94% by atomic.potato
struct S_func_0065bc50 {
    char pad0[308];
    int m_x;
    int* f();
};

struct S {
    char pad0[4];
    void* m_fn;
    void g(void*);
};

void S::g(void* p)
{
    S_func_0065bc50* o;
    if (p) {
        o = (S_func_0065bc50*)((char*)p - 0x18);
    } else {
        o = 0;
    }
    int* r = o->f();
    void* fn = m_fn;
    ((void (__thiscall*)(void*, int*))fn)((char*)r + 8, r);
}
