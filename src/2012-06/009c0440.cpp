// roc 2012-06 009c0440  unit: CRobloxTreeCtrl  size: 84 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009c0440
//
// 009c0440  53                   push ebx
// 009c0441  8b1d043cb200         mov ebx, dword ptr [0xb23c04]
// 009c0447  56                   push esi
// 009c0448  57                   push edi
// 009c0449  8bf9                 mov edi, ecx
// 009c044b  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 009c044f  8b4734               mov eax, dword ptr [edi + 0x34]
// 009c0452  8b5020               mov edx, dword ptr [eax + 0x20]
// 009c0455  51                   push ecx
// 009c0456  6a06                 push 6
// 009c0458  680a110000           push 0x110a
// 009c045d  52                   push edx
// 009c045e  ffd3                 call ebx
// 009c0460  8bf0                 mov esi, eax
// 009c0462  85f6                 test esi, esi
// 009c0464  7428                 je 0x9c048e
// 009c0466  8b4f34               mov ecx, dword ptr [edi + 0x34]
// 009c0469  6a02                 push 2
// 009c046b  56                   push esi
// 009c046c  e8a1930d00           call 0xa99812
// 009c0471  a802                 test al, 2
// 009c0473  7517                 jne 0x9c048c
// 009c0475  8b4734               mov eax, dword ptr [edi + 0x34]
// 009c0478  8b4020               mov eax, dword ptr [eax + 0x20]
// 009c047b  56                   push esi
// 009c047c  6a06                 push 6
// 009c047e  680a110000           push 0x110a
// 009c0483  50                   push eax
// 009c0484  ffd3                 call ebx
// 009c0486  8bf0                 mov esi, eax
// 009c0488  85f6                 test esi, esi
// 009c048a  75da                 jne 0x9c0466
// 009c048c  8bc6                 mov eax, esi
// 009c048e  5f                   pop edi
// 009c048f  5e                   pop esi
// 009c0490  5b                   pop ebx
// 009c0491  c20400               ret 4
// library xtp-15.2.1/Source\Controls\Tree\XTPTreeBase.cpp (function ?GetNextSelectedItem@CXTPTreeBase@@QBEPAU_TREEITEM@@PAU2@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Controls/Tree/XTPTreeBase.cpp
