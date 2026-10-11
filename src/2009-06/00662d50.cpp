// from server: 84% by atomic.potato
struct S_func_0065bc50 {
    char pad0[308];
    int m_x;
    int* f();
};

struct S {
    char pad0[4];
    void* m_vt;
    void g(void* p);
};

void S::g(void* p)
{
    S_func_0065bc50* obj;
    if (p) {
        obj = (S_func_0065bc50*)((char*)p - 0x18);
    } else {
        obj = 0;
    }
    int* r = obj->f();
    void (*fn)(int*) = *(void (**)(int*))((char*)this + 4);
    fn(r);
}
