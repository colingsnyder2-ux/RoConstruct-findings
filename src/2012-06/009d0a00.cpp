// roc 2012-06 009d0a00  unit: CXTPControls  size: 27 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009d0a00
//
// 009d0a00  8bc1                 mov eax, ecx
// 009d0a02  8b483c               mov ecx, dword ptr [eax + 0x3c]
// 009d0a05  85c9                 test ecx, ecx
// 009d0a07  7506                 jne 0x9d0a0f
// 009d0a09  b801000000           mov eax, 1
// 009d0a0e  c3                   ret 
// 009d0a0f  50                   push eax
// 009d0a10  e80bffffff           call 0x9d0920
// 009d0a15  f7d8                 neg eax
// 009d0a17  1bc0                 sbb eax, eax
// 009d0a19  40                   inc eax
// 009d0a1a  c3                   ret 
// library xtp-15.2.1/Source\CommandBars\XTPControls.cpp (function ?IsChanged@CXTPControls@@QBEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/CommandBars/XTPControls.cpp
