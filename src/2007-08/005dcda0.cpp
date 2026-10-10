// from server: 35% by colin
struct EnumPropertyDescriptor {
    void construct();
};

struct EnumPropDescriptor : EnumPropertyDescriptor {
    void construct();
};

void EnumPropDescriptor::construct() {
    this->EnumPropertyDescriptor::construct();
    *(int*)((char*)this + 0x0) = 0x7bc6d4;
    *(int*)((char*)this + 0x4) = 0x7bc6cc;
    *(int*)((char*)this + 0x10) = 0x7bc6c4;
    *(int*)((char*)this + 0x14) = 0x7bc6b4;
    *(int*)((char*)this + 0x2c) = 0x7bc6a4;
    *(int*)((char*)this + 0x44) = 0x7bc694;
    *(int*)((char*)this + 0x5c) = 0x7bc684;
    *(int*)((char*)this + 0x74) = 0x7bc674;
    *(int*)((char*)this + 0x8c) = 0x7bc664;
    *(int*)((char*)this + 0xc) = 0;
}
