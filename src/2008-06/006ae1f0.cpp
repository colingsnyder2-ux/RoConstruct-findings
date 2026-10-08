// from server: 100% by auto
// roc 2008-06 006ae1f0  unit: CXTPPaintManager  size: 17 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006ae1f0
//
// 006ae1f0  8b8110010000         mov eax, dword ptr [ecx + 0x110]
// 006ae1f6  83f816               cmp eax, 0x16
// 006ae1f9  7d05                 jge 0x6ae200
// 006ae1fb  b816000000           mov eax, 0x16
// 006ae200  c3                   ret 
// library xtp-11.2.2/Source\CommandBars\XTPPaintManager.cpp (function ?GetControlHeight@CXTPPaintManager@@QBEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPPaintManager.cpp
