// from server: 100% by auto
// roc 2012-06 009c03f0  unit: CRobloxTreeCtrl  size: 79 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009c03f0
//
// 009c03f0  53                   push ebx
// 009c03f1  8b1d043cb200         mov ebx, dword ptr [0xb23c04]
// 009c03f7  56                   push esi
// 009c03f8  57                   push edi
// 009c03f9  6a00                 push 0
// 009c03fb  8bf9                 mov edi, ecx
// 009c03fd  8b4734               mov eax, dword ptr [edi + 0x34]
// 009c0400  8b4020               mov eax, dword ptr [eax + 0x20]
// 009c0403  6a00                 push 0
// 009c0405  680a110000           push 0x110a
// 009c040a  50                   push eax
// 009c040b  ffd3                 call ebx
// 009c040d  8bf0                 mov esi, eax
// 009c040f  85f6                 test esi, esi
// 009c0411  7428                 je 0x9c043b
// 009c0413  8b4f34               mov ecx, dword ptr [edi + 0x34]
// 009c0416  6a02                 push 2
// 009c0418  56                   push esi
// 009c0419  e8f4930d00           call 0xa99812
// 009c041e  a802                 test al, 2
// 009c0420  7517                 jne 0x9c0439
// 009c0422  8b4734               mov eax, dword ptr [edi + 0x34]
// 009c0425  8b4820               mov ecx, dword ptr [eax + 0x20]
// 009c0428  56                   push esi
// 009c0429  6a06                 push 6
// 009c042b  680a110000           push 0x110a
// 009c0430  51                   push ecx
// 009c0431  ffd3                 call ebx
// 009c0433  8bf0                 mov esi, eax
// 009c0435  85f6                 test esi, esi
// 009c0437  75da                 jne 0x9c0413
// 009c0439  8bc6                 mov eax, esi
// 009c043b  5f                   pop edi
// 009c043c  5e                   pop esi
// 009c043d  5b                   pop ebx
// 009c043e  c3                   ret 
// library xtp-15.2.1/Source\Controls\Tree\XTPTreeBase.cpp (function ?GetFirstSelectedItem@CXTPTreeBase@@QBEPAU_TREEITEM@@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Controls/Tree/XTPTreeBase.cpp
