// from server: 51% by colin
struct Explosion {
    char pad[0x14];
    float elapsed;
    char pad2[0xc];
    float blastRadius;
    float blastPressure;
    float destroyJointRadiusPercent;
    char pad3[0xc0];
    void onStepped(float dt);
};

extern float g_blastMax;

extern "C" void __stdcall sub_57adb0(void*);
extern "C" void __stdcall sub_5ff4b0(void*, void*);
extern "C" void __stdcall sub_5e9290(void*, void*);
extern "C" void __stdcall sub_5e7a80(void*, void*);
extern "C" void __stdcall sub_4ff810(void*);
extern "C" void __stdcall sub_541630(void*, int);

void Explosion::onStepped(float dt)
{
    elapsed += dt;
    if (elapsed >= g_blastMax)
        return;

    if (blastPressure <= 0.0f)
        return;

    char local[0x30];
    *(int*)(local + 0x00) = 0;
    *(int*)(local + 0x04) = 0;
    *(int*)(local + 0x08) = 0;
    *(int*)(local + 0x30) = 0;

    Explosion* self = (Explosion*)((char*)this - 0xe8);

    sub_57adb0(self);

    float r = blastRadius;
    float px = *(float*)((char*)this + 0x18);
    float py = *(float*)((char*)this + 0x1c);
    float pz = *(float*)((char*)this + 0x20);

    *(float*)(local + 0x18) = px + r;
    *(float*)(local + 0x1c) = py + r;
    *(float*)(local + 0x20) = pz + r;
    *(float*)(local + 0x24) = px - r;
    *(float*)(local + 0x28) = py - r;
    *(float*)(local + 0x2c) = pz - r;

    void* p = *(void**)((char*)this + 0x30);
    sub_5ff4b0(p, local + 0x18);

    sub_5e9290(self, local + 0x18);
    sub_5e7a80(self, local + 0x18);

    void* q = *(void**)(local + 0x00);
    *(int*)(local + 0x30) = -1;
    sub_4ff810(q);

    sub_541630(self, 0);
}
