// roc 2007-03 006983c0  unit: seg_00690000  size: 270 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 006983c0
//
// 006983c0  6aff                 push -1
// 006983c2  68c8f77500           push 0x75f7c8
// 006983c7  64a100000000         mov eax, dword ptr fs:[0]
// 006983cd  50                   push eax
// 006983ce  83ec08               sub esp, 8
// 006983d1  53                   push ebx
// 006983d2  55                   push ebp
// 006983d3  56                   push esi
// 006983d4  57                   push edi
// 006983d5  a1b4f58a00           mov eax, dword ptr [0x8af5b4]
// 006983da  33c4                 xor eax, esp
// 006983dc  50                   push eax
// 006983dd  8d44241c             lea eax, [esp + 0x1c]
// 006983e1  64a300000000         mov dword ptr fs:[0], eax
// 006983e7  8bf9                 mov edi, ecx
// 006983e9  33db                 xor ebx, ebx
// 006983eb  895c2418             mov dword ptr [esp + 0x18], ebx
// 006983ef  c744241490377900     mov dword ptr [esp + 0x14], 0x793790
// 006983f7  8b74242c             mov esi, dword ptr [esp + 0x2c]
// 006983fb  8b4608               mov eax, dword ptr [esi + 8]
// 006983fe  6a58                 push 0x58
// 00698400  50                   push eax
// 00698401  895c242c             mov dword ptr [esp + 0x2c], ebx
// 00698405  ff15c4d07700         call dword ptr [0x77d0c4]
// 0069840b  53                   push ebx
// 0069840c  68d83f7c00           push 0x7c3fd8
// 00698411  50                   push eax
// 00698412  6a60                 push 0x60
// 00698414  6a50                 push 0x50
// 00698416  ff1510d27700         call dword ptr [0x77d210]
// 0069841c  50                   push eax
// 0069841d  8d4c2420             lea ecx, [esp + 0x20]
// 00698421  e874270a00           call 0x73ab9a
// 00698426  8b16                 mov edx, dword ptr [esi]
// 00698428  8b5230               mov edx, dword ptr [edx + 0x30]
// 0069842b  8d442414             lea eax, [esp + 0x14]
// 0069842f  50                   push eax
// 00698430  8bce                 mov ecx, esi
// 00698432  ffd2                 call edx
// 00698434  8bcf                 mov ecx, edi
// 00698436  8be8                 mov ebp, eax
// 00698438  e81371f9ff           call 0x62f550
// 0069843d  8b10                 mov edx, dword ptr [eax]
// 0069843f  57                   push edi
// 00698440  8bc8                 mov ecx, eax
// 00698442  8b4278               mov eax, dword ptr [edx + 0x78]
// 00698445  56                   push esi
// 00698446  ffd0                 call eax
// 00698448  8bcf                 mov ecx, edi
// 0069844a  e80171f9ff           call 0x62f550
// 0069844f  8b10                 mov edx, dword ptr [eax]
// 00698451  8b1e                 mov ebx, dword ptr [esi]
// 00698453  8bc8                 mov ecx, eax
// 00698455  8b427c               mov eax, dword ptr [edx + 0x7c]
// 00698458  57                   push edi
// 00698459  ffd0                 call eax
// 0069845b  8b5338               mov edx, dword ptr [ebx + 0x38]
// 0069845e  50                   push eax
// 0069845f  8bce                 mov ecx, esi
// 00698461  ffd2                 call edx
// 00698463  8b06                 mov eax, dword ptr [esi]
// 00698465  8d9ff0000000         lea ebx, [edi + 0xf0]
// 0069846b  6a25                 push 0x25
// 0069846d  81c7c0000000         add edi, 0xc0
// 00698473  57                   push edi
// 00698474  8bcb                 mov ecx, ebx
// 00698476  89442434             mov dword ptr [esp + 0x34], eax
// 0069847a  ff1520db7700         call dword ptr [0x77db20]
// 00698480  50                   push eax
// 00698481  8bcb                 mov ecx, ebx
// 00698483  ff1554dd7700         call dword ptr [0x77dd54]
// 00698489  8b542438             mov edx, dword ptr [esp + 0x38]
// 0069848d  50                   push eax
// 0069848e  8b4270               mov eax, dword ptr [edx + 0x70]
// 00698491  8bce                 mov ecx, esi
// 00698493  ffd0                 call eax
// 00698495  8b16                 mov edx, dword ptr [esi]
// 00698497  8b4230               mov eax, dword ptr [edx + 0x30]
// 0069849a  55                   push ebp
// 0069849b  8bce                 mov ecx, esi
// 0069849d  ffd0                 call eax
// 0069849f  8d4c2414             lea ecx, [esp + 0x14]
// 006984a3  c7442424ffffffff     mov dword ptr [esp + 0x24], 0xffffffff
// 006984ab  c7442414d0547800     mov dword ptr [esp + 0x14], 0x7854d0
// 006984b3  e80262f8ff           call 0x61e6ba
// 006984b8  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 006984bc  64890d00000000       mov dword ptr fs:[0], ecx
// 006984c3  59                   pop ecx
// 006984c4  5f                   pop edi
// 006984c5  5e                   pop esi
// 006984c6  5d                   pop ebp
// 006984c7  5b                   pop ebx
// 006984c8  83c414               add esp, 0x14
// 006984cb  c20400               ret 4
// copied from an identical function in another client (function ?Draw@CControlMDIButton@CXTPMenuBar@@UAEXPAVCDC@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\CommandBars\XTPMenuBar.cpp