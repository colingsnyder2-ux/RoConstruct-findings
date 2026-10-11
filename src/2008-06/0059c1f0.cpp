// from server: 48% by colin
// roc 2008-06 0059c1f0  unit: RBX::PartInstance::W4FormFactor::?$EnumDesc  size: 392 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0059c1f0

extern "C" void __cdecl _invalid_parameter_noinfo();
extern "C" void __cdecl sub_6A067A(void* p);
extern "C" void __cdecl sub_4077D0(void* p);
extern "C" void __cdecl sub_553D80(void* p);
extern "C" void __cdecl sub_56C080(void* p);

struct S {
    void* vtable;          // 0x00
    char pad_04[0x18];     // 0x04
    void** begin;          // 0x1c
    void** end;            // 0x20
    char pad_24[0x0c];     // 0x24
    char field_30[0x20];   // 0x30
    char field_50[0x20];   // 0x50
    void* field_70;        // 0x70
    void* field_74;        // 0x74
    void* field_78;        // 0x78
    void* field_7c;        // 0x7c
    void* field_80;        // 0x80
    void* field_84;        // 0x84
    void* field_88;        // 0x88
    char pad_8c[0x14];     // 0x8c
    void* field_a0;        // 0xa0
    void* field_a4;        // 0xa4
    void* field_a8;        // 0xa8
    void* field_ac;        // 0xac
    void* field_b0;        // 0xb0
    void* field_b4;        // 0xb4
    void* field_b8;        // 0xb8
    char pad_bc[0x08];     // 0xbc
    void* field_c4;        // 0xc4
    void* field_c8;        // 0xc8
    void* field_cc;        // 0xcc
    void* field_d0;        // 0xd0
    char pad_d4[0x08];     // 0xd4
    void* field_dc;        // 0xdc
    void* field_e0;        // 0xe0
    void* field_e4;        // 0xe4

    void destroy();
};

void S::destroy()
{
    void** it;
    void** last;
    void* p;

    this->vtable = (void*)0x832dc4;

    last = this->end;
    if (this->begin > last)
        _invalid_parameter_noinfo();

    it = this->begin;
    if (it > this->end)
        _invalid_parameter_noinfo();

    while (it != last) {
        p = *it;
        if (p != 0) {
            void** vt = *(void***)p;
            void (*fn)(void*, int) = (void (*)(void*, int))vt[0];
            fn(p, 1);
        }
        ++it;
    }

    if (this->field_dc != 0) {
        sub_6A067A(this->field_dc);
    }
    sub_6A067A(this->field_d0);
    this->field_dc = 0;
    this->field_e0 = 0;
    this->field_e4 = 0;

    if (this->field_c4 != 0) {
        sub_6A067A(this->field_c4);
    }
    sub_6A067A(this->field_b8);
    this->field_c4 = 0;
    this->field_c8 = 0;
    this->field_cc = 0;

    if (this->field_ac != 0) {
        sub_6A067A(this->field_ac);
    }
    sub_6A067A(this->field_a0);
    this->field_ac = 0;
    this->field_b0 = 0;
    this->field_b4 = 0;

    sub_4077D0(&this->field_88);
    sub_6A067A(this->field_88);

    if (this->field_7c != 0) {
        sub_6A067A(this->field_7c);
    }
    sub_6A067A(this->field_70);
    this->field_7c = 0;
    this->field_80 = 0;
    this->field_84 = 0;

    sub_553D80(&this->field_50);
    sub_553D80(&this->field_30);
    sub_56C080(this);
}
