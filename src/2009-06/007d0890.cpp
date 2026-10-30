// roc 2009-06 007d0890  unit: CXTPDockingPaneAutoHideWnd  size: 70 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 007d0890
//
// 007d0890  56                   push esi
// 007d0891  57                   push edi
// 007d0892  8bf9                 mov edi, ecx
// 007d0894  8b4708               mov eax, dword ptr [edi + 8]
// 007d0897  33f6                 xor esi, esi
// 007d0899  85c0                 test eax, eax
// 007d089b  7e26                 jle 0x7d08c3
// 007d089d  8d4900               lea ecx, [ecx]
// 007d08a0  85f6                 test esi, esi
// 007d08a2  7c2d                 jl 0x7d08d1
// 007d08a4  3bf0                 cmp esi, eax
// 007d08a6  7d29                 jge 0x7d08d1
// 007d08a8  8b4704               mov eax, dword ptr [edi + 4]
// 007d08ab  8b0cb0               mov ecx, dword ptr [eax + esi*4]
// 007d08ae  85c9                 test ecx, ecx
// 007d08b0  7409                 je 0x7d08bb
// 007d08b2  8b11                 mov edx, dword ptr [ecx]
// 007d08b4  8b4208               mov eax, dword ptr [edx + 8]
// 007d08b7  6a01                 push 1
// 007d08b9  ffd0                 call eax
// 007d08bb  8b4708               mov eax, dword ptr [edi + 8]
// 007d08be  46                   inc esi
// 007d08bf  3bf0                 cmp esi, eax
// 007d08c1  7cdd                 jl 0x7d08a0
// 007d08c3  6aff                 push -1
// 007d08c5  6a00                 push 0
// 007d08c7  8bcf                 mov ecx, edi
// 007d08c9  e8421cf8ff           call 0x752510
// 007d08ce  5f                   pop edi
// 007d08cf  5e                   pop esi
// 007d08d0  c3                   ret 
// 007d08d1  e80e84f4ff           call 0x718ce4
// copied from an identical function in another client (function ?FreeAll@CAutoHidePanelTabManagersArray@CXTPDockingPaneAutoHidePanel@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\DockingPane\XTPDockingPaneAutoHidePanel.cpp