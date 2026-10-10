// from server: 37% by colin
struct FactoryProduct {
    void construct();
    int init();
    char pad[0x90];
};

extern "C" void __fastcall sub_5F04A0(void*);
extern "C" int __fastcall sub_5F3A40();

void FactoryProduct::construct() {
    sub_5F04A0(this);
    *(int*)((char*)this + 0x00) = 0x7c0db4;
    *(int*)((char*)this + 0x04) = 0x7c0dac;
    *(int*)((char*)this + 0x10) = 0x7c0da4;
    *(int*)((char*)this + 0x14) = 0x7c0d94;
    *(int*)((char*)this + 0x2c) = 0x7c0d84;
    *(int*)((char*)this + 0x44) = 0x7c0d74;
    *(int*)((char*)this + 0x5c) = 0x7c0d64;
    *(int*)((char*)this + 0x74) = 0x7c0d54;
    *(int*)((char*)this + 0x8c) = 0x7c0d44;
    *(int*)((char*)this + 0x0c) = sub_5F3A40();
}

FactoryProduct* FactoryProduct_ctor(FactoryProduct* self) {
    self->construct();
    return self;
}
