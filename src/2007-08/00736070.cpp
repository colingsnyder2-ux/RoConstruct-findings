// from server: 93% by colin
struct Sky {
    char pad0[0x3c];
    float f3c;
    float f40;
    float f44;
    char pad48[0x4];
    unsigned char b4c;
    char pad4d[0x3];
    float f50;
    float f54;
    float f58;
    float f5c;
    float f60;
    float f64;
    float f68;
    float f6c;
    float f70;
    float f74;
    float f78;
    float f7c;
    char pad80[0x8];
    char sub88[0x30];
    char subB8[0x30];
    float fe8;
    float fec;
    float ff0;
};

extern "C" void __fastcall sub_475050(void* p);
extern "C" void __fastcall sub_735250(Sky* self, float v);
extern "C" void __fastcall sub_735360(Sky* self, double v);

extern float g_7e8d80;

Sky* __fastcall Sky_ctor(Sky* self) {
    self->f3c = 0.0f;
    self->f40 = 0.0f;
    self->f44 = 0.0f;
    self->f50 = 0.0f;
    self->f54 = 0.0f;
    self->f58 = 0.0f;
    self->f5c = 0.0f;
    self->f60 = 0.0f;
    self->f64 = 0.0f;
    self->f68 = 0.0f;
    self->f6c = 0.0f;
    self->f70 = 0.0f;
    self->f74 = 0.0f;
    self->f78 = 0.0f;
    self->f7c = 0.0f;
    sub_475050(self->sub88);
    sub_475050(self->subB8);
    self->fe8 = 0.0f;
    self->fec = 0.0f;
    self->ff0 = 0.0f;
    self->b4c = 1;
    sub_735250(self, g_7e8d80);
    sub_735360(self, 0.0);
    return self;
}
