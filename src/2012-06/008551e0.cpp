// from server: 100% by auto
// roc 2012-06 008551e0  unit: lua_exception  size: 99 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 008551e0
//
// 008551e0  83ec14               sub esp, 0x14
// 008551e3  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 008551e7  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 008551eb  56                   push esi
// 008551ec  8b74241c             mov esi, dword ptr [esp + 0x1c]
// 008551f0  8b5674               mov edx, dword ptr [esi + 0x74]
// 008551f3  57                   push edi
// 008551f4  89442408             mov dword ptr [esp + 8], eax
// 008551f8  8b4608               mov eax, dword ptr [esi + 8]
// 008551fb  2b4620               sub eax, dword ptr [esi + 0x20]
// 008551fe  52                   push edx
// 008551ff  50                   push eax
// 00855200  894c2420             mov dword ptr [esp + 0x20], ecx
// 00855204  8d4c2410             lea ecx, [esp + 0x10]
// 00855208  51                   push ecx
// 00855209  68204b8500           push 0x854b20
// 0085520e  56                   push esi
// 0085520f  c744242000000000     mov dword ptr [esp + 0x20], 0
// 00855217  c744242800000000     mov dword ptr [esp + 0x28], 0
// 0085521f  e8bcfeffff           call 0x8550e0
// 00855224  8b542428             mov edx, dword ptr [esp + 0x28]
// 00855228  6a00                 push 0
// 0085522a  8bf8                 mov edi, eax
// 0085522c  8b442424             mov eax, dword ptr [esp + 0x24]
// 00855230  52                   push edx
// 00855231  50                   push eax
// 00855232  56                   push esi
// 00855233  e8281d0e00           call 0x936f60
// 00855238  83c424               add esp, 0x24
// 0085523b  8bc7                 mov eax, edi
// 0085523d  5f                   pop edi
// 0085523e  5e                   pop esi
// 0085523f  83c414               add esp, 0x14
// 00855242  c3                   ret 
// library lua-5.1.4/ldo.c (function _luaD_protectedparser)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 ldo.c
