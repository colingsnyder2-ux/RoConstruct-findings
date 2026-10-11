// from server: 100% by colin
// roc 2007-08 006641b0  unit: VCXTPReportRows::?$CXTPHeapObjectT  size: 44 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006641b0
//
// 006641b0  56                   push esi
// 006641b1  8bf1                 mov esi, ecx
// 006641b3  837e3400             cmp dword ptr [esi + 0x34], 0
// 006641b7  7e07                 jle 0x6641c0
// 006641b9  c7464001000000       mov dword ptr [esi + 0x40], 1
// 006641c0  6aff                 push -1
// 006641c2  6a00                 push 0
// 006641c4  8d4e2c               lea ecx, [esi + 0x2c]
// 006641c7  e8447f0700           call 0x6dc110
// 006641cc  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 006641cf  c74624ffffffff       mov dword ptr [esi + 0x24], 0xffffffff
// 006641d6  5e                   pop esi
// 006641d7  e93432ffff           jmp 0x657410

struct VCXTPReportRows_CXTPHeapObjectT
{
    char pad_0000[0x20];
    int field_20;
    int field_24;
    char pad_0028[0x04];
    char field_2c[0x08];
    int field_34;
    char pad_0038[0x08];
    int field_40;

    void func_006641b0();
};

struct Sub2C
{
    void method(int, int);
};

extern "C" void __fastcall sub_00657410(int);

void VCXTPReportRows_CXTPHeapObjectT::func_006641b0()
{
    if (field_34 > 0)
        field_40 = 1;
    ((Sub2C*)field_2c)->method(0, -1);
    int v = field_20;
    field_24 = -1;
    sub_00657410(v);
}
