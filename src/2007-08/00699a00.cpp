// from server: 62% by colin
struct CXTPPropertyGridItemConstraints
{
    void Destruct();
};

extern "C" void __stdcall sub_62FC62(void*);
extern "C" void __stdcall sub_6301E4(void*);
extern "C" void __stdcall sub_699790(void*);
extern "C" void __stdcall sub_6F77B0(void*);

void CXTPPropertyGridItemConstraints::Destruct()
{
    char* self = (char*)this;

    char* p = *(char**)(self + 0xb4);
    if (p != 0)
    {
        if (*(char**)(p + 0xe0) == self)
            *(char**)(p + 0xe0) = 0;
    }

    if (*(char**)(self + 0xb4) != 0)
    {
        char* (*fn1)(char*) = *(char* (**)(char*))(*(char**)self + 0xd4);
        char* r1 = fn1(self);
        if (*(char**)(r1 + 0x54) == self)
        {
            char* (*fn2)(char*) = *(char* (**)(char*))(*(char**)self + 0xd4);
            char* r2 = fn2(self);
            char* (*fn3)(char*) = *(char* (**)(char*))(*(char**)r2 + 0x15c);
            fn3(r2);
        }

        if (*(char**)(self + 0xb4) != 0)
        {
            char* (*fn4)(char*) = *(char* (**)(char*))(*(char**)self + 0x84);
            char* r3 = fn4(self);
            if (*(char**)(r3 + 0xa0) == self)
            {
                char* (*fn5)(char*) = *(char* (**)(char*))(*(char**)self + 0x84);
                char* r4 = fn5(self);
                char* (*fn6)(char*) = *(char* (**)(char*))(*(char**)r4 + 0x164);
                fn6(r4);
            }
        }
    }

    char* q = *(char**)(self + 0xb8);
    if (q != 0)
    {
        sub_699790(q);
        char* q2 = *(char**)(self + 0xb8);
        if (q2 != 0)
        {
            sub_6301E4(q2);
            *(char**)(self + 0xb8) = 0;
        }
    }

    char* r = *(char**)(self + 0xbc);
    if (r != 0)
    {
        *(char**)(r + 0x38) = 0;
        char* r2 = *(char**)(self + 0xbc);
        if (r2 != 0)
        {
            sub_6301E4(r2);
            *(char**)(self + 0xbc) = 0;
        }
    }

    char* s = *(char**)(self + 0xc0);
    if (s != 0)
    {
        sub_6301E4(s);
        *(char**)(self + 0xc0) = 0;
    }

    char* t = *(char**)(self + 0xc4);
    if (t != 0)
    {
        sub_6301E4(t);
        *(char**)(self + 0xc4) = 0;
    }

    char* u = *(char**)(self + 0xc8);
    if (u != 0)
    {
        sub_6301E4(u);
        *(char**)(self + 0xc8) = 0;
    }

    char* v = *(char**)(self + 0xcc);
    if (v != 0)
    {
        sub_6F77B0(v);
        sub_62FC62(v);
        *(char**)(self + 0xcc) = 0;
    }

    *(char**)(self + 0xb4) = 0;
}
