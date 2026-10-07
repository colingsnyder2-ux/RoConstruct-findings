// roc 2008-06 00767320  unit: XTPDockingPanePaintThemes::CXTPDockingPaneVisualStudio2005SecondTheme  size: 38 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00767320
//
// 00767320  8b442404             mov eax, dword ptr [esp + 4]
// 00767324  50                   push eax
// 00767325  e806ffffff           call 0x767230
// 0076732a  83c404               add esp, 4
// 0076732d  85c0                 test eax, eax
// 0076732f  7508                 jne 0x767339
// 00767331  b801000000           mov eax, 1
// 00767336  c20400               ret 4
// 00767339  8bc8                 mov ecx, eax
// 0076733b  e880dce0ff           call 0x574fc0
// 00767340  83e001               and eax, 1
// 00767343  c20400               ret 4
// library xtp-11.2.2/Source\DockingPane\XTPDockingPanePaintManager.cpp (function ?IsCaptionEnabled@CXTPDockingPanePaintManager@@QAEHPAVCXTPDockingPaneBase@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPanePaintManager.cpp
