// from server: 100% by auto
// roc 2010-06 00730610  unit: lua_exception  size: 99 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00730610
//
// 00730610  83ec14               sub esp, 0x14
// 00730613  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 00730617  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0073061b  56                   push esi
// 0073061c  8b74241c             mov esi, dword ptr [esp + 0x1c]
// 00730620  8b5674               mov edx, dword ptr [esi + 0x74]
// 00730623  57                   push edi
// 00730624  89442408             mov dword ptr [esp + 8], eax
// 00730628  8b4608               mov eax, dword ptr [esi + 8]
// 0073062b  2b4620               sub eax, dword ptr [esi + 0x20]
// 0073062e  52                   push edx
// 0073062f  50                   push eax
// 00730630  894c2420             mov dword ptr [esp + 0x20], ecx
// 00730634  8d4c2410             lea ecx, [esp + 0x10]
// 00730638  51                   push ecx
// 00730639  6850ff7200           push 0x72ff50
// 0073063e  56                   push esi
// 0073063f  c744242000000000     mov dword ptr [esp + 0x20], 0
// 00730647  c744242800000000     mov dword ptr [esp + 0x28], 0
// 0073064f  e8bcfeffff           call 0x730510
// 00730654  8b542428             mov edx, dword ptr [esp + 0x28]
// 00730658  6a00                 push 0
// 0073065a  8bf8                 mov edi, eax
// 0073065c  8b442424             mov eax, dword ptr [esp + 0x24]
// 00730660  52                   push edx
// 00730661  50                   push eax
// 00730662  56                   push esi
// 00730663  e898e30400           call 0x77ea00
// 00730668  83c424               add esp, 0x24
// 0073066b  8bc7                 mov eax, edi
// 0073066d  5f                   pop edi
// 0073066e  5e                   pop esi
// 0073066f  83c414               add esp, 0x14
// 00730672  c3                   ret 
// library lua-5.1.4/ldo.c (function _luaD_protectedparser)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 ldo.c
