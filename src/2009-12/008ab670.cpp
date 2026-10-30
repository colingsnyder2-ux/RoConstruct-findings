// roc 2009-12 008ab670  unit: CXTPDockingPaneAutoHideWnd  size: 70 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008ab670
//
// 008ab670  56                   push esi
// 008ab671  57                   push edi
// 008ab672  8bf9                 mov edi, ecx
// 008ab674  8b4708               mov eax, dword ptr [edi + 8]
// 008ab677  33f6                 xor esi, esi
// 008ab679  85c0                 test eax, eax
// 008ab67b  7e26                 jle 0x8ab6a3
// 008ab67d  8d4900               lea ecx, [ecx]
// 008ab680  85f6                 test esi, esi
// 008ab682  7c2d                 jl 0x8ab6b1
// 008ab684  3bf0                 cmp esi, eax
// 008ab686  7d29                 jge 0x8ab6b1
// 008ab688  8b4704               mov eax, dword ptr [edi + 4]
// 008ab68b  8b0cb0               mov ecx, dword ptr [eax + esi*4]
// 008ab68e  85c9                 test ecx, ecx
// 008ab690  7409                 je 0x8ab69b
// 008ab692  8b11                 mov edx, dword ptr [ecx]
// 008ab694  8b4208               mov eax, dword ptr [edx + 8]
// 008ab697  6a01                 push 1
// 008ab699  ffd0                 call eax
// 008ab69b  8b4708               mov eax, dword ptr [edi + 8]
// 008ab69e  46                   inc esi
// 008ab69f  3bf0                 cmp esi, eax
// 008ab6a1  7cdd                 jl 0x8ab680
// 008ab6a3  6aff                 push -1
// 008ab6a5  6a00                 push 0
// 008ab6a7  8bcf                 mov ecx, edi
// 008ab6a9  e8f29cfaff           call 0x8553a0
// 008ab6ae  5f                   pop edi
// 008ab6af  5e                   pop esi
// 008ab6b0  c3                   ret 
// 008ab6b1  e85684f4ff           call 0x7f3b0c
// copied from an identical function in another client (function ?FreeAll@CAutoHidePanelTabManagersArray@CXTPDockingPaneAutoHidePanel@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\DockingPane\XTPDockingPaneAutoHidePanel.cpp