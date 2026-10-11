// from server: 82% by atomic.potato
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
    S_func_0065bc50* obj;
    if (p) {
        obj = (S_func_0065bc50*)((char*)p - 0x18);
    } else {
        obj = 0;
    }
    int* r = obj->f();
    void (*fn)(void*, int*) = (void (*)(void*, int*))m_fn;
    fn(this, r);
}
