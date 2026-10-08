// roc 2009-06 00762ba0  unit: CXTPCustomizeSheet::CCustomizeEdit  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00762ba0
//
// 00762ba0  8b8180010000         mov eax, dword ptr [ecx + 0x180]
// 00762ba6  83c00a               add eax, 0xa
// 00762ba9  c3                   ret 
// library xtp-11.2.2/Source\CommandBars\XTPControlEdit.cpp (function ?GetCustomizeMinWidth@CXTPControlEdit@@MBEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPControlEdit.cpp
