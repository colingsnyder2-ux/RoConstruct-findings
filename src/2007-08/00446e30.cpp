// from server: 18% by colin
struct EnumDescriptor {
    void* vtable;
    int field4;
    int field8;
    int fieldC;
    int field10;
    int field14;
    int field18;
};

struct Item {
    void* vtable;
    int field4;
    int field8;
    int fieldC;
    int field10;
    int field14;
};

struct EnumDesc : EnumDescriptor {
    EnumDesc(int a, int b, int c, int d);
};

extern "C" void __cdecl free_(void*);
extern "C" void* __cdecl operator_new(unsigned int);
extern "C" void __cdecl unknown_446820();
extern "C" void __cdecl unknown_442de0();

EnumDesc::EnumDesc(int a, int b, int c, int d)
{
    this->field18 = 0;
    this->fieldC = 0;
    unknown_446820();
    unknown_442de0();
    free_(0);
    this->vtable = (void*)0x78f7f4;
    Item* item = (Item*)operator_new(0x18);
    if (item) {
        item->field8 = this->fieldC;
        item->vtable = (void*)0x78fbfc;
        item->field4 = (int)this;
        item->field10 = 0;
        item->field14 = 0;
    } else {
        item = 0;
    }
    if (item != (Item*)this->field18) {
        free_((void*)this->field18);
    }
    this->field18 = (int)item;
}
