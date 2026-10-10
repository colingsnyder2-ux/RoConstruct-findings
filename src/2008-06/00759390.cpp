// roc 2008-06 00759390  unit: CXTPDockingPaneWindowSelect  size: 32 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00759390
//
// 00759390  56                   push esi
// 00759391  8bf1                 mov esi, ecx
// 00759393  e8d078f4ff           call 0x6a0c68
// 00759398  f6463c10             test byte ptr [esi + 0x3c], 0x10
// 0075939c  740e                 je 0x7593ac
// 0075939e  8b06                 mov eax, dword ptr [esi]
// 007593a0  8b9094000000         mov edx, dword ptr [eax + 0x94]
// 007593a6  6a02                 push 2
// 007593a8  8bce                 mov ecx, esi
// 007593aa  ffd2                 call edx
// 007593ac  5e                   pop esi
// 007593ad  c20400               ret 4
// library xtp-11.2.2-shared-mfc/Source\DockingPane\XTPDockingPaneKeyboardHook.cpp (function ?OnKillFocus@CXTPDockingPaneWindowSelect@@QAEXPAVCWnd@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/DockingPane/XTPDockingPaneKeyboardHook.cpp
