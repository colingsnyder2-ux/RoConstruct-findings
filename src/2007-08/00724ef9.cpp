// from server: 100% by colin
// roc 2007-08 00724ef9  unit: CXTIconHandle  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00724ef9
//
// 00724ef9  56                   push esi
// 00724efa  8bf1                 mov esi, ecx
// 00724efc  8d4e04               lea ecx, [esi + 4]
// 00724eff  e8acc9cdff           call 0x4018b0
// 00724f04  33c0                 xor eax, eax
// 00724f06  894620               mov dword ptr [esi + 0x20], eax
// 00724f09  894624               mov dword ptr [esi + 0x24], eax
// 00724f0c  894628               mov dword ptr [esi + 0x28], eax
// 00724f0f  8bc6                 mov eax, esi
// 00724f11  5e                   pop esi
// 00724f12  c3                   ret 

struct CXTIconHandle {
    int field0;
    int field4;
    int field8;
    int fieldC;
    int field10;
    int field14;
    int field18;
    int field1C;
    int field20;
    int field24;
    int field28;
    CXTIconHandle* construct();
};

struct Sub4018b0 {
    void method();
};

extern "C" void __stdcall sub_4018b0();

CXTIconHandle* CXTIconHandle::construct()
{
    ((Sub4018b0*)((char*)this + 4))->method();
    field20 = 0;
    field24 = 0;
    field28 = 0;
    return this;
}
