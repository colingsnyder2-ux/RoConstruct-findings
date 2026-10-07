// roc 2011-06 00847f70  unit: CRobloxTreeCtrl  size: 79 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00847f70
//
// 00847f70  53                   push ebx
// 00847f71  8b1dc019a400         mov ebx, dword ptr [0xa419c0]
// 00847f77  56                   push esi
// 00847f78  57                   push edi
// 00847f79  6a00                 push 0
// 00847f7b  8bf9                 mov edi, ecx
// 00847f7d  8b4734               mov eax, dword ptr [edi + 0x34]
// 00847f80  8b4020               mov eax, dword ptr [eax + 0x20]
// 00847f83  6a00                 push 0
// 00847f85  680a110000           push 0x110a
// 00847f8a  50                   push eax
// 00847f8b  ffd3                 call ebx
// 00847f8d  8bf0                 mov esi, eax
// 00847f8f  85f6                 test esi, esi
// 00847f91  7428                 je 0x847fbb
// 00847f93  8b4f34               mov ecx, dword ptr [edi + 0x34]
// 00847f96  6a02                 push 2
// 00847f98  56                   push esi
// 00847f99  e8ba481800           call 0x9cc858
// 00847f9e  a802                 test al, 2
// 00847fa0  7517                 jne 0x847fb9
// 00847fa2  8b4734               mov eax, dword ptr [edi + 0x34]
// 00847fa5  8b4820               mov ecx, dword ptr [eax + 0x20]
// 00847fa8  56                   push esi
// 00847fa9  6a06                 push 6
// 00847fab  680a110000           push 0x110a
// 00847fb0  51                   push ecx
// 00847fb1  ffd3                 call ebx
// 00847fb3  8bf0                 mov esi, eax
// 00847fb5  85f6                 test esi, esi
// 00847fb7  75da                 jne 0x847f93
// 00847fb9  8bc6                 mov eax, esi
// 00847fbb  5f                   pop edi
// 00847fbc  5e                   pop esi
// 00847fbd  5b                   pop ebx
// 00847fbe  c3                   ret 
// library xtp-15.2.1/Source\Controls\Tree\XTPTreeBase.cpp (function ?GetFirstSelectedItem@CXTPTreeBase@@QBEPAU_TREEITEM@@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Controls/Tree/XTPTreeBase.cpp
