// from server: 63% by colin
struct Name {
    char pad[0xe8];
    int field_e8;
};

struct Base {
    void construct();
};

struct FactoryProduct : Base {
    void init();
};

extern "C" {
    void __stdcall sub_77e698(void*);
    void __stdcall sub_77e6ac(void*);
}

void __stdcall sub_541bf0(void*, void*);

void FactoryProduct::init() {
    construct();
    *(int*)((char*)this + 0x00) = 0x7c1a7c;
    *(int*)((char*)this + 0x04) = 0x7c1a74;
    *(int*)((char*)this + 0x10) = 0x7c1a6c;
    *(int*)((char*)this + 0x14) = 0x7c1a5c;
    *(int*)((char*)this + 0x2c) = 0x7c1a4c;
    *(int*)((char*)this + 0x44) = 0x7c1a3c;
    *(int*)((char*)this + 0x5c) = 0x7c1a2c;
    *(int*)((char*)this + 0x74) = 0x7c1a1c;
    *(int*)((char*)this + 0x8c) = 0x7c1a0c;
    *(int*)((char*)this + 0xe8) = *(int*)0x8c7e9c;
    char buf[0x1c];
    sub_77e698(buf);
    sub_541bf0(this, buf);
    sub_77e6ac(buf);
}
