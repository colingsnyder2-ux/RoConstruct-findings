// roc 2012-06 008336f0  unit: RBX::PAVPrimitive::$$A6AXU?$pair::?$signal::Vslot::?$callable  size: 62 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 008336f0
//
// 008336f0  8b542408             mov edx, dword ptr [esp + 8]
// 008336f4  83ec08               sub esp, 8
// 008336f7  8bc2                 mov eax, edx
// 008336f9  56                   push esi
// 008336fa  8d7001               lea esi, [eax + 1]
// 008336fd  8d4900               lea ecx, [ecx]
// 00833700  8a08                 mov cl, byte ptr [eax]
// 00833702  40                   inc eax
// 00833703  84c9                 test cl, cl
// 00833705  75f9                 jne 0x833700
// 00833707  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0083370b  2bc6                 sub eax, esi
// 0083370d  52                   push edx
// 0083370e  8944240c             mov dword ptr [esp + 0xc], eax
// 00833712  8d442408             lea eax, [esp + 8]
// 00833716  50                   push eax
// 00833717  68a0368300           push 0x8336a0
// 0083371c  51                   push ecx
// 0083371d  89542414             mov dword ptr [esp + 0x14], edx
// 00833721  e8baf1ffff           call 0x8328e0
// 00833726  83c410               add esp, 0x10
// 00833729  5e                   pop esi
// 0083372a  83c408               add esp, 8
// 0083372d  c3                   ret 
// library lua-5.1.4/lauxlib.c (function _luaL_loadstring)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lauxlib.c
