// from server: 94% by atomic.potato
struct TexturePtr {
    char pad0[0x10];
    int f10;
    int f14;
    int f18;
    int f1c;
    int f20;
    char f24;
};

extern "C" void __stdcall TexturePtr_ctor(TexturePtr* self, const TexturePtr* other);

struct ManualObject {
    char pad0[0x10];
    int f10;
    int f14;
    int f18;
    int f1c;
    int f20;
    char f24;
    ManualObject* assign(const ManualObject* other);
};

ManualObject* ManualObject::assign(const ManualObject* other) {
    TexturePtr_ctor((TexturePtr*)this, (const TexturePtr*)other);
    f10 = other->f10;
    f14 = other->f14;
    f18 = other->f18;
    f1c = other->f1c;
    f20 = other->f20;
    f24 = other->f24;
    return this;
}
