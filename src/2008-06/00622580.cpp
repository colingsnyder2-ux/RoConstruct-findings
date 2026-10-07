// roc 2008-06 00622580  unit: lua_exception  size: 99 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00622580
//
// 00622580  83ec14               sub esp, 0x14
// 00622583  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 00622587  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0062258b  56                   push esi
// 0062258c  8b74241c             mov esi, dword ptr [esp + 0x1c]
// 00622590  8b5674               mov edx, dword ptr [esi + 0x74]
// 00622593  57                   push edi
// 00622594  89442408             mov dword ptr [esp + 8], eax
// 00622598  8b4608               mov eax, dword ptr [esi + 8]
// 0062259b  2b4620               sub eax, dword ptr [esi + 0x20]
// 0062259e  52                   push edx
// 0062259f  50                   push eax
// 006225a0  894c2420             mov dword ptr [esp + 0x20], ecx
// 006225a4  8d4c2410             lea ecx, [esp + 0x10]
// 006225a8  51                   push ecx
// 006225a9  68001f6200           push 0x621f00
// 006225ae  56                   push esi
// 006225af  c744242000000000     mov dword ptr [esp + 0x20], 0
// 006225b7  c744242800000000     mov dword ptr [esp + 0x28], 0
// 006225bf  e8bcfeffff           call 0x622480
// 006225c4  8b542428             mov edx, dword ptr [esp + 0x28]
// 006225c8  6a00                 push 0
// 006225ca  8bf8                 mov edi, eax
// 006225cc  8b442424             mov eax, dword ptr [esp + 0x24]
// 006225d0  52                   push edx
// 006225d1  50                   push eax
// 006225d2  56                   push esi
// 006225d3  e818e10300           call 0x6606f0
// 006225d8  83c424               add esp, 0x24
// 006225db  8bc7                 mov eax, edi
// 006225dd  5f                   pop edi
// 006225de  5e                   pop esi
// 006225df  83c414               add esp, 0x14
// 006225e2  c3                   ret 
// library lua-5.1.4/ldo.c (function _luaD_protectedparser)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 ldo.c
