// from server: 21% by colin
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct Arg1
{
    void* vptr;
    volatile long refcount;
};

struct Obj8
{
    void* vptr;
    void* field4;
};

struct ObjC
{
    void* vptr;
    int field4;
};

struct Obj10
{
    void* vptr;
    int field4;
};

struct Obj1C
{
    void* vptr;
    int field4;
};

struct Obj30
{
    void* vptr;
    int field4;
};

struct Inner204
{
    unsigned char pad[0x14];
};

struct Outer204
{
    unsigned char pad[0x204];
    Inner204* inner;
};

struct Target
{
    void* vptr;
    Obj10* field4;
    Obj8* field8;
    ObjC* fieldC;
    Obj1C* field10;
    unsigned char pad14[8];
    Obj1C* field1C;
    unsigned char pad20[0x10];
    Obj30* field30;
    unsigned char pad34[0x14];
    unsigned char field48;
    void construct(Arg1* a, Arg1* b);
};

extern "C" void __cdecl freeMem(void*);
extern "C" void* __cdecl allocMem(unsigned int);

void __cdecl sub_4D8A20();
void* __cdecl sub_7AAE40();
void* __cdecl sub_47E400(unsigned int);
void __cdecl sub_45C680();
void __cdecl sub_4D7460();
void* __cdecl sub_4F0920(void*);
void __cdecl sub_4D9610(void*, void*);
void __cdecl sub_4D96B0(void*, void*);
void* __cdecl sub_4D8390(void*, void*, void*, void*);
void* __cdecl sub_4A3340(void*, void*, void*, void*);
void __cdecl sub_4D7C00(void*, void*, void*);
void __cdecl sub_595540(void*, void*);
void __cdecl sub_595370(void*);
void __cdecl sub_49F710(void*);
void* __cdecl sub_4B3870(void*);

void Target::construct(Arg1* a, Arg1* b)
{
    if (b)
    {
        _InterlockedExchangeAdd(&b->refcount, 1);
    }
    sub_4D8A20();
    this->vptr = (void*)0x826C70;
    this->field48 = 0;

    void* mem = allocMem(0x590);
    Obj8* o8;
    if (mem)
    {
        o8 = (Obj8*)sub_7AAE40();
    }
    else
    {
        o8 = 0;
    }
    if (this->field8 != o8)
    {
        if (this->field8)
        {
            void** vt = (void**)this->field8->vptr;
            ((void (__thiscall*)(void*, int))vt[0])(this->field8, 1);
        }
    }
    this->field8 = o8;

    mem = allocMem(0x18);
    ObjC* oc;
    if (mem)
    {
        oc = (ObjC*)sub_47E400(0xA00000);
    }
    else
    {
        oc = 0;
    }
    if (this->fieldC != oc)
    {
        if (this->fieldC)
        {
            this->fieldC->vptr = (void*)0x819CD8;
            sub_45C680();
            freeMem(this->fieldC);
        }
    }
    this->fieldC = oc;

    mem = allocMem(8);
    Obj10* o10;
    if (mem)
    {
        o10 = (Obj10*)mem;
        o10->field4 = (int)this->field8;
        o10->vptr = (void*)0x826B64;
    }
    else
    {
        o10 = 0;
    }
    if (this->field4 != o10)
    {
        if (this->field4)
        {
            void** vt = (void**)this->field4->vptr;
            ((void (__thiscall*)(void*, int))vt[6])(this->field4, 1);
        }
    }
    this->field4 = o10;

    mem = allocMem(0x10);
    Obj1C* o1c;
    if (mem)
    {
        o1c = (Obj1C*)sub_4F0920(this->fieldC);
    }
    else
    {
        o1c = 0;
    }
    if (this->field10 != o1c)
    {
        if (this->field10)
        {
            sub_4D7460();
            freeMem(this->field10);
        }
    }
    this->field10 = o1c;

    void** vt8 = (void**)this->field8->vptr;
    ((void (__thiscall*)(void*, int, float, float))vt8[2])(this->field8, 0, 0.0f, 0.0f);

    void* r = 0;
    if (a)
    {
        r = sub_4B3870(a);
    }

    unsigned char buf1[0x18];
    unsigned char buf2[0x18];
    *(void**)(buf1 + 0) = (void*)0x4DB600;
    *(void**)(buf1 + 4) = this;
    sub_4D9610(buf2, buf1);

    void* p = r ? (void*)((char*)r + 0x14) : 0;
    void* res = sub_4D8390((void*)0x97A88C, buf2, p, (void*)10);
    sub_595540(&this->field1C, res);
    sub_595370(buf2);
    sub_49F710(buf1);

    Outer204* outer = (Outer204*)a;
    void* inner = outer->inner;
    sub_4D7C00((void*)0x4DB5F0, this, inner);

    unsigned char buf3[0x18];
    unsigned char buf4[0x18];
    *(void**)(buf3 + 0) = (void*)0x4DB5F0;
    *(void**)(buf3 + 4) = this;
    sub_4D96B0(buf4, buf3);

    void* p2 = inner ? (void*)((char*)inner + 0x14) : 0;
    void* res2 = sub_4A3340((void*)0x973E40, buf4, p2, (void*)10);
    sub_595540(&this->field30, res2);
    sub_595370(buf4);
    sub_49F710(buf3);

    if (b)
    {
        if (_InterlockedExchangeAdd(&b->refcount, -1) == 1)
        {
            void** vt = (void**)b->vptr;
            ((void (__thiscall*)(void*))vt[1])(b);
            if (_InterlockedExchangeAdd(&b->refcount, -1) == 1)
            {
                void** vt2 = (void**)b->vptr;
                ((void (__thiscall*)(void*))vt2[2])(b);
            }
        }
    }
}
