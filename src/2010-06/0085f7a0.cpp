// roc 2010-06 0085f7a0  unit: CXTPDockingPaneAutoHideWnd  size: 70 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0085f7a0
//
// 0085f7a0  56                   push esi
// 0085f7a1  57                   push edi
// 0085f7a2  8bf9                 mov edi, ecx
// 0085f7a4  8b4708               mov eax, dword ptr [edi + 8]
// 0085f7a7  33f6                 xor esi, esi
// 0085f7a9  85c0                 test eax, eax
// 0085f7ab  7e26                 jle 0x85f7d3
// 0085f7ad  8d4900               lea ecx, [ecx]
// 0085f7b0  85f6                 test esi, esi
// 0085f7b2  7c2d                 jl 0x85f7e1
// 0085f7b4  3bf0                 cmp esi, eax
// 0085f7b6  7d29                 jge 0x85f7e1
// 0085f7b8  8b4704               mov eax, dword ptr [edi + 4]
// 0085f7bb  8b0cb0               mov ecx, dword ptr [eax + esi*4]
// 0085f7be  85c9                 test ecx, ecx
// 0085f7c0  7409                 je 0x85f7cb
// 0085f7c2  8b11                 mov edx, dword ptr [ecx]
// 0085f7c4  8b4208               mov eax, dword ptr [edx + 8]
// 0085f7c7  6a01                 push 1
// 0085f7c9  ffd0                 call eax
// 0085f7cb  8b4708               mov eax, dword ptr [edi + 8]
// 0085f7ce  46                   inc esi
// 0085f7cf  3bf0                 cmp esi, eax
// 0085f7d1  7cdd                 jl 0x85f7b0
// 0085f7d3  6aff                 push -1
// 0085f7d5  6a00                 push 0
// 0085f7d7  8bcf                 mov ecx, edi
// 0085f7d9  e8221bf8ff           call 0x7e1300
// 0085f7de  5f                   pop edi
// 0085f7df  5e                   pop esi
// 0085f7e0  c3                   ret 
// 0085f7e1  e86684f4ff           call 0x7a7c4c
// copied from an identical function in another client (function ?FreeAll@CAutoHidePanelTabManagersArray@CXTPDockingPaneAutoHidePanel@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\DockingPane\XTPDockingPaneAutoHidePanel.cpp