// roc 2008-06 007593b0  unit: CXTPDockingPaneWindowSelect  size: 32 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007593b0
//
// 007593b0  56                   push esi
// 007593b1  8bf1                 mov esi, ecx
// 007593b3  f6463c10             test byte ptr [esi + 0x3c], 0x10
// 007593b7  740c                 je 0x7593c5
// 007593b9  8b06                 mov eax, dword ptr [esi]
// 007593bb  8b9094000000         mov edx, dword ptr [eax + 0x94]
// 007593c1  6a02                 push 2
// 007593c3  ffd2                 call edx
// 007593c5  8bce                 mov ecx, esi
// 007593c7  e89c78f4ff           call 0x6a0c68
// 007593cc  5e                   pop esi
// 007593cd  c20400               ret 4
// library xtp-11.2.2-shared-mfc/Source\DockingPane\XTPDockingPaneKeyboardHook.cpp (function ?OnCaptureChanged@CXTPDockingPaneWindowSelect@@QAEXPAVCWnd@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/DockingPane/XTPDockingPaneKeyboardHook.cpp
