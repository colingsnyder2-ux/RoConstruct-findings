// roc 2012-06 009ca8e0  unit: CXTPControlColorSelector  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009ca8e0
//
// 009ca8e0  8b01                 mov eax, dword ptr [ecx]
// 009ca8e2  8b506c               mov edx, dword ptr [eax + 0x6c]
// 009ca8e5  ffe2                 jmp edx
// library xtp-15.2.1/Source\CommandBars\XTPControlExt.cpp (function ?IsFocused@CXTPControlCheckBox@@MBEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/CommandBars/XTPControlExt.cpp
