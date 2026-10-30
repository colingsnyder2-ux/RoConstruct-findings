// roc 2009-12 008b5290  unit: CXTPDockingPaneSplitterContainer  size: 87 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008b5290
//
// 008b5290  51                   push ecx
// 008b5291  57                   push edi
// 008b5292  8d7920               lea edi, [ecx + 0x20]
// 008b5295  8bcf                 mov ecx, edi
// 008b5297  e8f454faff           call 0x85a790
// 008b529c  89442404             mov dword ptr [esp + 4], eax
// 008b52a0  85c0                 test eax, eax
// 008b52a2  743e                 je 0x8b52e2
// 008b52a4  53                   push ebx
// 008b52a5  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 008b52a9  55                   push ebp
// 008b52aa  8b6c2418             mov ebp, dword ptr [esp + 0x18]
// 008b52ae  56                   push esi
// 008b52af  90                   nop 
// 008b52b0  8d442410             lea eax, [esp + 0x10]
// 008b52b4  50                   push eax
// 008b52b5  8bcf                 mov ecx, edi
// 008b52b7  e854dc0300           call 0x8f2f10
// 008b52bc  8bf0                 mov esi, eax
// 008b52be  395e18               cmp dword ptr [esi + 0x18], ebx
// 008b52c1  7515                 jne 0x8b52d8
// 008b52c3  8b16                 mov edx, dword ptr [esi]
// 008b52c5  8b4214               mov eax, dword ptr [edx + 0x14]
// 008b52c8  8bce                 mov ecx, esi
// 008b52ca  ffd0                 call eax
// 008b52cc  85c0                 test eax, eax
// 008b52ce  7508                 jne 0x8b52d8
// 008b52d0  56                   push esi
// 008b52d1  8bcd                 mov ecx, ebp
// 008b52d3  e8a8e80000           call 0x8c3b80
// 008b52d8  837c241000           cmp dword ptr [esp + 0x10], 0
// 008b52dd  75d1                 jne 0x8b52b0
// 008b52df  5e                   pop esi
// 008b52e0  5d                   pop ebp
// 008b52e1  5b                   pop ebx
// 008b52e2  5f                   pop edi
// 008b52e3  59                   pop ecx
// 008b52e4  c20800               ret 8
// copied from an identical function in another client (function ?FindChildPane@CXTPDockingPaneSplitterContainer@@QBEXW4XTPDockingPaneType@@PAV?$CList@PAVCXTPDockingPaneBase@@PAV1@@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\DockingPane\XTPDockingPaneSplitterContainer.cpp