// from server: 100% by auto
// roc 2012-06 00833180  unit: RBX::PAVPrimitive::$$A6AXU?$pair::?$signal::Vslot::?$callable  size: 49 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00833180
//
// 00833180  56                   push esi
// 00833181  8b742408             mov esi, dword ptr [esp + 8]
// 00833185  8b06                 mov eax, dword ptr [esi]
// 00833187  2bc6                 sub eax, esi
// 00833189  83e80c               sub eax, 0xc
// 0083318c  741e                 je 0x8331ac
// 0083318e  57                   push edi
// 0083318f  50                   push eax
// 00833190  8b4608               mov eax, dword ptr [esi + 8]
// 00833193  8d7e0c               lea edi, [esi + 0xc]
// 00833196  57                   push edi
// 00833197  50                   push eax
// 00833198  e853efffff           call 0x8320f0
// 0083319d  ff4604               inc dword ptr [esi + 4]
// 008331a0  56                   push esi
// 008331a1  893e                 mov dword ptr [esi], edi
// 008331a3  e868ffffff           call 0x833110
// 008331a8  83c410               add esp, 0x10
// 008331ab  5f                   pop edi
// 008331ac  8d460c               lea eax, [esi + 0xc]
// 008331af  5e                   pop esi
// 008331b0  c3                   ret 
// library lua-5.1.4/lauxlib.c (function _luaL_prepbuffer)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lauxlib.c
