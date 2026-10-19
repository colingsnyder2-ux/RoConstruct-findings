// from server: 40% by colin
struct EnumDescBase {
    void construct(const char*, const char*);
};

struct TypedPropDesc {
    void init(void*, void*);
};

struct EnumItem {
    void* vtable;
    int a;
    int b;
    int c;
};

struct EnumDesc {
    void* vtable;
    char pad0[0x2c];
    TypedPropDesc prop30;
    char pad1[0x1c];
    TypedPropDesc prop50;
    EnumItem item70;
    EnumItem item88;
    EnumItem itema0;
    EnumItem itemb8;
    EnumItem itemd0;
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
    this->item70.a = 0;
    this->item70.b = 0;
    this->item70.c = 0;

    p = sub_6a0920(4);
    if (p) *(void**)p = &this->item88;
    else p = 0;
    this->item88.vtable = p;
    this->item88.a = 0;
    this->item88.b = 0;
    this->item88.c = 0;

    p = sub_6a0920(4);
    if (p) *(void**)p = &this->itema0;
    else p = 0;
    this->itema0.vtable = p;
    this->itema0.a = 0;
    this->itema0.b = 0;
    this->itema0.c = 0;

    p = sub_6a0920(4);
    if (p) *(void**)p = &this->itemb8;
    else p = 0;
    this->itemb8.vtable = p;
    this->itemb8.a = 0;
    this->itemb8.b = 0;
    this->itemb8.c = 0;

    p = sub_6a0920(4);
    if (p) *(void**)p = &this->itemd0;
    else p = 0;
    this->itemd0.vtable = p;
    this->itemd0.a = 0;
    this->itemd0.b = 0;
    this->itemd0.c = 0;

    this->addPair(1, (const char*)0x815f70);
    this->addPair(2, (const char*)0x815f60);
    this->addPair(3, (const char*)0x815f48);
    this->addPair(4, (const char*)0x815f34);
    this->addPair(5, (const char*)0x815f28);
}
