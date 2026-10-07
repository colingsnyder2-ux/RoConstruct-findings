// roc 2007-08 006e0350  unit: CXTPDockingPaneMiniWnd  size: 37 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006e0350
//
// 006e0350  8b442404             mov eax, dword ptr [esp + 4]
// 006e0354  8b4014               mov eax, dword ptr [eax + 0x14]
// 006e0357  3df1240000           cmp eax, 0x24f1
// 006e035c  7508                 jne 0x6e0366
// 006e035e  e8fdf0ffff           call 0x6df460
// 006e0363  c20400               ret 4
// 006e0366  3df0240000           cmp eax, 0x24f0
// 006e036b  7505                 jne 0x6e0372
// 006e036d  e8eefcffff           call 0x6e0060
// 006e0372  c20400               ret 4
// library xtp-11.2.2-vc8/Source\DockingPane\XTPDockingPaneMiniWnd.cpp (function ?OnCaptionButtonClick@CXTPDockingPaneMiniWnd@@MAEXPAVCXTPDockingPaneCaptionButton@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/DockingPane/XTPDockingPaneMiniWnd.cpp
