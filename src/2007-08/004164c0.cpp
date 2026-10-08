// from server: 30% by colin
// roc 2007-08 004164c0  unit: VCLuaFunction::?$CComObject  size: 38 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004164c0
//
// 004164c0  8b442418             mov eax, dword ptr [esp + 0x18]
// 004164c4  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 004164c8  8b542410             mov edx, dword ptr [esp + 0x10]
// 004164cc  50                   push eax
// 004164cd  8b442410             mov eax, dword ptr [esp + 0x10]
// 004164d1  51                   push ecx
// 004164d2  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 004164d6  52                   push edx
// 004164d7  50                   push eax
// 004164d8  51                   push ecx
// 004164d9  b958318800           mov ecx, 0x883158
// 004164de  e83df8feff           call 0x405d20
// 004164e3  c21800               ret 0x18

struct VCLuaFunction {
    void invoke(int, int, int, int, int, int);
};

void VCLuaFunction::invoke(int a1, int a2, int a3, int a4, int a5, int a6)
{
    extern void target_405d20();
    target_405d20();
}
