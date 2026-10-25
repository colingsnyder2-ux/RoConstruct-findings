// from server: 100% by tester
// roc 2011-06 00561b40  unit: seg_00560000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00561b40
//
// 00561b40  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00561b44  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00561b48  8b542404             mov edx, dword ptr [esp + 4]
// 00561b4c  50                   push eax
// 00561b4d  51                   push ecx
// 00561b4e  6a0f                 push 0xf
// 00561b50  52                   push edx
// 00561b51  e81affffff           call 0x561a70
// 00561b56  c20c00               ret 0xc

extern void __stdcall func_0072d1f0(int, int, int, int);

void __stdcall func_0072d2c0(int a, int b, int c)
{
    func_0072d1f0(a, 0xf, b, c);
}
