// roc 2010-06 0077e3f0  unit: seg_00770000  size: 138 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0077e3f0
//
// 0077e3f0  53                   push ebx
// 0077e3f1  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 0077e3f5  55                   push ebp
// 0077e3f6  56                   push esi
// 0077e3f7  57                   push edi
// 0077e3f8  85db                 test ebx, ebx
// 0077e3fa  7470                 je 0x77e46c
// 0077e3fc  8b742414             mov esi, dword ptr [esp + 0x14]
// 0077e400  8b6c2418             mov ebp, dword ptr [esp + 0x18]
// 0077e404  833e00               cmp dword ptr [esi], 0
// 0077e407  753a                 jne 0x77e443
// 0077e409  8b560c               mov edx, dword ptr [esi + 0xc]
// 0077e40c  8b4610               mov eax, dword ptr [esi + 0x10]
// 0077e40f  8d4c241c             lea ecx, [esp + 0x1c]
// 0077e413  51                   push ecx
// 0077e414  52                   push edx
// 0077e415  50                   push eax
// 0077e416  8b4608               mov eax, dword ptr [esi + 8]
// 0077e419  ffd0                 call eax
// 0077e41b  83c40c               add esp, 0xc
// 0077e41e  85c0                 test eax, eax
// 0077e420  7451                 je 0x77e473
// 0077e422  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0077e426  85c9                 test ecx, ecx
// 0077e428  7449                 je 0x77e473
// 0077e42a  49                   dec ecx
// 0077e42b  894604               mov dword ptr [esi + 4], eax
// 0077e42e  890e                 mov dword ptr [esi], ecx
// 0077e430  0fb610               movzx edx, byte ptr [eax]
// 0077e433  40                   inc eax
// 0077e434  894604               mov dword ptr [esi + 4], eax
// 0077e437  83faff               cmp edx, -1
// 0077e43a  7437                 je 0x77e473
// 0077e43c  41                   inc ecx
// 0077e43d  48                   dec eax
// 0077e43e  890e                 mov dword ptr [esi], ecx
// 0077e440  894604               mov dword ptr [esi + 4], eax
// 0077e443  8b4604               mov eax, dword ptr [esi + 4]
// 0077e446  0fb608               movzx ecx, byte ptr [eax]
// 0077e449  83f9ff               cmp ecx, -1
// 0077e44c  7425                 je 0x77e473
// 0077e44e  8b3e                 mov edi, dword ptr [esi]
// 0077e450  3bdf                 cmp ebx, edi
// 0077e452  7702                 ja 0x77e456
// 0077e454  8bfb                 mov edi, ebx
// 0077e456  57                   push edi
// 0077e457  50                   push eax
// 0077e458  55                   push ebp
// 0077e459  e8c8a90200           call 0x7a8e26
// 0077e45e  293e                 sub dword ptr [esi], edi
// 0077e460  017e04               add dword ptr [esi + 4], edi
// 0077e463  83c40c               add esp, 0xc
// 0077e466  03ef                 add ebp, edi
// 0077e468  2bdf                 sub ebx, edi
// 0077e46a  7598                 jne 0x77e404
// 0077e46c  5f                   pop edi
// 0077e46d  5e                   pop esi
// 0077e46e  5d                   pop ebp
// 0077e46f  33c0                 xor eax, eax
// 0077e471  5b                   pop ebx
// 0077e472  c3                   ret 
// 0077e473  5f                   pop edi
// 0077e474  5e                   pop esi
// 0077e475  5d                   pop ebp
// 0077e476  8bc3                 mov eax, ebx
// 0077e478  5b                   pop ebx
// 0077e479  c3                   ret 
// library lua-5.1.4/lzio.c (function _luaZ_read)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lzio.c
