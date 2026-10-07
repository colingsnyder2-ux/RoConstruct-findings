// roc 2008-06 006dce10  unit: CRobloxTreeCtrl  size: 79 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006dce10
//
// 006dce10  53                   push ebx
// 006dce11  8b1d142e8000         mov ebx, dword ptr [0x802e14]
// 006dce17  56                   push esi
// 006dce18  57                   push edi
// 006dce19  6a00                 push 0
// 006dce1b  8bf9                 mov edi, ecx
// 006dce1d  8b4734               mov eax, dword ptr [edi + 0x34]
// 006dce20  8b4020               mov eax, dword ptr [eax + 0x20]
// 006dce23  6a00                 push 0
// 006dce25  680a110000           push 0x110a
// 006dce2a  50                   push eax
// 006dce2b  ffd3                 call ebx
// 006dce2d  8bf0                 mov esi, eax
// 006dce2f  85f6                 test esi, esi
// 006dce31  7428                 je 0x6dce5b
// 006dce33  8b4f34               mov ecx, dword ptr [edi + 0x34]
// 006dce36  6a02                 push 2
// 006dce38  56                   push esi
// 006dce39  e8def40d00           call 0x7bc31c
// 006dce3e  a802                 test al, 2
// 006dce40  7517                 jne 0x6dce59
// 006dce42  8b4734               mov eax, dword ptr [edi + 0x34]
// 006dce45  8b4820               mov ecx, dword ptr [eax + 0x20]
// 006dce48  56                   push esi
// 006dce49  6a06                 push 6
// 006dce4b  680a110000           push 0x110a
// 006dce50  51                   push ecx
// 006dce51  ffd3                 call ebx
// 006dce53  8bf0                 mov esi, eax
// 006dce55  85f6                 test esi, esi
// 006dce57  75da                 jne 0x6dce33
// 006dce59  8bc6                 mov eax, esi
// 006dce5b  5f                   pop edi
// 006dce5c  5e                   pop esi
// 006dce5d  5b                   pop ebx
// 006dce5e  c3                   ret 
// library xtp-11.2.2/Source\Controls\XTTreeBase.cpp (function ?GetFirstSelectedItem@CXTTreeBase@@QBEPAU_TREEITEM@@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Controls/XTTreeBase.cpp
