// roc 2011-06 008bc960  unit: CXTPDockingPaneAutoHideWnd  size: 70 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008bc960
//
// 008bc960  56                   push esi
// 008bc961  57                   push edi
// 008bc962  8bf9                 mov edi, ecx
// 008bc964  8b4708               mov eax, dword ptr [edi + 8]
// 008bc967  33f6                 xor esi, esi
// 008bc969  85c0                 test eax, eax
// 008bc96b  7e26                 jle 0x8bc993
// 008bc96d  8d4900               lea ecx, [ecx]
// 008bc970  85f6                 test esi, esi
// 008bc972  7c2d                 jl 0x8bc9a1
// 008bc974  3bf0                 cmp esi, eax
// 008bc976  7d29                 jge 0x8bc9a1
// 008bc978  8b4704               mov eax, dword ptr [edi + 4]
// 008bc97b  8b0cb0               mov ecx, dword ptr [eax + esi*4]
// 008bc97e  85c9                 test ecx, ecx
// 008bc980  7409                 je 0x8bc98b
// 008bc982  8b11                 mov edx, dword ptr [ecx]
// 008bc984  8b4208               mov eax, dword ptr [edx + 8]
// 008bc987  6a01                 push 1
// 008bc989  ffd0                 call eax
// 008bc98b  8b4708               mov eax, dword ptr [edi + 8]
// 008bc98e  46                   inc esi
// 008bc98f  3bf0                 cmp esi, eax
// 008bc991  7cdd                 jl 0x8bc970
// 008bc993  6aff                 push -1
// 008bc995  6a00                 push 0
// 008bc997  8bcf                 mov ecx, edi
// 008bc999  e8a221f8ff           call 0x83eb40
// 008bc99e  5f                   pop edi
// 008bc99f  5e                   pop esi
// 008bc9a0  c3                   ret 
// 008bc9a1  e864d9f4ff           call 0x80a30a
// copied from an identical function in another client (function ?FreeAll@CAutoHidePanelTabManagersArray@CXTPDockingPaneAutoHidePanel@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\DockingPane\XTPDockingPaneAutoHidePanel.cpp