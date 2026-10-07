// roc 2012-06 00a39f80  unit: CXTPDockingPaneMiniWnd  size: 37 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a39f80
//
// 00a39f80  8b442404             mov eax, dword ptr [esp + 4]
// 00a39f84  8b4014               mov eax, dword ptr [eax + 0x14]
// 00a39f87  3df1240000           cmp eax, 0x24f1
// 00a39f8c  7508                 jne 0xa39f96
// 00a39f8e  e83df0ffff           call 0xa38fd0
// 00a39f93  c20400               ret 4
// 00a39f96  3df0240000           cmp eax, 0x24f0
// 00a39f9b  7505                 jne 0xa39fa2
// 00a39f9d  e8defcffff           call 0xa39c80
// 00a39fa2  c20400               ret 4
// library xtp-15.2.1/Source\DockingPane\XTPDockingPaneMiniWnd.cpp (function ?OnCaptionButtonClick@CXTPDockingPaneMiniWnd@@MAEXPAVCXTPDockingPaneCaptionButton@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/DockingPane/XTPDockingPaneMiniWnd.cpp
