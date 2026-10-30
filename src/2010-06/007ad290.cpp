// roc 2010-06 007ad290  unit: CXTPPaintManager  size: 17 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 007ad290
//
// 007ad290  8b8110010000         mov eax, dword ptr [ecx + 0x110]
// 007ad296  83f816               cmp eax, 0x16
// 007ad299  7d05                 jge 0x7ad2a0
// 007ad29b  b816000000           mov eax, 0x16
// 007ad2a0  c3                   ret 
// library xtp-11.2.2/Source\CommandBars\XTPPaintManager.cpp (function ?GetControlHeight@CXTPPaintManager@@QBEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPPaintManager.cpp
