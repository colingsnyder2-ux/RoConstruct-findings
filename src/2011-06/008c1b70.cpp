// roc 2011-06 008c1b70  unit: CXTPDockingPaneMiniWnd  size: 37 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008c1b70
//
// 008c1b70  8b442404             mov eax, dword ptr [esp + 4]
// 008c1b74  8b4014               mov eax, dword ptr [eax + 0x14]
// 008c1b77  3df1240000           cmp eax, 0x24f1
// 008c1b7c  7508                 jne 0x8c1b86
// 008c1b7e  e83df0ffff           call 0x8c0bc0
// 008c1b83  c20400               ret 4
// 008c1b86  3df0240000           cmp eax, 0x24f0
// 008c1b8b  7505                 jne 0x8c1b92
// 008c1b8d  e8defcffff           call 0x8c1870
// 008c1b92  c20400               ret 4
// library xtp-15.2.1/Source\DockingPane\XTPDockingPaneMiniWnd.cpp (function ?OnCaptionButtonClick@CXTPDockingPaneMiniWnd@@MAEXPAVCXTPDockingPaneCaptionButton@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/DockingPane/XTPDockingPaneMiniWnd.cpp
