// roc 2009-06 00723080  unit: CXTPPaintManager  size: 44 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00723080
//
// 00723080  83b91401000000       cmp dword ptr [ecx + 0x114], 0
// 00723087  7e0b                 jle 0x723094
// 00723089  8b8910010000         mov ecx, dword ptr [ecx + 0x110]
// 0072308f  8d4409ef             lea eax, [ecx + ecx - 0x11]
// 00723093  c3                   ret 
// 00723094  8b8110010000         mov eax, dword ptr [ecx + 0x110]
// 0072309a  83c003               add eax, 3
// 0072309d  83f816               cmp eax, 0x16
// 007230a0  7d05                 jge 0x7230a7
// 007230a2  b816000000           mov eax, 0x16
// 007230a7  8d4400ef             lea eax, [eax + eax - 0x11]
// 007230ab  c3                   ret 
// library xtp-11.2.2/Source\CommandBars\XTPPaintManager.cpp (function ?GetSplitDropDownHeight@CXTPPaintManager@@QBEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPPaintManager.cpp
