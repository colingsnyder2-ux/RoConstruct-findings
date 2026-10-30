// from server: 100% by auto
// roc 2008-06 007676a0  unit: XTPDockingPanePaintThemes::CXTPDockingPaneOffice2003Theme  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007676a0
//
// 007676a0  8b4910               mov ecx, dword ptr [ecx + 0x10]
// 007676a3  51                   push ecx
// 007676a4  e887fbffff           call 0x767230
// 007676a9  83c404               add esp, 4
// 007676ac  85c0                 test eax, eax
// 007676ae  740e                 je 0x7676be
// 007676b0  8bc8                 mov ecx, eax
// 007676b2  e809d9e0ff           call 0x574fc0
// 007676b7  a802                 test al, 2
// 007676b9  7503                 jne 0x7676be
// 007676bb  33c0                 xor eax, eax
// 007676bd  c3                   ret 
// 007676be  b801000000           mov eax, 1
// 007676c3  c3                   ret 
// library xtp-11.2.2/Source\DockingPane\XTPDockingPanePaintManager.cpp (function ?IsEnabled@CXTPDockingPaneCaptionButton@@QBEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPanePaintManager.cpp
