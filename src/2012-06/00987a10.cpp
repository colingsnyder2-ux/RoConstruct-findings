// roc 2012-06 00987a10  unit: CXTPPaintManager  size: 17 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00987a10
//
// 00987a10  8b8110010000         mov eax, dword ptr [ecx + 0x110]
// 00987a16  83f816               cmp eax, 0x16
// 00987a19  7d05                 jge 0x987a20
// 00987a1b  b816000000           mov eax, 0x16
// 00987a20  c3                   ret 
// library xtp-11.2.2/Source\CommandBars\XTPPaintManager.cpp (function ?GetControlHeight@CXTPPaintManager@@QBEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPPaintManager.cpp
