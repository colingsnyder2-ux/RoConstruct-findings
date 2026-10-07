// roc 2008-06 006f3430  unit: CXTPControls  size: 27 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006f3430
//
// 006f3430  8bc1                 mov eax, ecx
// 006f3432  8b483c               mov ecx, dword ptr [eax + 0x3c]
// 006f3435  85c9                 test ecx, ecx
// 006f3437  7506                 jne 0x6f343f
// 006f3439  b801000000           mov eax, 1
// 006f343e  c3                   ret 
// 006f343f  50                   push eax
// 006f3440  e80bffffff           call 0x6f3350
// 006f3445  f7d8                 neg eax
// 006f3447  1bc0                 sbb eax, eax
// 006f3449  40                   inc eax
// 006f344a  c3                   ret 
// library xtp-11.2.2/Source\CommandBars\XTPControls.cpp (function ?IsChanged@CXTPControls@@QBEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPControls.cpp
