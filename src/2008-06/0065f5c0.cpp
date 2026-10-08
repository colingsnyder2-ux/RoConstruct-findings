// from server: 100% by auto
// roc 2008-06 0065f5c0  unit: seg_00650000  size: 49 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0065f5c0
//
// 0065f5c0  8b442408             mov eax, dword ptr [esp + 8]
// 0065f5c4  8d4810               lea ecx, [eax + 0x10]
// 0065f5c7  394808               cmp dword ptr [eax + 8], ecx
// 0065f5ca  7412                 je 0x65f5de
// 0065f5cc  8b5014               mov edx, dword ptr [eax + 0x14]
// 0065f5cf  56                   push esi
// 0065f5d0  8b31                 mov esi, dword ptr [ecx]
// 0065f5d2  897210               mov dword ptr [edx + 0x10], esi
// 0065f5d5  8b09                 mov ecx, dword ptr [ecx]
// 0065f5d7  8b5014               mov edx, dword ptr [eax + 0x14]
// 0065f5da  895114               mov dword ptr [ecx + 0x14], edx
// 0065f5dd  5e                   pop esi
// 0065f5de  6a00                 push 0
// 0065f5e0  6a20                 push 0x20
// 0065f5e2  50                   push eax
// 0065f5e3  8b442410             mov eax, dword ptr [esp + 0x10]
// 0065f5e7  50                   push eax
// 0065f5e8  e803110000           call 0x6606f0
// 0065f5ed  83c410               add esp, 0x10
// 0065f5f0  c3                   ret 
// library lua-5.1.4/lfunc.c (function _luaF_freeupval)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lfunc.c
