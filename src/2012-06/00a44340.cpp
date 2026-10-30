// from server: 100% by auto
// roc 2012-06 00a44340  unit: XTPDockingPanePaintThemes::CXTPDockingPaneOffice2003Theme  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a44340
//
// 00a44340  8b4910               mov ecx, dword ptr [ecx + 0x10]
// 00a44343  51                   push ecx
// 00a44344  e887fbffff           call 0xa43ed0
// 00a44349  83c404               add esp, 4
// 00a4434c  85c0                 test eax, eax
// 00a4434e  740e                 je 0xa4435e
// 00a44350  8bc8                 mov ecx, eax
// 00a44352  e809f9f9ff           call 0x9e3c60
// 00a44357  a802                 test al, 2
// 00a44359  7503                 jne 0xa4435e
// 00a4435b  33c0                 xor eax, eax
// 00a4435d  c3                   ret 
// 00a4435e  b801000000           mov eax, 1
// 00a44363  c3                   ret 
// library xtp-15.2.1/Source\DockingPane\XTPDockingPanePaintManager.cpp (function ?IsEnabled@CXTPDockingPaneCaptionButton@@QBEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/DockingPane/XTPDockingPanePaintManager.cpp
