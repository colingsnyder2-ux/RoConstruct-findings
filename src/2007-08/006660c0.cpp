// from server: 100% by auto
// roc 2007-08 006660c0  unit: CRobloxTreeCtrl  size: 84 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006660c0
//
// 006660c0  53                   push ebx
// 006660c1  8b1dd8ec7700         mov ebx, dword ptr [0x77ecd8]
// 006660c7  56                   push esi
// 006660c8  57                   push edi
// 006660c9  8bf9                 mov edi, ecx
// 006660cb  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 006660cf  8b4734               mov eax, dword ptr [edi + 0x34]
// 006660d2  8b5020               mov edx, dword ptr [eax + 0x20]
// 006660d5  51                   push ecx
// 006660d6  6a06                 push 6
// 006660d8  680a110000           push 0x110a
// 006660dd  52                   push edx
// 006660de  ffd3                 call ebx
// 006660e0  8bf0                 mov esi, eax
// 006660e2  85f6                 test esi, esi
// 006660e4  7428                 je 0x66610e
// 006660e6  8b4f34               mov ecx, dword ptr [edi + 0x34]
// 006660e9  6a02                 push 2
// 006660eb  56                   push esi
// 006660ec  e849250d00           call 0x73863a
// 006660f1  a802                 test al, 2
// 006660f3  7517                 jne 0x66610c
// 006660f5  8b4734               mov eax, dword ptr [edi + 0x34]
// 006660f8  8b4020               mov eax, dword ptr [eax + 0x20]
// 006660fb  56                   push esi
// 006660fc  6a06                 push 6
// 006660fe  680a110000           push 0x110a
// 00666103  50                   push eax
// 00666104  ffd3                 call ebx
// 00666106  8bf0                 mov esi, eax
// 00666108  85f6                 test esi, esi
// 0066610a  75da                 jne 0x6660e6
// 0066610c  8bc6                 mov eax, esi
// 0066610e  5f                   pop edi
// 0066610f  5e                   pop esi
// 00666110  5b                   pop ebx
// 00666111  c20400               ret 4
// library xtp-11.2.2-vc8/Source\Controls\XTTreeBase.cpp (function ?GetNextSelectedItem@CXTTreeBase@@QBEPAU_TREEITEM@@PAU2@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/Controls/XTTreeBase.cpp
