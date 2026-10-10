// from server: 63% by colin
// roc 2007-08 005f6ac0  unit: G3D::VCoordinateFrame::V?$Value::?$FactoryProduct  size: 210 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005f6ac0

extern "C" {
    int __stdcall MSVCP80_basic_string_ctor_PBD(void* self, const char* s);
    int __stdcall MSVCP80_basic_string_dtor(void* self);
}

struct S {
    char pad0[0xe8];
    float f_e8;
    float f_ec;
    float f_f0;
    void sub_5f5ae0();
    void sub_541bf0(void* arg);
    S();
};

S::S()
{
    sub_5f5ae0();
    *(int*)((char*)this + 0x00) = 0x7c19c4;
    *(int*)((char*)this + 0x04) = 0x7c19bc;
    *(int*)((char*)this + 0x10) = 0x7c19b4;
    *(int*)((char*)this + 0x14) = 0x7c19a4;
    *(int*)((char*)this + 0x2c) = 0x7c1994;
    *(int*)((char*)this + 0x44) = 0x7c1984;
    *(int*)((char*)this + 0x5c) = 0x7c1974;
    *(int*)((char*)this + 0x74) = 0x7c1964;
    *(int*)((char*)this + 0x8c) = 0x7c1954;
    f_e8 = *(float*)0x8c7da0;
    f_ec = *(float*)0x8c7da4;
    f_f0 = *(float*)0x8c7da8;
    char buf[0x1c];
    MSVCP80_basic_string_ctor_PBD(buf, (const char*)0x791ec4);
    sub_541bf0(buf);
    MSVCP80_basic_string_dtor(buf);
}
