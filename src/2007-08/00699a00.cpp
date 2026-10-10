// from server: 65% by tester
struct CXTPPropertyGridItemConstraints;

struct CXTPPropertyGridItemConstraints
{
    void Destructor();
};

void CXTPPropertyGridItemConstraints::Destructor()
{
    char* self = (char*)this;

    void* p0 = *(void**)(self + 0xb4);
    if (p0 != 0)
    {
        if (*(void**)((char*)p0 + 0xe0) == this)
            *(void**)((char*)p0 + 0xe0) = 0;
    }

    if (*(void**)(self + 0xb4) != 0)
    {
        void* (*get1)(void*) = *(void*(**)(void*))this;
        void* r1 = ((void*(*)(void*))*(void**)((char*)this + 0xd4))(this);
        if (*(void**)((char*)r1 + 0x54) == this)
        {
            void* r2 = ((void*(*)(void*))*(void**)((char*)this + 0xd4))(this);
            (*(void(**)(void*))*(void**)((char*)r2 + 0x15c))(r2);
        }
    }

    if (*(void**)(self + 0xb4) != 0)
    {
        void* r3 = ((void*(*)(void*))*(void**)((char*)this + 0x84))(this);
        if (*(void**)((char*)r3 + 0xa0) == this)
        {
            void* r4 = ((void*(*)(void*))*(void**)((char*)this + 0x84))(this);
            (*(void(**)(void*))*(void**)((char*)r4 + 0x164))(r4);
        }
    }

    void* p1 = *(void**)(self + 0xb8);
    if (p1 != 0)
    {
        ((void(*)(void*))0x699790)(p1);
        void* p1b = *(void**)(self + 0xb8);
        if (p1b != 0)
        {
            ((void(*)(void*))0x6301e4)(p1b);
            *(void**)(self + 0xb8) = 0;
        }
    }

    void* p2 = *(void**)(self + 0xbc);
    if (p2 != 0)
    {
        *(void**)((char*)p2 + 0x38) = 0;
        void* p2b = *(void**)(self + 0xbc);
        if (p2b != 0)
        {
            ((void(*)(void*))0x6301e4)(p2b);
            *(void**)(self + 0xbc) = 0;
        }
    }

    void* p3 = *(void**)(self + 0xc0);
    if (p3 != 0)
    {
        ((void(*)(void*))0x6301e4)(p3);
        *(void**)(self + 0xc0) = 0;
    }

    void* p4 = *(void**)(self + 0xc4);
    if (p4 != 0)
    {
        ((void(*)(void*))0x6301e4)(p4);
        *(void**)(self + 0xc4) = 0;
    }

    void* p5 = *(void**)(self + 0xc8);
    if (p5 != 0)
    {
        ((void(*)(void*))0x6301e4)(p5);
        *(void**)(self + 0xc8) = 0;
    }

    void* p6 = *(void**)(self + 0xcc);
    if (p6 != 0)
    {
        ((void(*)(void*))0x6f77b0)(p6);
        ((void(*)(void*))0x62fc62)(p6);
        *(void**)(self + 0xcc) = 0;
    }

    *(void**)(self + 0xb4) = 0;
}
