// from server: 48% by tester




struct Vec3 {
    float x;
    float y;
    float z;
};

struct Stage {
    char pad0[0x18];
    void* field18;
    char pad1[0x24 - 0x1c];
    void* field1c;
    char pad2[0x50 - 0x20];
    float field50;
    char field54;
    char pad3[0x58 - 0x55];
    int field58;
    char pad4[0x60 - 0x5c];
    int field60;
    int field64;
};

extern "C" void __stdcall sub_6144E0(void* out, void* arg);
extern "C" void __stdcall sub_668A20(void* self, void* out, float val);
extern "C" void __stdcall sub_668AF0(void* self, void* out, float val, float val2);

extern float g_827488;

void Stage_0064a6c0(Stage* self, void* arg)
{
    Vec3 v;
    sub_6144E0(&v, *(void**)(*(char**)((char*)self->field1c + 0x1c) + 0xa0));

    if (self->field54) {
        int ecx = self->field64 + self->field58;
        int (*fn)(int) = (int (*)(int))self->field60;
        fn(ecx);
        self->field50 = *(float*)&ecx;
        self->field54 = 0;
    }

    float f = self->field50;
    void* p = (char*)self->field18 + 8;
    sub_668A20(p, &v, f);
    sub_668AF0(p, &v, g_827488, f);
}
