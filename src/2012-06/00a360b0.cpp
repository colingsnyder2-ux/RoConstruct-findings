// roc 2012-06 00a360b0  unit: CXTPDockingPaneWindowSelect  size: 32 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a360b0
//
// 00a360b0  56                   push esi
// 00a360b1  8bf1                 mov esi, ecx
// 00a360b3  e826c6f4ff           call 0x9826de
// 00a360b8  f6463c10             test byte ptr [esi + 0x3c], 0x10
// 00a360bc  740e                 je 0xa360cc
// 00a360be  8b06                 mov eax, dword ptr [esi]
// 00a360c0  8b9094000000         mov edx, dword ptr [eax + 0x94]
// 00a360c6  6a02                 push 2
// 00a360c8  8bce                 mov ecx, esi
// 00a360ca  ffd2                 call edx
// 00a360cc  5e                   pop esi
// 00a360cd  c20400               ret 4
// library xtp-15.2.1-shared-mfc/Source\DockingPane\XTPDockingPaneKeyboardHook.cpp (function ?OnKillFocus@CXTPDockingPaneWindowSelect@@QAEXPAVCWnd@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1-shared-mfc Source/DockingPane/XTPDockingPaneKeyboardHook.cpp
