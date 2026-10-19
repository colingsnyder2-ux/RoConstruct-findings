// from server: 82% by colin
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD /fp:fast
// from server: 80% by colin
// roc 2008-06 005989d0  unit: RBX::VTexture::?$FactoryProduct  size: 115 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005989d0
//
// 005989d0  53                   push ebx
// 005989d1  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 005989d5  56                   push esi
// 005989d6  8b74240c             mov esi, dword ptr [esp + 0xc]
// 005989da  57                   push edi
// 005989db  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 005989df  53                   push ebx
// 005989e0  57                   push edi
// 005989e1  56                   push esi
// 005989e2  e809aef7ff           call 0x5137f0
// 005989e7  d94608               fld dword ptr [esi + 8]
// 005989ea  d84f2c               fmul dword ptr [edi + 0x2c]
// 005989ed  83c40c               add esp, 0xc
// 005989f0  d94604               fld dword ptr [esi + 4]
// 005989f3  d84f28               fmul dword ptr [edi + 0x28]
// 005989f6  dec1                 faddp st(1)
// 005989f8  d94724               fld dword ptr [edi + 0x24]
// 005989fb  d80e                 fmul dword ptr [esi]
// 005989fd  dec1                 faddp st(1)
// 005989ff  d84624               fadd dword ptr [esi + 0x24]
// 00598a02  d94614               fld dword ptr [esi + 0x14]
// 00598a05  d84f2c               fmul dword ptr [edi + 0x2c]
// 00598a08  d9460c               fld dword ptr [esi + 0xc]
// 00598a0b  d84f24               fmul dword ptr [edi + 0x24]
// 00598a0e  dec1                 faddp st(1)
// 00598a10  d94610               fld dword ptr [esi + 0x10]
// 00598a13  d84f28               fmul dword ptr [edi + 0x28]
// 00598a16  dec1                 faddp st(1)
// 00598a18  d84628               fadd dword ptr [esi + 0x28]
// 00598a1b  d94620               fld dword ptr [esi + 0x20]
// 00598a1e  d84f2c               fmul dword ptr [edi + 0x2c]
// 00598a21  d94618               fld dword ptr [esi + 0x18]
// 00598a24  d84f24               fmul dword ptr [edi + 0x24]
// 00598a27  dec1                 faddp st(1)
// 00598a29  d9461c               fld dword ptr [esi + 0x1c]
// 00598a2c  d84f28               fmul dword ptr [edi + 0x28]
// 00598a2f  5f                   pop edi
// 00598a30  dec1                 faddp st(1)
// 00598a32  d8462c               fadd dword ptr [esi + 0x2c]
// 00598a35  5e                   pop esi
// 00598a36  d9ca                 fxch st(2)
// 00598a38  d95b24               fstp dword ptr [ebx + 0x24]
// 00598a3b  d95b28               fstp dword ptr [ebx + 0x28]
// 00598a3e  d95b2c               fstp dword ptr [ebx + 0x2c]
// 00598a41  5b                   pop ebx
// 00598a42  c3                   ret 





extern "C" void __cdecl sub_5137F0(float* dst, const float* a, const float* b);

struct S {
    float f0, f4, f8, f0c, f10, f14, f18, f1c, f20, f24, f28, f2c;
};

void __cdecl transform(const S* a, const S* b, S* out)
{
    sub_5137F0((float*)out, (const float*)a, (const float*)b);

    out->f24 = a->f8 * b->f2c + a->f4 * b->f28 + b->f24 * a->f0 + a->f24;
    out->f28 = a->f14 * b->f2c + a->f0c * b->f24 + a->f10 * b->f28 + a->f28;
    out->f2c = a->f20 * b->f2c + a->f18 * b->f24 + a->f1c * b->f28 + a->f2c;
}
