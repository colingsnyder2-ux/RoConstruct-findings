// from server: 100% by auto
// roc 2008-06 0065f900  unit: seg_00650000  size: 138 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0065f900
//
// 0065f900  53                   push ebx
// 0065f901  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 0065f905  55                   push ebp
// 0065f906  56                   push esi
// 0065f907  57                   push edi
// 0065f908  85db                 test ebx, ebx
// 0065f90a  7470                 je 0x65f97c
// 0065f90c  8b742414             mov esi, dword ptr [esp + 0x14]
// 0065f910  8b6c2418             mov ebp, dword ptr [esp + 0x18]
// 0065f914  833e00               cmp dword ptr [esi], 0
// 0065f917  753a                 jne 0x65f953
// 0065f919  8b560c               mov edx, dword ptr [esi + 0xc]
// 0065f91c  8b4610               mov eax, dword ptr [esi + 0x10]
// 0065f91f  8d4c241c             lea ecx, [esp + 0x1c]
// 0065f923  51                   push ecx
// 0065f924  52                   push edx
// 0065f925  50                   push eax
// 0065f926  8b4608               mov eax, dword ptr [esi + 8]
// 0065f929  ffd0                 call eax
// 0065f92b  83c40c               add esp, 0xc
// 0065f92e  85c0                 test eax, eax
// 0065f930  7451                 je 0x65f983
// 0065f932  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0065f936  85c9                 test ecx, ecx
// 0065f938  7449                 je 0x65f983
// 0065f93a  49                   dec ecx
// 0065f93b  894604               mov dword ptr [esi + 4], eax
// 0065f93e  890e                 mov dword ptr [esi], ecx
// 0065f940  0fb610               movzx edx, byte ptr [eax]
// 0065f943  40                   inc eax
// 0065f944  894604               mov dword ptr [esi + 4], eax
// 0065f947  83faff               cmp edx, -1
// 0065f94a  7437                 je 0x65f983
// 0065f94c  41                   inc ecx
// 0065f94d  48                   dec eax
// 0065f94e  890e                 mov dword ptr [esi], ecx
// 0065f950  894604               mov dword ptr [esi + 4], eax
// 0065f953  8b4604               mov eax, dword ptr [esi + 4]
// 0065f956  0fb608               movzx ecx, byte ptr [eax]
// 0065f959  83f9ff               cmp ecx, -1
// 0065f95c  7425                 je 0x65f983
// 0065f95e  8b3e                 mov edi, dword ptr [esi]
// 0065f960  3bdf                 cmp ebx, edi
// 0065f962  7702                 ja 0x65f966
// 0065f964  8bfb                 mov edi, ebx
// 0065f966  57                   push edi
// 0065f967  50                   push eax
// 0065f968  55                   push ebp
// 0065f969  e8721e0400           call 0x6a17e0
// 0065f96e  293e                 sub dword ptr [esi], edi
// 0065f970  017e04               add dword ptr [esi + 4], edi
// 0065f973  83c40c               add esp, 0xc
// 0065f976  03ef                 add ebp, edi
// 0065f978  2bdf                 sub ebx, edi
// 0065f97a  7598                 jne 0x65f914
// 0065f97c  5f                   pop edi
// 0065f97d  5e                   pop esi
// 0065f97e  5d                   pop ebp
// 0065f97f  33c0                 xor eax, eax
// 0065f981  5b                   pop ebx
// 0065f982  c3                   ret 
// 0065f983  5f                   pop edi
// 0065f984  5e                   pop esi
// 0065f985  5d                   pop ebp
// 0065f986  8bc3                 mov eax, ebx
// 0065f988  5b                   pop ebx
// 0065f989  c3                   ret 
// library lua-5.1.4/lzio.c (function _luaZ_read)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lzio.c
