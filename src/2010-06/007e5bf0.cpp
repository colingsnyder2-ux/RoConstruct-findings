// roc 2010-06 007e5bf0  unit: CRobloxTreeCtrl  size: 124 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 007e5bf0
//
// 007e5bf0  53                   push ebx
// 007e5bf1  8b1d54ba9e00         mov ebx, dword ptr [0x9eba54]
// 007e5bf7  56                   push esi
// 007e5bf8  8b74240c             mov esi, dword ptr [esp + 0xc]
// 007e5bfc  57                   push edi
// 007e5bfd  8bf9                 mov edi, ecx
// 007e5bff  85f6                 test esi, esi
// 007e5c01  7514                 jne 0x7e5c17
// 007e5c03  8b4734               mov eax, dword ptr [edi + 0x34]
// 007e5c06  8b4020               mov eax, dword ptr [eax + 0x20]
// 007e5c09  6a00                 push 0
// 007e5c0b  6a00                 push 0
// 007e5c0d  680a110000           push 0x110a
// 007e5c12  50                   push eax
// 007e5c13  ffd3                 call ebx
// 007e5c15  8bf0                 mov esi, eax
// 007e5c17  8b4f34               mov ecx, dword ptr [edi + 0x34]
// 007e5c1a  56                   push esi
// 007e5c1b  e840741900           call 0x97d060
// 007e5c20  85c0                 test eax, eax
// 007e5c22  7440                 je 0x7e5c64
// 007e5c24  8b4734               mov eax, dword ptr [edi + 0x34]
// 007e5c27  8b4820               mov ecx, dword ptr [eax + 0x20]
// 007e5c2a  56                   push esi
// 007e5c2b  6a04                 push 4
// 007e5c2d  680a110000           push 0x110a
// 007e5c32  51                   push ecx
// 007e5c33  ffd3                 call ebx
// 007e5c35  85c0                 test eax, eax
// 007e5c37  741e                 je 0x7e5c57
// 007e5c39  8da42400000000       lea esp, [esp]
// 007e5c40  8b4f34               mov ecx, dword ptr [edi + 0x34]
// 007e5c43  8b5120               mov edx, dword ptr [ecx + 0x20]
// 007e5c46  50                   push eax
// 007e5c47  6a01                 push 1
// 007e5c49  680a110000           push 0x110a
// 007e5c4e  52                   push edx
// 007e5c4f  8bf0                 mov esi, eax
// 007e5c51  ffd3                 call ebx
// 007e5c53  85c0                 test eax, eax
// 007e5c55  75e9                 jne 0x7e5c40
// 007e5c57  8b4f34               mov ecx, dword ptr [edi + 0x34]
// 007e5c5a  56                   push esi
// 007e5c5b  e800741900           call 0x97d060
// 007e5c60  85c0                 test eax, eax
// 007e5c62  75c0                 jne 0x7e5c24
// 007e5c64  5f                   pop edi
// 007e5c65  8bc6                 mov eax, esi
// 007e5c67  5e                   pop esi
// 007e5c68  5b                   pop ebx
// 007e5c69  c20400               ret 4
// library xtp-11.2.2/Source\Controls\XTTreeBase.cpp (function ?GetLastItem@CXTTreeBase@@UBEPAU_TREEITEM@@PAU2@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Controls/XTTreeBase.cpp
