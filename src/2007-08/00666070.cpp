// from server: 100% by auto
// roc 2007-08 00666070  unit: CRobloxTreeCtrl  size: 79 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00666070
//
// 00666070  53                   push ebx
// 00666071  8b1dd8ec7700         mov ebx, dword ptr [0x77ecd8]
// 00666077  56                   push esi
// 00666078  57                   push edi
// 00666079  6a00                 push 0
// 0066607b  8bf9                 mov edi, ecx
// 0066607d  8b4734               mov eax, dword ptr [edi + 0x34]
// 00666080  8b4020               mov eax, dword ptr [eax + 0x20]
// 00666083  6a00                 push 0
// 00666085  680a110000           push 0x110a
// 0066608a  50                   push eax
// 0066608b  ffd3                 call ebx
// 0066608d  8bf0                 mov esi, eax
// 0066608f  85f6                 test esi, esi
// 00666091  7428                 je 0x6660bb
// 00666093  8b4f34               mov ecx, dword ptr [edi + 0x34]
// 00666096  6a02                 push 2
// 00666098  56                   push esi
// 00666099  e89c250d00           call 0x73863a
// 0066609e  a802                 test al, 2
// 006660a0  7517                 jne 0x6660b9
// 006660a2  8b4734               mov eax, dword ptr [edi + 0x34]
// 006660a5  8b4820               mov ecx, dword ptr [eax + 0x20]
// 006660a8  56                   push esi
// 006660a9  6a06                 push 6
// 006660ab  680a110000           push 0x110a
// 006660b0  51                   push ecx
// 006660b1  ffd3                 call ebx
// 006660b3  8bf0                 mov esi, eax
// 006660b5  85f6                 test esi, esi
// 006660b7  75da                 jne 0x666093
// 006660b9  8bc6                 mov eax, esi
// 006660bb  5f                   pop edi
// 006660bc  5e                   pop esi
// 006660bd  5b                   pop ebx
// 006660be  c3                   ret 
// library xtp-11.2.2-vc8/Source\Controls\XTTreeBase.cpp (function ?GetFirstSelectedItem@CXTTreeBase@@QBEPAU_TREEITEM@@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/Controls/XTTreeBase.cpp
