// from server: 100% by auto
// roc 2011-06 007da4e0  unit: seg_007d0000  size: 49 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 007da4e0
//
// 007da4e0  8b442408             mov eax, dword ptr [esp + 8]
// 007da4e4  8d4810               lea ecx, [eax + 0x10]
// 007da4e7  394808               cmp dword ptr [eax + 8], ecx
// 007da4ea  7412                 je 0x7da4fe
// 007da4ec  8b5014               mov edx, dword ptr [eax + 0x14]
// 007da4ef  56                   push esi
// 007da4f0  8b31                 mov esi, dword ptr [ecx]
// 007da4f2  897210               mov dword ptr [edx + 0x10], esi
// 007da4f5  8b09                 mov ecx, dword ptr [ecx]
// 007da4f7  8b5014               mov edx, dword ptr [eax + 0x14]
// 007da4fa  895114               mov dword ptr [ecx + 0x14], edx
// 007da4fd  5e                   pop esi
// 007da4fe  6a00                 push 0
// 007da500  6a20                 push 0x20
// 007da502  50                   push eax
// 007da503  8b442410             mov eax, dword ptr [esp + 0x10]
// 007da507  50                   push eax
// 007da508  e833090000           call 0x7dae40
// 007da50d  83c410               add esp, 0x10
// 007da510  c3                   ret 
// library lua-5.1.4/lfunc.c (function _luaF_freeupval)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lfunc.c
