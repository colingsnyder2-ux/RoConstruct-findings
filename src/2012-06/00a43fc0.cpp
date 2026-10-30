// from server: 100% by auto
// roc 2012-06 00a43fc0  unit: CXTPDockingPanePaintManager  size: 38 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a43fc0
//
// 00a43fc0  8b442404             mov eax, dword ptr [esp + 4]
// 00a43fc4  50                   push eax
// 00a43fc5  e806ffffff           call 0xa43ed0
// 00a43fca  83c404               add esp, 4
// 00a43fcd  85c0                 test eax, eax
// 00a43fcf  7508                 jne 0xa43fd9
// 00a43fd1  b801000000           mov eax, 1
// 00a43fd6  c20400               ret 4
// 00a43fd9  8bc8                 mov ecx, eax
// 00a43fdb  e880fcf9ff           call 0x9e3c60
// 00a43fe0  83e001               and eax, 1
// 00a43fe3  c20400               ret 4
// library xtp-15.2.1/Source\DockingPane\XTPDockingPanePaintManager.cpp (function ?IsCaptionEnabled@CXTPDockingPanePaintManager@@QAEHPAVCXTPDockingPaneBase@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/DockingPane/XTPDockingPanePaintManager.cpp
