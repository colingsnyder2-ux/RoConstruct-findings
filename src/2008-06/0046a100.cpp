// from server: 100% by king_originala
// roc 2008-06 0046a100  unit: DxUserInput  size: 37 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0046a100
//
// 0046a100  d9ee                 fldz 
// 0046a102  8b442410             mov eax, dword ptr [esp + 0x10]
// 0046a106  8b542408             mov edx, dword ptr [esp + 8]
// 0046a10a  51                   push ecx
// 0046a10b  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0046a10f  d91c24               fstp dword ptr [esp]
// 0046a112  6a06                 push 6
// 0046a114  50                   push eax
// 0046a115  8b442410             mov eax, dword ptr [esp + 0x10]
// 0046a119  51                   push ecx
// 0046a11a  52                   push edx
// 0046a11b  50                   push eax
// 0046a11c  e8effeffff           call 0x46a010
// 0046a121  83c418               add esp, 0x18
// 0046a124  c3                   ret 

extern void __cdecl helper(int, int, int, int, int, float);

void __cdecl func_0046a100(int a, int b, int c, int d)
{
    helper(a, b, c, d, 6, 0.0f);
}
