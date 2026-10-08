// from server: 100% by auto
// roc 2007-08 00612fb0  unit: seg_00610000  size: 50 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00612fb0
//
// 00612fb0  56                   push esi
// 00612fb1  57                   push edi
// 00612fb2  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 00612fb6  6a20                 push 0x20
// 00612fb8  6a00                 push 0
// 00612fba  6a00                 push 0
// 00612fbc  57                   push edi
// 00612fbd  e82e0a0000           call 0x6139f0
// 00612fc2  8bf0                 mov esi, eax
// 00612fc4  6a0a                 push 0xa
// 00612fc6  56                   push esi
// 00612fc7  57                   push edi
// 00612fc8  e883cfffff           call 0x60ff50
// 00612fcd  8d4610               lea eax, [esi + 0x10]
// 00612fd0  83c41c               add esp, 0x1c
// 00612fd3  894608               mov dword ptr [esi + 8], eax
// 00612fd6  c7400800000000       mov dword ptr [eax + 8], 0
// 00612fdd  5f                   pop edi
// 00612fde  8bc6                 mov eax, esi
// 00612fe0  5e                   pop esi
// 00612fe1  c3                   ret 
// library lua-5.1.4/lfunc.c (function _luaF_newupval)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lfunc.c
