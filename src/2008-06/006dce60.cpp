// roc 2008-06 006dce60  unit: CRobloxTreeCtrl  size: 84 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006dce60
//
// 006dce60  53                   push ebx
// 006dce61  8b1d142e8000         mov ebx, dword ptr [0x802e14]
// 006dce67  56                   push esi
// 006dce68  57                   push edi
// 006dce69  8bf9                 mov edi, ecx
// 006dce6b  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 006dce6f  8b4734               mov eax, dword ptr [edi + 0x34]
// 006dce72  8b5020               mov edx, dword ptr [eax + 0x20]
// 006dce75  51                   push ecx
// 006dce76  6a06                 push 6
// 006dce78  680a110000           push 0x110a
// 006dce7d  52                   push edx
// 006dce7e  ffd3                 call ebx
// 006dce80  8bf0                 mov esi, eax
// 006dce82  85f6                 test esi, esi
// 006dce84  7428                 je 0x6dceae
// 006dce86  8b4f34               mov ecx, dword ptr [edi + 0x34]
// 006dce89  6a02                 push 2
// 006dce8b  56                   push esi
// 006dce8c  e88bf40d00           call 0x7bc31c
// 006dce91  a802                 test al, 2
// 006dce93  7517                 jne 0x6dceac
// 006dce95  8b4734               mov eax, dword ptr [edi + 0x34]
// 006dce98  8b4020               mov eax, dword ptr [eax + 0x20]
// 006dce9b  56                   push esi
// 006dce9c  6a06                 push 6
// 006dce9e  680a110000           push 0x110a
// 006dcea3  50                   push eax
// 006dcea4  ffd3                 call ebx
// 006dcea6  8bf0                 mov esi, eax
// 006dcea8  85f6                 test esi, esi
// 006dceaa  75da                 jne 0x6dce86
// 006dceac  8bc6                 mov eax, esi
// 006dceae  5f                   pop edi
// 006dceaf  5e                   pop esi
// 006dceb0  5b                   pop ebx
// 006dceb1  c20400               ret 4
// library xtp-11.2.2/Source\Controls\XTTreeBase.cpp (function ?GetNextSelectedItem@CXTTreeBase@@QBEPAU_TREEITEM@@PAU2@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Controls/XTTreeBase.cpp
