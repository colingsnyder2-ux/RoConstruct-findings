// from server: 53% by colin
struct Base {
    Base();
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void v5();
    virtual void v6();
    virtual void v7();
    virtual void v8();
    virtual void v9();
    virtual void v10();
    virtual void v11();
};

extern "C" void __cdecl sub_55C860();
extern "C" void* __cdecl sub_55AD40();

struct NonFactoryProduct : Base {
    int field_0C;
    NonFactoryProduct();
};

NonFactoryProduct::NonFactoryProduct()
{
    sub_55C860();
    field_0C = 0;
    *(void**)this = (void*)0x7A8C9C;
    *(void**)((char*)this + 4) = (void*)0x7A8C94;
    *(void**)((char*)this + 0x10) = (void*)0x7A8C8C;
    *(void**)((char*)this + 0x14) = (void*)0x7A8C7C;
    *(void**)((char*)this + 0x2C) = (void*)0x7A8C6C;
    *(void**)((char*)this + 0x44) = (void*)0x7A8C5C;
    *(void**)((char*)this + 0x5C) = (void*)0x7A8C4C;
    *(void**)((char*)this + 0x74) = (void*)0x7A8C3C;
    *(void**)((char*)this + 0x8C) = (void*)0x7A8C2C;
    *(void**)((char*)this + 0xE8) = (void*)0x7A8C1C;
    *(void**)((char*)this + 0x100) = (void*)0x7A8C0C;
    *(void**)((char*)this + 0x118) = (void*)0x7A8BFC;
    field_0C = (int)sub_55AD40();
}
