// roc 2009-06 006ece00  unit: seg_006e0000  size: 49 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006ece00
//
// 006ece00  8b442408             mov eax, dword ptr [esp + 8]
// 006ece04  8d4810               lea ecx, [eax + 0x10]
// 006ece07  394808               cmp dword ptr [eax + 8], ecx
// 006ece0a  7412                 je 0x6ece1e
// 006ece0c  8b5014               mov edx, dword ptr [eax + 0x14]
// 006ece0f  56                   push esi
// 006ece10  8b31                 mov esi, dword ptr [ecx]
// 006ece12  897210               mov dword ptr [edx + 0x10], esi
// 006ece15  8b09                 mov ecx, dword ptr [ecx]
// 006ece17  8b5014               mov edx, dword ptr [eax + 0x14]
// 006ece1a  895114               mov dword ptr [ecx + 0x14], edx
// 006ece1d  5e                   pop esi
// 006ece1e  6a00                 push 0
// 006ece20  6a20                 push 0x20
// 006ece22  50                   push eax
// 006ece23  8b442410             mov eax, dword ptr [esp + 0x10]
// 006ece27  50                   push eax
// 006ece28  e833090000           call 0x6ed760
// 006ece2d  83c410               add esp, 0x10
// 006ece30  c3                   ret 
// library lua-5.1.4/lfunc.c (function _luaF_freeupval)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lfunc.c
