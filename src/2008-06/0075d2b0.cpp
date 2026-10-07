// roc 2008-06 0075d2b0  unit: CXTPDockingPaneMiniWnd  size: 37 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0075d2b0
//
// 0075d2b0  8b442404             mov eax, dword ptr [esp + 4]
// 0075d2b4  8b4014               mov eax, dword ptr [eax + 0x14]
// 0075d2b7  3df1240000           cmp eax, 0x24f1
// 0075d2bc  7508                 jne 0x75d2c6
// 0075d2be  e83df0ffff           call 0x75c300
// 0075d2c3  c20400               ret 4
// 0075d2c6  3df0240000           cmp eax, 0x24f0
// 0075d2cb  7505                 jne 0x75d2d2
// 0075d2cd  e8defcffff           call 0x75cfb0
// 0075d2d2  c20400               ret 4
// library xtp-11.2.2/Source\DockingPane\XTPDockingPaneMiniWnd.cpp (function ?OnCaptionButtonClick@CXTPDockingPaneMiniWnd@@MAEXPAVCXTPDockingPaneCaptionButton@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPaneMiniWnd.cpp
