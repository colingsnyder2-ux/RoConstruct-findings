// roc 2009-12 008331e0  unit: CXTTreeBase::PAXPAXUCLRFONT::?$CMap  size: 177 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008331e0
//
// 008331e0  53                   push ebx
// 008331e1  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 008331e5  55                   push ebp
// 008331e6  8b6c2410             mov ebp, dword ptr [esp + 0x10]
// 008331ea  85db                 test ebx, ebx
// 008331ec  7409                 je 0x8331f7
// 008331ee  85ed                 test ebp, ebp
// 008331f0  7505                 jne 0x8331f7
// 008331f2  e81509fcff           call 0x7f3b0c
// 008331f7  8b44240c             mov eax, dword ptr [esp + 0xc]
// 008331fb  8b4818               mov ecx, dword ptr [eax + 0x18]
// 008331fe  f7d1                 not ecx
// 00833200  56                   push esi
// 00833201  57                   push edi
// 00833202  f6c101               test cl, 1
// 00833205  743d                 je 0x833244
// 00833207  85db                 test ebx, ebx
// 00833209  7632                 jbe 0x83323d
// 0083320b  eb03                 jmp 0x833210
// 0083320d  8d4900               lea ecx, [ecx]
// 00833210  8bfb                 mov edi, ebx
// 00833212  81fbe1e1e101         cmp ebx, 0x1e1e1e1
// 00833218  7205                 jb 0x83321f
// 0083321a  bfe1e1e101           mov edi, 0x1e1e1e1
// 0083321f  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00833223  8bf7                 mov esi, edi
// 00833225  c1e604               shl esi, 4
// 00833228  03f7                 add esi, edi
// 0083322a  03f6                 add esi, esi
// 0083322c  03f6                 add esi, esi
// 0083322e  56                   push esi
// 0083322f  55                   push ebp
// 00833230  e8a711fcff           call 0x7f43dc
// 00833235  2bdf                 sub ebx, edi
// 00833237  03ee                 add ebp, esi
// 00833239  85db                 test ebx, ebx
// 0083323b  77d3                 ja 0x833210
// 0083323d  5f                   pop edi
// 0083323e  5e                   pop esi
// 0083323f  5d                   pop ebp
// 00833240  5b                   pop ebx
// 00833241  c20c00               ret 0xc
// 00833244  85db                 test ebx, ebx
// 00833246  76f5                 jbe 0x83323d
// 00833248  eb06                 jmp 0x833250
// 0083324a  8d9b00000000         lea ebx, [ebx]
// 00833250  8bfb                 mov edi, ebx
// 00833252  81fbe1e1e101         cmp ebx, 0x1e1e1e1
// 00833258  7205                 jb 0x83325f
// 0083325a  bfe1e1e101           mov edi, 0x1e1e1e1
// 0083325f  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00833263  8bf7                 mov esi, edi
// 00833265  c1e604               shl esi, 4
// 00833268  03f7                 add esi, edi
// 0083326a  03f6                 add esi, esi
// 0083326c  03f6                 add esi, esi
// 0083326e  56                   push esi
// 0083326f  55                   push ebp
// 00833270  e86111fcff           call 0x7f43d6
// 00833275  3bc6                 cmp eax, esi
// 00833277  750f                 jne 0x833288
// 00833279  2bdf                 sub ebx, edi
// 0083327b  03ee                 add ebp, esi
// 0083327d  85db                 test ebx, ebx
// 0083327f  77cf                 ja 0x833250
// 00833281  5f                   pop edi
// 00833282  5e                   pop esi
// 00833283  5d                   pop ebp
// 00833284  5b                   pop ebx
// 00833285  c20c00               ret 0xc
// 00833288  6a00                 push 0
// 0083328a  6a03                 push 3
// 0083328c  e83f11fcff           call 0x7f43d0
// copied from an identical function in another client (function ??$SerializeElements@UCLRFONT@CXTPTreeBase@@@@YGXAAVCArchive@@PAUCLRFONT@CXTPTreeBase@@H@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Controls/Tree/XTPTreeBase.cpp