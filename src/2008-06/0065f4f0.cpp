// from server: 100% by auto
// roc 2008-06 0065f4f0  unit: seg_00650000  size: 50 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0065f4f0
//
// 0065f4f0  56                   push esi
// 0065f4f1  57                   push edi
// 0065f4f2  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 0065f4f6  6a20                 push 0x20
// 0065f4f8  6a00                 push 0
// 0065f4fa  6a00                 push 0
// 0065f4fc  57                   push edi
// 0065f4fd  e8ee110000           call 0x6606f0
// 0065f502  8bf0                 mov esi, eax
// 0065f504  6a0a                 push 0xa
// 0065f506  56                   push esi
// 0065f507  57                   push edi
// 0065f508  e8d3cfffff           call 0x65c4e0
// 0065f50d  8d4610               lea eax, [esi + 0x10]
// 0065f510  83c41c               add esp, 0x1c
// 0065f513  894608               mov dword ptr [esi + 8], eax
// 0065f516  c7400800000000       mov dword ptr [eax + 8], 0
// 0065f51d  5f                   pop edi
// 0065f51e  8bc6                 mov eax, esi
// 0065f520  5e                   pop esi
// 0065f521  c3                   ret 
// library lua-5.1.4/lfunc.c (function _luaF_newupval)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lfunc.c
