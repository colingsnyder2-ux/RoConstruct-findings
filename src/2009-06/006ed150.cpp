// from server: 100% by auto
// roc 2009-06 006ed150  unit: seg_006e0000  size: 138 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006ed150
//
// 006ed150  53                   push ebx
// 006ed151  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 006ed155  55                   push ebp
// 006ed156  56                   push esi
// 006ed157  57                   push edi
// 006ed158  85db                 test ebx, ebx
// 006ed15a  7470                 je 0x6ed1cc
// 006ed15c  8b742414             mov esi, dword ptr [esp + 0x14]
// 006ed160  8b6c2418             mov ebp, dword ptr [esp + 0x18]
// 006ed164  833e00               cmp dword ptr [esi], 0
// 006ed167  753a                 jne 0x6ed1a3
// 006ed169  8b560c               mov edx, dword ptr [esi + 0xc]
// 006ed16c  8b4610               mov eax, dword ptr [esi + 0x10]
// 006ed16f  8d4c241c             lea ecx, [esp + 0x1c]
// 006ed173  51                   push ecx
// 006ed174  52                   push edx
// 006ed175  50                   push eax
// 006ed176  8b4608               mov eax, dword ptr [esi + 8]
// 006ed179  ffd0                 call eax
// 006ed17b  83c40c               add esp, 0xc
// 006ed17e  85c0                 test eax, eax
// 006ed180  7451                 je 0x6ed1d3
// 006ed182  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 006ed186  85c9                 test ecx, ecx
// 006ed188  7449                 je 0x6ed1d3
// 006ed18a  49                   dec ecx
// 006ed18b  894604               mov dword ptr [esi + 4], eax
// 006ed18e  890e                 mov dword ptr [esi], ecx
// 006ed190  0fb610               movzx edx, byte ptr [eax]
// 006ed193  40                   inc eax
// 006ed194  894604               mov dword ptr [esi + 4], eax
// 006ed197  83faff               cmp edx, -1
// 006ed19a  7437                 je 0x6ed1d3
// 006ed19c  41                   inc ecx
// 006ed19d  48                   dec eax
// 006ed19e  890e                 mov dword ptr [esi], ecx
// 006ed1a0  894604               mov dword ptr [esi + 4], eax
// 006ed1a3  8b4604               mov eax, dword ptr [esi + 4]
// 006ed1a6  0fb608               movzx ecx, byte ptr [eax]
// 006ed1a9  83f9ff               cmp ecx, -1
// 006ed1ac  7425                 je 0x6ed1d3
// 006ed1ae  8b3e                 mov edi, dword ptr [esi]
// 006ed1b0  3bdf                 cmp ebx, edi
// 006ed1b2  7702                 ja 0x6ed1b6
// 006ed1b4  8bfb                 mov edi, ebx
// 006ed1b6  57                   push edi
// 006ed1b7  50                   push eax
// 006ed1b8  55                   push ebp
// 006ed1b9  e8f8cc0200           call 0x719eb6
// 006ed1be  293e                 sub dword ptr [esi], edi
// 006ed1c0  017e04               add dword ptr [esi + 4], edi
// 006ed1c3  83c40c               add esp, 0xc
// 006ed1c6  03ef                 add ebp, edi
// 006ed1c8  2bdf                 sub ebx, edi
// 006ed1ca  7598                 jne 0x6ed164
// 006ed1cc  5f                   pop edi
// 006ed1cd  5e                   pop esi
// 006ed1ce  5d                   pop ebp
// 006ed1cf  33c0                 xor eax, eax
// 006ed1d1  5b                   pop ebx
// 006ed1d2  c3                   ret 
// 006ed1d3  5f                   pop edi
// 006ed1d4  5e                   pop esi
// 006ed1d5  5d                   pop ebp
// 006ed1d6  8bc3                 mov eax, ebx
// 006ed1d8  5b                   pop ebx
// 006ed1d9  c3                   ret 
// library lua-5.1.4/lzio.c (function _luaZ_read)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lzio.c
