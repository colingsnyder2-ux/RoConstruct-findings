// roc 2011-06 008f1280  unit: PAVCXTShadowWnd::?$CList  size: 93 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008f1280
//
// 008f1280  53                   push ebx
// 008f1281  8b5c2408             mov ebx, dword ptr [esp + 8]
// 008f1285  56                   push esi
// 008f1286  8b742410             mov esi, dword ptr [esp + 0x10]
// 008f128a  8b5604               mov edx, dword ptr [esi + 4]
// 008f128d  57                   push edi
// 008f128e  83ec10               sub esp, 0x10
// 008f1291  8bc4                 mov eax, esp
// 008f1293  8bf9                 mov edi, ecx
// 008f1295  8b0e                 mov ecx, dword ptr [esi]
// 008f1297  8908                 mov dword ptr [eax], ecx
// 008f1299  8b4e08               mov ecx, dword ptr [esi + 8]
// 008f129c  895004               mov dword ptr [eax + 4], edx
// 008f129f  8b560c               mov edx, dword ptr [esi + 0xc]
// 008f12a2  894808               mov dword ptr [eax + 8], ecx
// 008f12a5  53                   push ebx
// 008f12a6  6a01                 push 1
// 008f12a8  8bcf                 mov ecx, edi
// 008f12aa  89500c               mov dword ptr [eax + 0xc], edx
// 008f12ad  e83effffff           call 0x8f11f0
// 008f12b2  8b0e                 mov ecx, dword ptr [esi]
// 008f12b4  8b5604               mov edx, dword ptr [esi + 4]
// 008f12b7  83ec10               sub esp, 0x10
// 008f12ba  8bc4                 mov eax, esp
// 008f12bc  8908                 mov dword ptr [eax], ecx
// 008f12be  8b4e08               mov ecx, dword ptr [esi + 8]
// 008f12c1  895004               mov dword ptr [eax + 4], edx
// 008f12c4  8b560c               mov edx, dword ptr [esi + 0xc]
// 008f12c7  894808               mov dword ptr [eax + 8], ecx
// 008f12ca  53                   push ebx
// 008f12cb  6a00                 push 0
// 008f12cd  8bcf                 mov ecx, edi
// 008f12cf  89500c               mov dword ptr [eax + 0xc], edx
// 008f12d2  e819ffffff           call 0x8f11f0
// 008f12d7  5f                   pop edi
// 008f12d8  5e                   pop esi
// 008f12d9  5b                   pop ebx
// 008f12da  c20800               ret 8
// library xtp-11.2.2/Source\Controls\XTWndShadow.cpp (function ?SetShadow@CXTShadowsManager@@QAEXPAUHWND__@@ABVCRect@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Controls/XTWndShadow.cpp
