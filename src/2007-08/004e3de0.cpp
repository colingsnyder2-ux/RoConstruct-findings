// from server: 87% by colin
// roc 2007-08 004e3de0  unit: PBBBuilder  size: 87 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004e3de0
//
// 004e3de0  56                   push esi
// 004e3de1  8bf1                 mov esi, ecx
// 004e3de3  c706a8f37900         mov dword ptr [esi], 0x79f3a8
// 004e3de9  57                   push edi
// 004e3dea  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 004e3dee  d94704               fld dword ptr [edi + 4]
// 004e3df1  8d4e14               lea ecx, [esi + 0x14]
// 004e3df4  d95e04               fstp dword ptr [esi + 4]
// 004e3df7  d94708               fld dword ptr [edi + 8]
// 004e3dfa  d95e08               fstp dword ptr [esi + 8]
// 004e3dfd  d9470c               fld dword ptr [edi + 0xc]
// 004e3e00  d95e0c               fstp dword ptr [esi + 0xc]
// 004e3e03  8b4710               mov eax, dword ptr [edi + 0x10]
// 004e3e06  894610               mov dword ptr [esi + 0x10], eax
// 004e3e09  c70100000000         mov dword ptr [ecx], 0
// 004e3e0f  8b5714               mov edx, dword ptr [edi + 0x14]
// 004e3e12  52                   push edx
// 004e3e13  e85811f9ff           call 0x474f70
// 004e3e18  d94718               fld dword ptr [edi + 0x18]
// 004e3e1b  d95e18               fstp dword ptr [esi + 0x18]
// 004e3e1e  8bc6                 mov eax, esi
// 004e3e20  d9471c               fld dword ptr [edi + 0x1c]
// 004e3e23  d95e1c               fstp dword ptr [esi + 0x1c]
// 004e3e26  c70668f37900         mov dword ptr [esi], 0x79f368
// 004e3e2c  d94720               fld dword ptr [edi + 0x20]
// 004e3e2f  5f                   pop edi
// 004e3e30  d95e20               fstp dword ptr [esi + 0x20]
// 004e3e33  5e                   pop esi
// 004e3e34  c20400               ret 4

struct PBBBuilder {
    char pad0[4];
    float f4;
    float f8;
    float fc;
    int f10;
    char pad14[4];
    float f18;
    float f1c;
    float f20;
    PBBBuilder* ctor(PBBBuilder* other);
};

extern "C" void __stdcall sub_474f70(int);

PBBBuilder* PBBBuilder::ctor(PBBBuilder* other)
{
    *(int*)this = 0x79f3a8;
    f4 = *(float*)((char*)other + 4);
    f8 = *(float*)((char*)other + 8);
    fc = *(float*)((char*)other + 0xc);
    f10 = *(int*)((char*)other + 0x10);
    *(int*)((char*)this + 0x14) = 0;
    sub_474f70(*(int*)((char*)other + 0x14));
    f18 = *(float*)((char*)other + 0x18);
    f1c = *(float*)((char*)other + 0x1c);
    *(int*)this = 0x79f368;
    f20 = *(float*)((char*)other + 0x20);
    return this;
}
