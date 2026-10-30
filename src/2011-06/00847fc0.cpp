// from server: 100% by auto
// roc 2011-06 00847fc0  unit: CRobloxTreeCtrl  size: 84 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00847fc0
//
// 00847fc0  53                   push ebx
// 00847fc1  8b1dc019a400         mov ebx, dword ptr [0xa419c0]
// 00847fc7  56                   push esi
// 00847fc8  57                   push edi
// 00847fc9  8bf9                 mov edi, ecx
// 00847fcb  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00847fcf  8b4734               mov eax, dword ptr [edi + 0x34]
// 00847fd2  8b5020               mov edx, dword ptr [eax + 0x20]
// 00847fd5  51                   push ecx
// 00847fd6  6a06                 push 6
// 00847fd8  680a110000           push 0x110a
// 00847fdd  52                   push edx
// 00847fde  ffd3                 call ebx
// 00847fe0  8bf0                 mov esi, eax
// 00847fe2  85f6                 test esi, esi
// 00847fe4  7428                 je 0x84800e
// 00847fe6  8b4f34               mov ecx, dword ptr [edi + 0x34]
// 00847fe9  6a02                 push 2
// 00847feb  56                   push esi
// 00847fec  e867481800           call 0x9cc858
// 00847ff1  a802                 test al, 2
// 00847ff3  7517                 jne 0x84800c
// 00847ff5  8b4734               mov eax, dword ptr [edi + 0x34]
// 00847ff8  8b4020               mov eax, dword ptr [eax + 0x20]
// 00847ffb  56                   push esi
// 00847ffc  6a06                 push 6
// 00847ffe  680a110000           push 0x110a
// 00848003  50                   push eax
// 00848004  ffd3                 call ebx
// 00848006  8bf0                 mov esi, eax
// 00848008  85f6                 test esi, esi
// 0084800a  75da                 jne 0x847fe6
// 0084800c  8bc6                 mov eax, esi
// 0084800e  5f                   pop edi
// 0084800f  5e                   pop esi
// 00848010  5b                   pop ebx
// 00848011  c20400               ret 4
// library xtp-15.2.1/Source\Controls\Tree\XTPTreeBase.cpp (function ?GetNextSelectedItem@CXTPTreeBase@@QBEPAU_TREEITEM@@PAU2@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Controls/Tree/XTPTreeBase.cpp
