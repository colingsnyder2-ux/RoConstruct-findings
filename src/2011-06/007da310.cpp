// from server: 100% by auto
// roc 2011-06 007da310  unit: seg_007d0000  size: 95 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 007da310
//
// 007da310  56                   push esi
// 007da311  8b742408             mov esi, dword ptr [esp + 8]
// 007da315  57                   push edi
// 007da316  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 007da31a  83ffe5               cmp edi, -0x1b
// 007da31d  7609                 jbe 0x7da328
// 007da31f  56                   push esi
// 007da320  e8fb0a0000           call 0x7dae20
// 007da325  83c404               add esp, 4
// 007da328  8d4718               lea eax, [edi + 0x18]
// 007da32b  50                   push eax
// 007da32c  6a00                 push 0
// 007da32e  6a00                 push 0
// 007da330  56                   push esi
// 007da331  e80a0b0000           call 0x7dae40
// 007da336  8b4e10               mov ecx, dword ptr [esi + 0x10]
// 007da339  8a5114               mov dl, byte ptr [ecx + 0x14]
// 007da33c  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 007da340  897810               mov dword ptr [eax + 0x10], edi
// 007da343  80e203               and dl, 3
// 007da346  885005               mov byte ptr [eax + 5], dl
// 007da349  c6400407             mov byte ptr [eax + 4], 7
// 007da34d  c7400800000000       mov dword ptr [eax + 8], 0
// 007da354  89480c               mov dword ptr [eax + 0xc], ecx
// 007da357  8b5610               mov edx, dword ptr [esi + 0x10]
// 007da35a  8b4a70               mov ecx, dword ptr [edx + 0x70]
// 007da35d  8b11                 mov edx, dword ptr [ecx]
// 007da35f  8910                 mov dword ptr [eax], edx
// 007da361  8b4e10               mov ecx, dword ptr [esi + 0x10]
// 007da364  8b5170               mov edx, dword ptr [ecx + 0x70]
// 007da367  83c410               add esp, 0x10
// 007da36a  5f                   pop edi
// 007da36b  8902                 mov dword ptr [edx], eax
// 007da36d  5e                   pop esi
// 007da36e  c3                   ret 
// library lua-5.1.4/lstring.c (function _luaS_newudata)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lstring.c
