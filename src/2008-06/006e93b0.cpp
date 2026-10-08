// from server: 100% by auto
// roc 2008-06 006e93b0  unit: CXTPControlColorSelector  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006e93b0
//
// 006e93b0  8b01                 mov eax, dword ptr [ecx]
// 006e93b2  8b506c               mov edx, dword ptr [eax + 0x6c]
// 006e93b5  ffe2                 jmp edx
// library xtp-11.2.2/Source\CommandBars\XTPControlEdit.cpp (function ?HasFocus@CXTPControlEdit@@QBEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPControlEdit.cpp
