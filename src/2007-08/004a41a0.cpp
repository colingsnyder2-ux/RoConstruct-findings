// from server: 37% by colin
// roc 2007-08 004a41a0  unit: RBX::IdManager::UItem::?$TItem  size: 170 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004a41a0

struct Descriptor {
    void* vtable;
    int field4;
};

struct Item {
    void* field0;
    int field4;
    int field8;
};

struct Container {
    char pad[0xc];
    void* fieldC;
};

struct EnumDescriptor {
    char pad[0xac];
    void* fieldAC;
};

struct S {
    Descriptor* field0;
    void* field4;
    Container fieldC;
    Item* findOrCreate(EnumDescriptor* ed);
};

extern "C" void __stdcall sub_725750(void* p);
extern "C" void __stdcall sub_725770(void* p);
extern "C" int __stdcall sub_4a3fd0(void* p);
extern "C" void* __stdcall sub_4a3e90(void* p);

Item* S::findOrCreate(EnumDescriptor* ed) {
    if (ed == 0) {
        return 0;
    }
    void* ebp = this->field4;
    sub_725750(ebp);
    Item* esi = (Item*)sub_4a3fd0(&ed->fieldAC);
    if (esi->field0 == 0) {
        esi->field8 = (int)ed;
        esi->field0 = (void*)this;
        void* vt = this->field0->vtable;
        int (*fn)(void*) = *(int (**)(void*))((char*)vt + 4);
        void* result = (void*)fn(this);
        esi->field4 = (int)result;
        void* p = sub_4a3e90(&this->fieldC);
        *(void**)p = esi;
    }
    Item* ret = (Item*)esi->field4;
    sub_725770(ebp);
    return ret;
}
