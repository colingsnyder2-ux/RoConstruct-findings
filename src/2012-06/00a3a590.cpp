// roc 2012-06 00a3a590  unit: CXTPDockingPaneAutoHidePanel  size: 24 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a3a590
//
// 00a3a590  56                   push esi
// 00a3a591  8bf1                 mov esi, ecx
// 00a3a593  837e2000             cmp dword ptr [esi + 0x20], 0
// 00a3a597  7407                 je 0xa3a5a0
// 00a3a599  8b06                 mov eax, dword ptr [esi]
// 00a3a59b  8b5068               mov edx, dword ptr [eax + 0x68]
// 00a3a59e  ffd2                 call edx
// 00a3a5a0  8bce                 mov ecx, esi
// 00a3a5a2  5e                   pop esi
// 00a3a5a3  e94083f4ff           jmp 0x9828e8
// library xtp-15.2.1-shared-mfc/Source\DockingPane\XTPDockingPaneAutoHidePanel.cpp (function ?OnFinalRelease@CXTPDockingPaneAutoHidePanel@@MAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1-shared-mfc Source/DockingPane/XTPDockingPaneAutoHidePanel.cpp
