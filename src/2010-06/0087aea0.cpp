// from server: 44% by atomic.potato
struct I_func_0081b900 {
    char pad[324];
    int m_x;
};

struct S_func_0081b900 {
    char pad[176];
    I_func_0081b900* m_p;
    int f();
};

int S_func_0081b900::f()
{
    return m_p->m_x;
}

struct Inner {
    char pad[4];
    int f();
};

struct Outer {
    char pad[0x90];
    Inner m_inner;
    int m_98;
    void* m_9c;
    void* m_a0;
    int f(void* a, void* b);
};

extern "C" void* __stdcall CreateSolidBrush(unsigned int color);

int Outer::f(void* a, void* b)
{
    int esi;
    if (m_9c) {
        esi = ((S_func_0081b900*)m_9c)->f();
    } else {
        esi = 0;
    }
    if (m_a0 == 0 || esi == 0) {
        return 0;
    }
    void* ebx = a;
    void** vtable = *(void***)ebx;
    void* ebp = *(void**)ebx;
    void* (*fn1)(int, int) = (void* (*)(int, int))((void**)esi)[1];
    void* r1 = fn1(esi, 1);
    void (*fn2)(void*, void*) = (void (*)(void*, void*))((void**)ebp)[0x38/4];
    fn2(ebx, r1);
    void* (*fn3)(int, int) = (void* (*)(int, int))((void**)esi)[2];
    void* r2 = fn3(esi, 1);
    ebp = r2;
    if (ebp != (void*)m_98) {
        goto do_set;
    }
    {
        Inner* p = &m_inner;
        if (p != 0 && p->pad[4] != 0) {
            goto after_set;
        }
    }
do_set:
    m_inner.f();
    {
        void* brush = CreateSolidBrush((unsigned int)ebp);
        m_inner.f();
    }
    m_98 = (int)ebp;
after_set:
    {
        void (*fn4)(void*, int) = (void (*)(void*, int))((void**)ebx)[0x34/4];
        fn4(ebx, m_98);
    }
    if (esi != 0) {
        return *(int*)((char*)esi + 4);
    }
    return 0;
}
