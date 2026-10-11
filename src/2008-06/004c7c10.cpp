// from server: 62% by colin
struct Item {
    int a;
    char pad0[0x20];
    float f24;
    float f28;
    float f2c;
    char pad1[4];
    char sub[0x30];
    Item* copyFrom(const Item* other);
    void subInit(const void* p);
};

extern "C" void __stdcall copy9(void* dst, const void* src);

void Item::subInit(const void* p) {
    copy9(sub, p);
}

Item* Item::copyFrom(const Item* other) {
    a = other->a;
    copy9(pad0, other->pad0);
    f24 = other->f24;
    f28 = other->f28;
    f2c = other->f2c;
    subInit(other->sub);
    return this;
}
