// from server: 91% by colin
// roc 2007-08 00668ec0  unit: CXTPPaintManagerColor  size: 24 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00668ec0
//
// 00668ec0  8b442404             mov eax, dword ptr [esp + 4]
// 00668ec4  d9059c7e7900         fld dword ptr [0x797e9c]
// 00668eca  51                   push ecx
// 00668ecb  d91c24               fstp dword ptr [esp]
// 00668ece  50                   push eax
// 00668ecf  50                   push eax
// 00668ed0  e81bf6ffff           call 0x6684f0
// 00668ed5  c20400               ret 4

extern float G_float_797e9c;
extern void __stdcall G_func_6684f0(int, int, float);

void __stdcall func_00668ec0(int a)
{
    G_func_6684f0(a, a, G_float_797e9c);
}
