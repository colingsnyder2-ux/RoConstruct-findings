// from server: 54% by colin




extern "C" void __cdecl free_6a067a(void* p);
extern "C" void __cdecl sub_6a0a1c(void* p);

struct Opaque28 { char data[0x28]; ~Opaque28(); };
struct Opaque24 { char data[0x24]; ~Opaque24(); };

struct Inner90 {
    void sub_450450();
    ~Inner90();
};

struct Inner74 {
    void sub_413a70();
    ~Inner74();
};

struct Inner54 {
    void sub_553d80();
};

struct VCRobloxDoc {
    void* vtable;              // 0x00
    Opaque28 m0;               // 0x04
    Opaque28 m1;               // 0x2c
    Inner54 m2;                // 0x54
    Opaque24 m3;               // 0x70
    Inner74* p74;              // 0x74
    void* p78;                 // 0x78
    char pad7c[8];             // 0x7c
    void* p84;                 // 0x84
    void* p88;                 // 0x88
    void* p8c;                 // 0x8c
    Inner90* p90;              // 0x90

    ~VCRobloxDoc();
};

VCRobloxDoc::~VCRobloxDoc()
{
    this->vtable = (void*)0x817ce4;

    Inner90* p90 = this->p90;
    if (p90 != 0) {
        p90->sub_450450();
        free_6a067a(p90);
    }

    void* p84 = this->p84;
    if (p84 != 0) {
        free_6a067a(p84);
    }

    free_6a067a(this->p78);
    this->p84 = 0;
    this->p88 = 0;
    this->p8c = 0;

    Inner74* p74 = this->p74;
    if (p74 != 0) {
        p74->sub_413a70();
        free_6a067a(p74);
    }

    this->m2.sub_553d80();

    sub_6a0a1c(this);
}
