// from server: 69% by colin
// roc 2007-08 005969f0  unit: RBX::LaserTool  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005969f0
//
// 005969f0  8b442410             mov eax, dword ptr [esp + 0x10]
// 005969f4  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 005969f8  8b542408             mov edx, dword ptr [esp + 8]
// 005969fc  50                   push eax
// 005969fd  51                   push ecx
// 005969fe  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00596a02  52                   push edx
// 00596a03  e888ffffff           call 0x596990
// 00596a08  c3                   ret 

extern "C" void __stdcall func_00596990(int, int, int);

void func_005969f0(int a, int b, int c)
{
    func_00596990(a, b, c);
}
