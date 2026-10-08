// from server: 100% by auto
// roc 2009-06 006f0230  unit: seg_006f0000  size: 67 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006f0230
//
// 006f0230  83ec30               sub esp, 0x30
// 006f0233  56                   push esi
// 006f0234  e8a7240000           call 0x6f26e0
// 006f0239  8d44241c             lea eax, [esp + 0x1c]
// 006f023d  8bce                 mov ecx, esi
// 006f023f  e80cffffff           call 0x6f0150
// 006f0244  57                   push edi
// 006f0245  50                   push eax
// 006f0246  8d44240c             lea eax, [esp + 0xc]
// 006f024a  50                   push eax
// 006f024b  8bc6                 mov eax, esi
// 006f024d  e84ee4ffff           call 0x6ee6a0
// 006f0252  8b4630               mov eax, dword ptr [esi + 0x30]
// 006f0255  8d4c2410             lea ecx, [esp + 0x10]
// 006f0259  51                   push ecx
// 006f025a  8d54242c             lea edx, [esp + 0x2c]
// 006f025e  52                   push edx
// 006f025f  50                   push eax
// 006f0260  e86ba70000           call 0x6fa9d0
// 006f0265  8b4e30               mov ecx, dword ptr [esi + 0x30]
// 006f0268  57                   push edi
// 006f0269  51                   push ecx
// 006f026a  e8a19e0000           call 0x6fa110
// 006f026f  83c454               add esp, 0x54
// 006f0272  c3                   ret 
// library lua-5.1.4/lparser.c (function _funcstat)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lparser.c
