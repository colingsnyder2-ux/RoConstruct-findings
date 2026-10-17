// from server: 47% by colin




extern "C" void __cdecl free_6a067a(void* p);
extern "C" void __cdecl sub_6a0a1c(void* p);

struct Inner90 {
    void sub_450450();
};

struct Inner74 {
    void sub_413a70();
};

struct Inner54 {
    void sub_553d80();
};

struct VerbBinder {
    void* vtable;          // 0x00
    char pad0[0x50];       // 0x04
    Inner54 m54;           // 0x54
    char pad1[0x1c];       // 0x58
    Inner74* m74;          // 0x74
    void* m78;             // 0x78
    char pad2[0x08];       // 0x7c
    void* m84;             // 0x84
    void* m88;             // 0x88
    void* m8c;             // 0x8c
    Inner90* m90;          // 0x90

    ~VerbBinder();
};

VerbBinder::~VerbBinder()
{
    this->vtable = (void*)0x817ce4;
    Inner90* p90 = this->m90;
    if (p90 != 0) {
        p90->sub_450450();
        free_6a067a(p90);
    }
    void* p84 = this->m84;
    if (p84 != 0) {
        free_6a067a(p84);
    }
    free_6a067a(this->m78);
    this->m84 = 0;
    this->m88 = 0;
    this->m8c = 0;
    Inner74* p74 = this->m74;
    if (p74 != 0) {
        p74->sub_413a70();
        free_6a067a(p74);
    }
    this->m54.sub_553d80();
    sub_6a0a1c(this);
}
