// from server: 100% by auto
// roc 2011-06 00847370  unit: CXTTreeBase  size: 128 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00847370
//
// 00847370  53                   push ebx
// 00847371  56                   push esi
// 00847372  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00847376  57                   push edi
// 00847377  8bf9                 mov edi, ecx
// 00847379  8b4f34               mov ecx, dword ptr [edi + 0x34]
// 0084737c  56                   push esi
// 0084737d  e8f4541800           call 0x9cc876
// 00847382  8b1dc019a400         mov ebx, dword ptr [0xa419c0]
// 00847388  85c0                 test eax, eax
// 0084738a  7415                 je 0x8473a1
// 0084738c  8b4734               mov eax, dword ptr [edi + 0x34]
// 0084738f  8b4020               mov eax, dword ptr [eax + 0x20]
// 00847392  56                   push esi
// 00847393  6a04                 push 4
// 00847395  680a110000           push 0x110a
// 0084739a  50                   push eax
// 0084739b  ffd3                 call ebx
// 0084739d  85c0                 test eax, eax
// 0084739f  7549                 jne 0x8473ea
// 008473a1  8b4734               mov eax, dword ptr [edi + 0x34]
// 008473a4  8b4820               mov ecx, dword ptr [eax + 0x20]
// 008473a7  56                   push esi
// 008473a8  6a01                 push 1
// 008473aa  680a110000           push 0x110a
// 008473af  51                   push ecx
// 008473b0  ffd3                 call ebx
// 008473b2  85c0                 test eax, eax
// 008473b4  7534                 jne 0x8473ea
// 008473b6  8b4734               mov eax, dword ptr [edi + 0x34]
// 008473b9  8b5020               mov edx, dword ptr [eax + 0x20]
// 008473bc  56                   push esi
// 008473bd  6a03                 push 3
// 008473bf  680a110000           push 0x110a
// 008473c4  52                   push edx
// 008473c5  ffd3                 call ebx
// 008473c7  8bf0                 mov esi, eax
// 008473c9  85f6                 test esi, esi
// 008473cb  741b                 je 0x8473e8
// 008473cd  8b4734               mov eax, dword ptr [edi + 0x34]
// 008473d0  8b4020               mov eax, dword ptr [eax + 0x20]
// 008473d3  56                   push esi
// 008473d4  6a01                 push 1
// 008473d6  680a110000           push 0x110a
// 008473db  50                   push eax
// 008473dc  ffd3                 call ebx
// 008473de  85c0                 test eax, eax
// 008473e0  74d4                 je 0x8473b6
// 008473e2  5f                   pop edi
// 008473e3  5e                   pop esi
// 008473e4  5b                   pop ebx
// 008473e5  c20400               ret 4
// 008473e8  33c0                 xor eax, eax
// 008473ea  5f                   pop edi
// 008473eb  5e                   pop esi
// 008473ec  5b                   pop ebx
// 008473ed  c20400               ret 4
// library xtp-15.2.1/Source\Controls\Tree\XTPTreeBase.cpp (function ?GetNextItem@CXTPTreeBase@@UBEPAU_TREEITEM@@PAU2@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Controls/Tree/XTPTreeBase.cpp
