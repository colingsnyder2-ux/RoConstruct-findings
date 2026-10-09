// roc 2007-03 00673f50  unit: seg_00670000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00673f50
//
// 00673f50  8bc1                 mov eax, ecx
// 00673f52  8b483c               mov ecx, dword ptr [eax + 0x3c]
// 00673f55  85c9                 test ecx, ecx
// 00673f57  7506                 jne 0x673f5f
// 00673f59  b801000000           mov eax, 1
// 00673f5e  c3                   ret 
// 00673f5f  50                   push eax
// 00673f60  e80bffffff           call 0x673e70
// 00673f65  f7d8                 neg eax
// 00673f67  1bc0                 sbb eax, eax
// 00673f69  83c001               add eax, 1
// 00673f6c  c3                   ret 
// library xtp-11.2.2-vc8/Source\CommandBars\XTPControls.cpp (function ?IsChanged@CXTPControls@@QBEHXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/CommandBars/XTPControls.cpp
