// roc 2009-06 00722900  unit: CXTPPaintManager  size: 17 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00722900
//
// 00722900  8b8110010000         mov eax, dword ptr [ecx + 0x110]
// 00722906  83f816               cmp eax, 0x16
// 00722909  7d05                 jge 0x722910
// 0072290b  b816000000           mov eax, 0x16
// 00722910  c3                   ret 
// library xtp-11.2.2/Source\CommandBars\XTPPaintManager.cpp (function ?GetControlHeight@CXTPPaintManager@@QBEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPPaintManager.cpp
