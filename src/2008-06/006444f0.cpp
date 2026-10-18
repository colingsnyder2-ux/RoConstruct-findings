// from server: 41% by colin
extern "C" void _invalid_parameter_noinfo();

struct S_4293d0 {
    void ctor();
};

struct S_5d9db0 {
    void f(void*);
};

struct S_5d90a0 {
    void* f();
};

struct S_5d9100 {
    int f();
};

struct S_60d630 {
    bool f(void*, float);
};

struct S_644420 {
    void f(void*, void*, void*, void*);
};

struct S_64b230 {
    void f();
};

struct S_67fb10 {
    void f();
};

extern "C" void __cdecl sub_6a067a(void*);

struct S_6444f0 {
    char pad[8];
    void* m_p;
    bool f();
};

bool S_6444f0::f()
{
    void* obj = *(void**)((char*)m_p + 0x21c);
    if (obj == 0)
        return false;

    char buf[0x40];
    S_4293d0* a = (S_4293d0*)buf;
    a->ctor();

    void* p1 = 0;
    void* p2 = 0;
    void* p3 = 0;

    ((S_5d9db0*)m_p)->f(buf);

    void* v1 = *(void**)(buf + 0x10);
    void* v2 = *(void**)(buf + 0x0c);
    if ((unsigned int)v2 > (unsigned int)v1)
        _invalid_parameter_noinfo();
    void* v3 = *(void**)(buf + 0x10);
    void* v4 = *(void**)(buf + 0x0c);
    void* v5 = *(void**)(buf + 0x00);
    void* v6 = v4;
    if ((unsigned int)v4 > (unsigned int)v3)
        _invalid_parameter_noinfo();
    void* v7 = *(void**)(buf + 0x00);

    char buf2[0x30];
    ((S_644420*)buf2)->f(v7, v6, v5, v3);

    void* r = ((S_5d90a0*)m_p)->f();
    if (r != 0)
    {
        void* edi = *(void**)((char*)obj + 0x84);
        float zero = 0.0f;
        void* q = ((S_5d90a0*)m_p)->f();
        if (((S_60d630*)edi)->f(q, zero))
        {
            ((S_64b230*)buf2)->f();
            ((S_67fb10*)buf2)->f();
            return true;
        }
    }

    int r2 = ((S_5d9100*)m_p)->f();
    if (r2 != 0)
    {
        void* edi = *(void**)((char*)obj + 0x84);
        float zero = 0.0f;
        int q = ((S_5d9100*)m_p)->f();
        if (((S_60d630*)edi)->f((void*)q, zero))
        {
            ((S_64b230*)buf2)->f();
            ((S_67fb10*)buf2)->f();
            return true;
        }
    }

    ((S_64b230*)buf2)->f();

    void* x = *(void**)(buf + 0x04);
    if (x != 0)
        sub_6a067a(x);

    void* y = *(void**)(buf + 0x00);
    *(void**)(buf + 0x04) = 0;
    *(void**)(buf + 0x08) = 0;
    *(void**)(buf + 0x0c) = 0;
    sub_6a067a(y);

    return false;
}
