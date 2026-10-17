// from server: 36% by colin
struct Opaque { char data[0x24]; ~Opaque(); };
struct Sub54 { void destroy(); };

extern "C" void __cdecl free_6a067a(void*);
extern "C" void __cdecl sub_413a70(void*);
extern "C" void __cdecl sub_450450(void*);
extern "C" void __cdecl sub_553d80(void*);
extern "C" void __cdecl sub_6a0a1c(void*);

struct VerbBinder {
    void* vtbl;          // 0x00
    char pad[0x50];      // 0x04
    Sub54 m54;           // 0x54
    char pad2[0x1c];     // 0x58
    void* m74;           // 0x74
    void* m78;           // 0x78
    char pad3[0x08];     // 0x7c
    void* m84;           // 0x84
    void* m88;           // 0x88
    void* m8c;           // 0x8c
    void* m90;           // 0x90
    void destroy();
};

void VerbBinder::destroy()
{
    void* p90 = m90;
    vtbl = (void*)0x817ce4;
    if (p90) {
        sub_450450(p90);
        free_6a067a(p90);
    }
    void* p84 = m84;
    if (p84) {
        free_6a067a(p84);
    }
    void* p78 = m78;
    free_6a067a(p78);
    m84 = 0;
    m88 = 0;
    m8c = 0;
    void* p74 = m74;
    if (p74) {
        sub_413a70(p74);
        free_6a067a(p74);
    }
    sub_553d80(&m54);
    sub_6a0a1c(this);
}
