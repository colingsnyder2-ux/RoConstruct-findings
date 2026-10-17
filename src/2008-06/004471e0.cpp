// from server: 36% by colin
struct EnumDescBase {
    void construct(const char*, const char*);
};

struct TypedPropDesc {
    void init(void*, void*);
};

struct EnumItem {
    void* vtable;
    char pad[12];
};

struct EnumDesc {
    void* vtable;
    char pad0[0x2c];
    TypedPropDesc prop30;
    char pad1[0x1c];
    TypedPropDesc prop50;
    char pad2[0x1c];
    EnumItem item70;
    char pad3[0x14];
    EnumItem item88;
    char pad4[0x14];
    EnumItem itema0;
    char pad5[0x14];
    EnumItem itemb8;
    char pad6[0x14];
    EnumItem itemd0;
    char pad7[0x14];
    void addPair(int, const char*);
    EnumDesc();
};

extern "C" void* __cdecl sub_6a0920(int);
extern "C" void __cdecl sub_56c590(const char*, const char*);

EnumDesc::EnumDesc()
{
    sub_56c590((const char*)0x815f7c, (const char*)0x931434);
    this->vtable = (void*)0x815ed4;
    char a, b;
    this->prop30.init(&a, &b);
    this->prop50.init(&a, &b);

    void* p;
    p = sub_6a0920(4);
    if (p) *(void**)p = &this->item70;
    else p = 0;
    this->item70.vtable = p;
    *(int*)&this->item70.pad[0] = 0;
    *(int*)&this->item70.pad[4] = 0;
    *(int*)&this->item70.pad[8] = 0;

    p = sub_6a0920(4);
    if (p) *(void**)p = &this->item88;
    else p = 0;
    this->item88.vtable = p;
    *(int*)&this->item88.pad[0] = 0;
    *(int*)&this->item88.pad[4] = 0;
    *(int*)&this->item88.pad[8] = 0;

    p = sub_6a0920(4);
    if (p) *(void**)p = &this->itema0;
    else p = 0;
    this->itema0.vtable = p;
    *(int*)&this->itema0.pad[0] = 0;
    *(int*)&this->itema0.pad[4] = 0;
    *(int*)&this->itema0.pad[8] = 0;

    p = sub_6a0920(4);
    if (p) *(void**)p = &this->itemb8;
    else p = 0;
    this->itemb8.vtable = p;
    *(int*)&this->itemb8.pad[0] = 0;
    *(int*)&this->itemb8.pad[4] = 0;
    *(int*)&this->itemb8.pad[8] = 0;

    p = sub_6a0920(4);
    if (p) *(void**)p = &this->itemd0;
    else p = 0;
    this->itemd0.vtable = p;
    *(int*)&this->itemd0.pad[0] = 0;
    *(int*)&this->itemd0.pad[4] = 0;
    *(int*)&this->itemd0.pad[8] = 0;

    this->addPair(1, (const char*)0x815f70);
    this->addPair(2, (const char*)0x815f60);
    this->addPair(3, (const char*)0x815f48);
    this->addPair(4, (const char*)0x815f34);
    this->addPair(5, (const char*)0x815f28);
}
