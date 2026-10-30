// roc 2010-06 007f1a70  unit: CXTPCustomizeSheet::CCustomizeEdit  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 007f1a70
//
// 007f1a70  8b8180010000         mov eax, dword ptr [ecx + 0x180]
// 007f1a76  83c00a               add eax, 0xa
// 007f1a79  c3                   ret 
// library xtp-11.2.2/Source\CommandBars\XTPControlEdit.cpp (function ?GetCustomizeMinWidth@CXTPControlEdit@@MBEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPControlEdit.cpp
