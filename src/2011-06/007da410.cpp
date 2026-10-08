// from server: 100% by auto
// roc 2011-06 007da410  unit: seg_007d0000  size: 50 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 007da410
//
// 007da410  56                   push esi
// 007da411  57                   push edi
// 007da412  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 007da416  6a20                 push 0x20
// 007da418  6a00                 push 0
// 007da41a  6a00                 push 0
// 007da41c  57                   push edi
// 007da41d  e81e0a0000           call 0x7dae40
// 007da422  8bf0                 mov esi, eax
// 007da424  6a0a                 push 0xa
// 007da426  56                   push esi
// 007da427  57                   push edi
// 007da428  e8c3ceffff           call 0x7d72f0
// 007da42d  8d4610               lea eax, [esi + 0x10]
// 007da430  83c41c               add esp, 0x1c
// 007da433  894608               mov dword ptr [esi + 8], eax
// 007da436  c7400800000000       mov dword ptr [eax + 8], 0
// 007da43d  5f                   pop edi
// 007da43e  8bc6                 mov eax, esi
// 007da440  5e                   pop esi
// 007da441  c3                   ret 
// library lua-5.1.4/lfunc.c (function _luaF_newupval)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lfunc.c
