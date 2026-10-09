// from server: 58% by colin
// roc 2007-08 004eed00  unit: PBBBuilder  size: 88 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004eed00
//
// 004eed00  d9442408             fld dword ptr [esp + 8]
// 004eed04  8b442414             mov eax, dword ptr [esp + 0x14]
// 004eed08  dd05485b7900         fld qword ptr [0x795b48]
// 004eed0e  8b542404             mov edx, dword ptr [esp + 4]
// 004eed12  dcc9                 fmul st(1), st(0)
// 004eed14  56                   push esi
// 004eed15  8bf1                 mov esi, ecx
// 004eed17  d9c9                 fxch st(1)
// 004eed19  c706a8f37900         mov dword ptr [esi], 0x79f3a8
// 004eed1f  d95e04               fstp dword ptr [esi + 4]
// 004eed22  8d4e14               lea ecx, [esi + 0x14]
// 004eed25  d9442410             fld dword ptr [esp + 0x10]
// 004eed29  d8c9                 fmul st(1)
// 004eed2b  d95e08               fstp dword ptr [esi + 8]
// 004eed2e  d84c2414             fmul dword ptr [esp + 0x14]
// 004eed32  d95e0c               fstp dword ptr [esi + 0xc]
// 004eed35  894610               mov dword ptr [esi + 0x10], eax
// 004eed38  c70100000000         mov dword ptr [ecx], 0
// 004eed3e  8b02                 mov eax, dword ptr [edx]
// 004eed40  50                   push eax
// 004eed41  e82a62f8ff           call 0x474f70
// 004eed46  d90588797900         fld dword ptr [0x797988]
// 004eed4c  d95618               fst dword ptr [esi + 0x18]
// 004eed4f  8bc6                 mov eax, esi
// 004eed51  d95e1c               fstp dword ptr [esi + 0x1c]
// 004eed54  5e                   pop esi
// 004eed55  c21400               ret 0x14

struct PBBBuilder {
    void* vtable;
    float field4;
    float field8;
    float fieldC;
    int field10;
    int field14;
    float field18;
    float field1C;

    PBBBuilder* construct(float a, float b, float c, int d, int e);
};

extern double g_795b48;
extern float g_797988;
extern void* g_79f3a8;

extern "C" void __stdcall sub_474f70(void* p);

PBBBuilder* PBBBuilder::construct(float a, float b, float c, int d, int e)
{
    float s = (float)g_795b48;
    this->vtable = &g_79f3a8;
    this->field4 = a * s;
    this->field8 = b * s;
    this->fieldC = c * s;
    this->field10 = e;
    this->field14 = 0;
    sub_474f70(*(void**)d);
    this->field18 = g_797988;
    this->field1C = g_797988;
    return this;
}
