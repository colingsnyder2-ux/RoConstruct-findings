// roc 2007-08 005c6550  unit: lua_exception  size: 99 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005c6550
//
// 005c6550  83ec14               sub esp, 0x14
// 005c6553  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 005c6557  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 005c655b  56                   push esi
// 005c655c  8b74241c             mov esi, dword ptr [esp + 0x1c]
// 005c6560  8b5674               mov edx, dword ptr [esi + 0x74]
// 005c6563  57                   push edi
// 005c6564  89442408             mov dword ptr [esp + 8], eax
// 005c6568  8b4608               mov eax, dword ptr [esi + 8]
// 005c656b  2b4620               sub eax, dword ptr [esi + 0x20]
// 005c656e  52                   push edx
// 005c656f  50                   push eax
// 005c6570  894c2420             mov dword ptr [esp + 0x20], ecx
// 005c6574  8d4c2410             lea ecx, [esp + 0x10]
// 005c6578  51                   push ecx
// 005c6579  68d05e5c00           push 0x5c5ed0
// 005c657e  56                   push esi
// 005c657f  c744242000000000     mov dword ptr [esp + 0x20], 0
// 005c6587  c744242800000000     mov dword ptr [esp + 0x28], 0
// 005c658f  e8bcfeffff           call 0x5c6450
// 005c6594  8b542428             mov edx, dword ptr [esp + 0x28]
// 005c6598  6a00                 push 0
// 005c659a  8bf8                 mov edi, eax
// 005c659c  8b442424             mov eax, dword ptr [esp + 0x24]
// 005c65a0  52                   push edx
// 005c65a1  50                   push eax
// 005c65a2  56                   push esi
// 005c65a3  e848d40400           call 0x6139f0
// 005c65a8  83c424               add esp, 0x24
// 005c65ab  8bc7                 mov eax, edi
// 005c65ad  5f                   pop edi
// 005c65ae  5e                   pop esi
// 005c65af  83c414               add esp, 0x14
// 005c65b2  c3                   ret 
// library lua-5.1.4/ldo.c (function _luaD_protectedparser)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 ldo.c
