// from server: 97% by colin
struct BodyMover {
    void construct(const char*);
};

struct BodyVelocity : BodyMover {
    char pad[0xfc - 8];
    float field_fc;
    float field_100;
    float field_104;
    BodyVelocity* init();
};

extern float g_8bfbe8;
extern float g_8bfbec;
extern float g_8bfbf0;
extern unsigned int g_8bfbf4;

BodyVelocity* BodyVelocity::init() {
    this->construct((const char*)0x8af3f4);
    *(void**)((char*)this + 0) = (void*)0x7bfa1c;
    *(void**)((char*)this + 4) = (void*)0x7bfa14;
    *(void**)((char*)this + 0x10) = (void*)0x7bfa0c;
    *(void**)((char*)this + 0x14) = (void*)0x7bf9fc;
    *(void**)((char*)this + 0x2c) = (void*)0x7bf9ec;
    *(void**)((char*)this + 0x44) = (void*)0x7bf9dc;
    *(void**)((char*)this + 0x5c) = (void*)0x7bf9cc;
    *(void**)((char*)this + 0x74) = (void*)0x7bf9bc;
    *(void**)((char*)this + 0x8c) = (void*)0x7bf9ac;
    *(void**)((char*)this + 0xe8) = (void*)0x7bf994;
    *(void**)((char*)this + 0xf0) = (void*)0x7bf988;

    if (!(g_8bfbf4 & 1)) {
        g_8bfbf4 |= 1;
        g_8bfbe8 = 0.0f;
        g_8bfbec = 1.0f;
        g_8bfbf0 = 0.0f;
    }

    this->field_fc = g_8bfbe8;
    this->field_100 = g_8bfbec;
    this->field_104 = g_8bfbf0;
    return this;
}
