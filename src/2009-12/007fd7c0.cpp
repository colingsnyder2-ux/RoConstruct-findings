// roc 2009-12 007fd7c0  unit: CXTPPaintManager  size: 17 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 007fd7c0
//
// 007fd7c0  8b8110010000         mov eax, dword ptr [ecx + 0x110]
// 007fd7c6  83f816               cmp eax, 0x16
// 007fd7c9  7d05                 jge 0x7fd7d0
// 007fd7cb  b816000000           mov eax, 0x16
// 007fd7d0  c3                   ret 
// library xtp-11.2.2/Source\CommandBars\XTPPaintManager.cpp (function ?GetControlHeight@CXTPPaintManager@@QBEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPPaintManager.cpp
