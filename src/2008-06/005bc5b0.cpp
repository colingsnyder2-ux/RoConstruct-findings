// from server: 67% by colin
struct Instance {
    char pad[0x100];
    Instance* next;
};

struct ServiceProvider {
    ServiceProvider* finish();
};

extern "C" ServiceProvider* __cdecl func_004651c0(Instance* p);

struct SoundService {
    char pad0[0x130];
    int field130;
    char pad1[0x13c - 0x134];
    int field13c;
    char pad2[0x165 - 0x140];
    unsigned char field165;
    char pad3[0x16c - 0x166];
    int field16c;

    void method_004218a0(int* p);
    void method_005e5a80(int* p);
    void f();
};

void SoundService::f() {
    if (field16c != 0 && (field165 & 1) != 0 && field13c != 0) {
        ServiceProvider* sp = func_004651c0((Instance*)((char*)this + 0x130));
        if (sp == 0) return;
        method_004218a0((int*)((char*)sp + 0x130));
        return;
    }
    ServiceProvider* sp = func_004651c0((Instance*)((char*)this + 0x130));
    if (sp == 0) return;
    method_005e5a80((int*)((char*)sp + 0x130));
}
