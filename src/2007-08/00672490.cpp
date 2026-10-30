// from server: 100% by auto
// roc 2007-08 00672490  unit: CXTPControlColorSelector  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00672490
//
// 00672490  8b01                 mov eax, dword ptr [ecx]
// 00672492  8b506c               mov edx, dword ptr [eax + 0x6c]
// 00672495  ffe2                 jmp edx
// library xtp-11.2.2-vc8/Source\CommandBars\XTPControlEdit.cpp (function ?HasFocus@CXTPControlEdit@@QBEHXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/CommandBars/XTPControlEdit.cpp
