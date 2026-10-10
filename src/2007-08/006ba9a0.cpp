// from server: 41% by colin
// roc 2007-08 006ba9a0  unit: CXTPControlGalleryOffice2007Theme  size: 255 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006ba9a0

struct CXTPControlGalleryOffice2007Theme
{
    unsigned char pad_000[0x68];
    int m_n68;
    unsigned char pad_06c[0x1c];
    int m_n88;
    unsigned char pad_08c[0x44];
    void* m_pD0;
    unsigned char pad_0d4[0x3c];
    int m_n110;
    unsigned char pad_114[0x324];
    int m_n438;
    unsigned char pad_43c[0x154];
    int m_n590;
    int m_n594;
    int m_n598;
    int m_n59c;
    unsigned char pad_5a0[0x8];
    int m_n5a8;
    unsigned char pad_5ac[0x34];
    unsigned char m_obj5e0[0x20];
    unsigned char m_obj600[0x20];
};

extern "C" void __stdcall sub_6bee10();
extern "C" void __stdcall sub_6684c0();
extern "C" void __stdcall sub_69f160();
extern "C" void __stdcall sub_62fc62();
extern "C" void* __stdcall sub_62fef6(unsigned int size);
extern "C" void __stdcall sub_6b3b00();
extern "C" int __stdcall sub_710f20();

CXTPControlGalleryOffice2007Theme* __fastcall Construct(CXTPControlGalleryOffice2007Theme* self)
{
    sub_6bee10();
    self->m_n598 = 0;
    self->m_n594 = 0x7c6550;
    self->m_n59c = 1;
    sub_6684c0();
    sub_6684c0();
    self->m_n110 = 1;
    self->m_n438 = 0;
    self->m_n68 = 1;
    self->m_n590 = 0;
    self->m_n88 = 1;
    if (self->m_pD0 != 0)
    {
        sub_69f160();
        sub_62fc62();
    }
    void* p = sub_62fef6(0x38);
    if (p != 0)
    {
        sub_6b3b00();
        *(int*)p = 0x7d669c;
    }
    else
    {
        p = 0;
    }
    self->m_pD0 = p;
    self->m_n5a8 = sub_710f20();
    return self;
}
