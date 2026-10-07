// roc 2008-06 00663190  unit: RBX::FilterStairs  size: 67 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00663190
//
// 00663190  83ec30               sub esp, 0x30
// 00663193  56                   push esi
// 00663194  e867240000           call 0x665600
// 00663199  8d44241c             lea eax, [esp + 0x1c]
// 0066319d  8bce                 mov ecx, esi
// 0066319f  e80cffffff           call 0x6630b0
// 006631a4  57                   push edi
// 006631a5  50                   push eax
// 006631a6  8d44240c             lea eax, [esp + 0xc]
// 006631aa  50                   push eax
// 006631ab  8bc6                 mov eax, esi
// 006631ad  e87ee4ffff           call 0x661630
// 006631b2  8b4630               mov eax, dword ptr [esi + 0x30]
// 006631b5  8d4c2410             lea ecx, [esp + 0x10]
// 006631b9  51                   push ecx
// 006631ba  8d54242c             lea edx, [esp + 0x2c]
// 006631be  52                   push edx
// 006631bf  50                   push eax
// 006631c0  e85b880000           call 0x66ba20
// 006631c5  8b4e30               mov ecx, dword ptr [esi + 0x30]
// 006631c8  57                   push edi
// 006631c9  51                   push ecx
// 006631ca  e8a17f0000           call 0x66b170
// 006631cf  83c454               add esp, 0x54
// 006631d2  c3                   ret 
// library lua-5.1.4/lparser.c (function _funcstat)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lparser.c
