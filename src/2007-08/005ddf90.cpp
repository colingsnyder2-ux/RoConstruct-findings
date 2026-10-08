// from server: 63% by colin
// roc 2007-08 005ddf90  unit: RBX::VMotorFeature::?$FactoryProduct  size: 65 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005ddf90
//
// 005ddf90  83ec0c               sub esp, 0xc
// 005ddf93  8b442414             mov eax, dword ptr [esp + 0x14]
// 005ddf97  d900                 fld dword ptr [eax]
// 005ddf99  56                   push esi
// 005ddf9a  d90588ce7b00         fld dword ptr [0x7bce88]
// 005ddfa0  8b742414             mov esi, dword ptr [esp + 0x14]
// 005ddfa4  dcc9                 fmul st(1), st(0)
// 005ddfa6  d9c9                 fxch st(1)
// 005ddfa8  d95c2404             fstp dword ptr [esp + 4]
// 005ddfac  d94004               fld dword ptr [eax + 4]
// 005ddfaf  d8c9                 fmul st(1)
// 005ddfb1  d95c2408             fstp dword ptr [esp + 8]
// 005ddfb5  d84808               fmul dword ptr [eax + 8]
// 005ddfb8  8d442404             lea eax, [esp + 4]
// 005ddfbc  50                   push eax
// 005ddfbd  56                   push esi
// 005ddfbe  d95c2414             fstp dword ptr [esp + 0x14]
// 005ddfc2  e849ffffff           call 0x5ddf10
// 005ddfc7  83c408               add esp, 8
// 005ddfca  8bc6                 mov eax, esi
// 005ddfcc  5e                   pop esi
// 005ddfcd  83c40c               add esp, 0xc
// 005ddfd0  c3                   ret 

struct VMotorFeature {
    void sub_5DDF10(const float*, const float*);
    void func(const float*);
};

void VMotorFeature::func(const float* src)
{
    float scale = *(float*)0x7bce88;
    float tmp[3];
    tmp[0] = src[0] * scale;
    tmp[1] = src[1] * scale;
    tmp[2] = src[2] * scale;
    sub_5DDF10(tmp, src);
}
