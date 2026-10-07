// roc 2011-06 008cbf50  unit: XTPDockingPanePaintThemes::CXTPDockingPaneOffice2003Theme  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008cbf50
//
// 008cbf50  8b4910               mov ecx, dword ptr [ecx + 0x10]
// 008cbf53  51                   push ecx
// 008cbf54  e897fbffff           call 0x8cbaf0
// 008cbf59  83c404               add esp, 4
// 008cbf5c  85c0                 test eax, eax
// 008cbf5e  740e                 je 0x8cbf6e
// 008cbf60  8bc8                 mov ecx, eax
// 008cbf62  e8c91ffaff           call 0x86df30
// 008cbf67  a802                 test al, 2
// 008cbf69  7503                 jne 0x8cbf6e
// 008cbf6b  33c0                 xor eax, eax
// 008cbf6d  c3                   ret 
// 008cbf6e  b801000000           mov eax, 1
// 008cbf73  c3                   ret 
// library xtp-15.2.1/Source\DockingPane\XTPDockingPanePaintManager.cpp (function ?IsEnabled@CXTPDockingPaneCaptionButton@@QBEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/DockingPane/XTPDockingPanePaintManager.cpp
