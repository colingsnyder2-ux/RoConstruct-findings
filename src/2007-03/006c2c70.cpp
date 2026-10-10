// from server: 100% by tester
// roc 2008-06 00756960  unit: CXTPDockingPaneAutoHidePanel  size: 24 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00756960
//
// 00756960  56                   push esi
// 00756961  8bf1                 mov esi, ecx
// 00756963  837e2000             cmp dword ptr [esi + 0x20], 0
// 00756967  7407                 je 0x756970
// 00756969  8b06                 mov eax, dword ptr [esi]
// 0075696b  8b5068               mov edx, dword ptr [eax + 0x68]
// 0075696e  ffd2                 call edx
// 00756970  8bce                 mov ecx, esi
// 00756972  5e                   pop esi
// 00756973  e97ea5f4ff           jmp 0x6a0ef6
// library xtp-11.2.2-shared-mfc/Source\DockingPane\XTPDockingPaneAutoHidePanel.cpp (function ?OnFinalRelease@CXTPDockingPaneAutoHidePanel@@MAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/DockingPane/XTPDockingPaneAutoHidePanel.cpp
