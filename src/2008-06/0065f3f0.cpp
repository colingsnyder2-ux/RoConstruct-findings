// from server: 100% by auto
// roc 2008-06 0065f3f0  unit: seg_00650000  size: 95 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0065f3f0
//
// 0065f3f0  56                   push esi
// 0065f3f1  8b742408             mov esi, dword ptr [esp + 8]
// 0065f3f5  57                   push edi
// 0065f3f6  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 0065f3fa  83ffe5               cmp edi, -0x1b
// 0065f3fd  7609                 jbe 0x65f408
// 0065f3ff  56                   push esi
// 0065f400  e8cb120000           call 0x6606d0
// 0065f405  83c404               add esp, 4
// 0065f408  8d4718               lea eax, [edi + 0x18]
// 0065f40b  50                   push eax
// 0065f40c  6a00                 push 0
// 0065f40e  6a00                 push 0
// 0065f410  56                   push esi
// 0065f411  e8da120000           call 0x6606f0
// 0065f416  8b4e10               mov ecx, dword ptr [esi + 0x10]
// 0065f419  8a5114               mov dl, byte ptr [ecx + 0x14]
// 0065f41c  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 0065f420  897810               mov dword ptr [eax + 0x10], edi
// 0065f423  80e203               and dl, 3
// 0065f426  885005               mov byte ptr [eax + 5], dl
// 0065f429  c6400407             mov byte ptr [eax + 4], 7
// 0065f42d  c7400800000000       mov dword ptr [eax + 8], 0
// 0065f434  89480c               mov dword ptr [eax + 0xc], ecx
// 0065f437  8b5610               mov edx, dword ptr [esi + 0x10]
// 0065f43a  8b4a70               mov ecx, dword ptr [edx + 0x70]
// 0065f43d  8b11                 mov edx, dword ptr [ecx]
// 0065f43f  8910                 mov dword ptr [eax], edx
// 0065f441  8b4e10               mov ecx, dword ptr [esi + 0x10]
// 0065f444  8b5170               mov edx, dword ptr [ecx + 0x70]
// 0065f447  83c410               add esp, 0x10
// 0065f44a  5f                   pop edi
// 0065f44b  8902                 mov dword ptr [edx], eax
// 0065f44d  5e                   pop esi
// 0065f44e  c3                   ret 
// library lua-5.1.4/lstring.c (function _luaS_newudata)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lstring.c
