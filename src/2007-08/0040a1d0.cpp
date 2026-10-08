// from server: 86% by colin
// roc 2007-08 0040a1d0  unit: VCApp::?$CComObject  size: 38 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0040a1d0
//
// 0040a1d0  8b442418             mov eax, dword ptr [esp + 0x18]
// 0040a1d4  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0040a1d8  8b542410             mov edx, dword ptr [esp + 0x10]
// 0040a1dc  50                   push eax
// 0040a1dd  8b442410             mov eax, dword ptr [esp + 0x10]
// 0040a1e1  51                   push ecx
// 0040a1e2  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0040a1e6  52                   push edx
// 0040a1e7  50                   push eax
// 0040a1e8  51                   push ecx
// 0040a1e9  b950178800           mov ecx, 0x881750
// 0040a1ee  e82dbbffff           call 0x405d20
// 0040a1f3  c21800               ret 0x18

extern "C" void __stdcall func_00405d20(int, int, int, int, int, int);

void func_0040a1d0(int a1, int a2, int a3, int a4, int a5, int a6)
{
    func_00405d20(a1, a2, a3, a4, a5, a6);
}
