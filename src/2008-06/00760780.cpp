// roc 2008-06 00760780  unit: CXTPPropertyGridToolTip  size: 81 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00760780
//
// 00760780  51                   push ecx
// 00760781  53                   push ebx
// 00760782  56                   push esi
// 00760783  8d7120               lea esi, [ecx + 0x20]
// 00760786  57                   push edi
// 00760787  8bce                 mov ecx, esi
// 00760789  e8e2ff0300           call 0x7a0770
// 0076078e  8944240c             mov dword ptr [esp + 0xc], eax
// 00760792  85c0                 test eax, eax
// 00760794  7426                 je 0x7607bc
// 00760796  8b7c2418             mov edi, dword ptr [esp + 0x18]
// 0076079a  8b5c2414             mov ebx, dword ptr [esp + 0x14]
// 0076079e  8bff                 mov edi, edi
// 007607a0  3bc7                 cmp eax, edi
// 007607a2  7418                 je 0x7607bc
// 007607a4  8d44240c             lea eax, [esp + 0xc]
// 007607a8  50                   push eax
// 007607a9  8bce                 mov ecx, esi
// 007607ab  e8d0ff0300           call 0x7a0780
// 007607b0  3bc3                 cmp eax, ebx
// 007607b2  7411                 je 0x7607c5
// 007607b4  8b44240c             mov eax, dword ptr [esp + 0xc]
// 007607b8  85c0                 test eax, eax
// 007607ba  75e4                 jne 0x7607a0
// 007607bc  5f                   pop edi
// 007607bd  5e                   pop esi
// 007607be  33c0                 xor eax, eax
// 007607c0  5b                   pop ebx
// 007607c1  59                   pop ecx
// 007607c2  c20800               ret 8
// 007607c5  5f                   pop edi
// 007607c6  5e                   pop esi
// 007607c7  b801000000           mov eax, 1
// 007607cc  5b                   pop ebx
// 007607cd  59                   pop ecx
// 007607ce  c20800               ret 8
// library xtp-11.2.2/Source\DockingPane\XTPDockingPaneSplitterContainer.cpp (function ?_Before@CXTPDockingPaneSplitterContainer@@ABEHPBVCXTPDockingPaneBase@@PAU__POSITION@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPaneSplitterContainer.cpp
