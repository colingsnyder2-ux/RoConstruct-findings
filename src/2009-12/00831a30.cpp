// roc 2009-12 00831a30  unit: CRobloxTreeCtrl  size: 124 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00831a30
//
// 00831a30  53                   push ebx
// 00831a31  8b1dc4cb9800         mov ebx, dword ptr [0x98cbc4]
// 00831a37  56                   push esi
// 00831a38  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00831a3c  57                   push edi
// 00831a3d  8bf9                 mov edi, ecx
// 00831a3f  85f6                 test esi, esi
// 00831a41  7514                 jne 0x831a57
// 00831a43  8b4734               mov eax, dword ptr [edi + 0x34]
// 00831a46  8b4020               mov eax, dword ptr [eax + 0x20]
// 00831a49  6a00                 push 0
// 00831a4b  6a00                 push 0
// 00831a4d  680a110000           push 0x110a
// 00831a52  50                   push eax
// 00831a53  ffd3                 call ebx
// 00831a55  8bf0                 mov esi, eax
// 00831a57  8b4f34               mov ecx, dword ptr [edi + 0x34]
// 00831a5a  56                   push esi
// 00831a5b  e8c44c0f00           call 0x926724
// 00831a60  85c0                 test eax, eax
// 00831a62  7440                 je 0x831aa4
// 00831a64  8b4734               mov eax, dword ptr [edi + 0x34]
// 00831a67  8b4820               mov ecx, dword ptr [eax + 0x20]
// 00831a6a  56                   push esi
// 00831a6b  6a04                 push 4
// 00831a6d  680a110000           push 0x110a
// 00831a72  51                   push ecx
// 00831a73  ffd3                 call ebx
// 00831a75  85c0                 test eax, eax
// 00831a77  741e                 je 0x831a97
// 00831a79  8da42400000000       lea esp, [esp]
// 00831a80  8b4f34               mov ecx, dword ptr [edi + 0x34]
// 00831a83  8b5120               mov edx, dword ptr [ecx + 0x20]
// 00831a86  50                   push eax
// 00831a87  6a01                 push 1
// 00831a89  680a110000           push 0x110a
// 00831a8e  52                   push edx
// 00831a8f  8bf0                 mov esi, eax
// 00831a91  ffd3                 call ebx
// 00831a93  85c0                 test eax, eax
// 00831a95  75e9                 jne 0x831a80
// 00831a97  8b4f34               mov ecx, dword ptr [edi + 0x34]
// 00831a9a  56                   push esi
// 00831a9b  e8844c0f00           call 0x926724
// 00831aa0  85c0                 test eax, eax
// 00831aa2  75c0                 jne 0x831a64
// 00831aa4  5f                   pop edi
// 00831aa5  8bc6                 mov eax, esi
// 00831aa7  5e                   pop esi
// 00831aa8  5b                   pop ebx
// 00831aa9  c20400               ret 4
// library xtp-11.2.2/Source\Controls\XTTreeBase.cpp (function ?GetLastItem@CXTTreeBase@@UBEPAU_TREEITEM@@PAU2@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Controls/XTTreeBase.cpp
