// from server: 48% by atomic.potato
struct COutputView {
    char pad0[0x118];
    void* m_ptr118;
    void* m_ptr11c;
    void f(void* arg);
};

extern "C" void __stdcall VariantInit(void*);
extern "C" void __stdcall VariantClear(void*);

extern "C" void* __stdcall sub_719590();
extern "C" void __stdcall sub_4163c0(void*, const char*);

void COutputView::f(void* arg)
{
    void* p = sub_719590();
    void* old = m_ptr118;
    if (old != p) {
        m_ptr118 = 0;
        if (p) {
            void** vt = *(void***)p;
            void (*fn)(void*, const char*, void**) = (void (*)(void*, const char*, void**))vt[0];
            fn(p, (const char*)0x8b30dc, &m_ptr118);
        }
        if (old) {
            void** vt = *(void***)old;
            void (*fn)(void*) = (void (*)(void*))vt[2];
            fn(old);
        }
    }
    if (m_ptr118) {
        void* tmp = 0;
        void** vt = *(void***)m_ptr118;
        void (*fn)(void*, void**) = (void (*)(void*, void**))vt[8];
        fn(m_ptr118, &tmp);
        void* v = 0;
        VariantInit(&v);
        void* v2 = 0;
        VariantInit(&v2);
        void* v3 = 0;
        sub_4163c0(&v3, (const char*)0x8b12b0);
        void** vt2 = *(void***)tmp;
        void (*fn2)(void*, void*, void*, void*, void*) = (void (*)(void*, void*, void*, void*, void*))vt2[11];
        fn2(tmp, v, v2, v3, 0);
        VariantClear(&v3);
        VariantClear(&v2);
        void* old2 = m_ptr11c;
        if (old2 != tmp) {
            m_ptr11c = 0;
            if (tmp) {
                void** vt3 = *(void***)tmp;
                void (*fn3)(void*, const char*, void**) = (void (*)(void*, const char*, void**))vt3[0];
                fn3(tmp, (const char*)0x8b3518, &m_ptr11c);
            }
            if (old2) {
                void** vt4 = *(void***)old2;
                void (*fn4)(void*) = (void (*)(void*))vt4[2];
                fn4(old2);
            }
        }
        if (tmp) {
            void** vt5 = *(void***)tmp;
            void (*fn5)(void*) = (void (*)(void*))vt5[2];
            fn5(tmp);
        }
    } else {
        void* old3 = m_ptr11c;
        if (old3) {
            m_ptr11c = 0;
            void** vt6 = *(void***)old3;
            void (*fn6)(void*) = (void (*)(void*))vt6[2];
            fn6(old3);
        }
    }
}
