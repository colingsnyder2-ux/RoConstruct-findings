// roc 2010-06 007ada10  unit: CXTPPaintManager  size: 44 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 007ada10
//
// 007ada10  83b91401000000       cmp dword ptr [ecx + 0x114], 0
// 007ada17  7e0b                 jle 0x7ada24
// 007ada19  8b8910010000         mov ecx, dword ptr [ecx + 0x110]
// 007ada1f  8d4409ef             lea eax, [ecx + ecx - 0x11]
// 007ada23  c3                   ret 
// 007ada24  8b8110010000         mov eax, dword ptr [ecx + 0x110]
// 007ada2a  83c003               add eax, 3
// 007ada2d  83f816               cmp eax, 0x16
// 007ada30  7d05                 jge 0x7ada37
// 007ada32  b816000000           mov eax, 0x16
// 007ada37  8d4400ef             lea eax, [eax + eax - 0x11]
// 007ada3b  c3                   ret 
// library xtp-11.2.2/Source\CommandBars\XTPPaintManager.cpp (function ?GetSplitDropDownHeight@CXTPPaintManager@@QBEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPPaintManager.cpp
