// from server: 100% by auto
// roc 2007-08 006ea560  unit: XTPDockingPanePaintThemes::CXTPDockingPaneOffice2003Theme  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006ea560
//
// 006ea560  8b4910               mov ecx, dword ptr [ecx + 0x10]
// 006ea563  51                   push ecx
// 006ea564  e887fbffff           call 0x6ea0f0
// 006ea569  83c404               add esp, 4
// 006ea56c  85c0                 test eax, eax
// 006ea56e  740e                 je 0x6ea57e
// 006ea570  8bc8                 mov ecx, eax
// 006ea572  e8394cfaff           call 0x68f1b0
// 006ea577  a802                 test al, 2
// 006ea579  7503                 jne 0x6ea57e
// 006ea57b  33c0                 xor eax, eax
// 006ea57d  c3                   ret 
// 006ea57e  b801000000           mov eax, 1
// 006ea583  c3                   ret 
// library xtp-11.2.2-vc8/Source\DockingPane\XTPDockingPanePaintManager.cpp (function ?IsEnabled@CXTPDockingPaneCaptionButton@@QBEHXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/DockingPane/XTPDockingPanePaintManager.cpp
