// roc 2011-06 0080f730  unit: CXTPPaintManager  size: 17 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0080f730
//
// 0080f730  8b8110010000         mov eax, dword ptr [ecx + 0x110]
// 0080f736  83f816               cmp eax, 0x16
// 0080f739  7d05                 jge 0x80f740
// 0080f73b  b816000000           mov eax, 0x16
// 0080f740  c3                   ret 
// library xtp-11.2.2/Source\CommandBars\XTPPaintManager.cpp (function ?GetControlHeight@CXTPPaintManager@@QBEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPPaintManager.cpp
