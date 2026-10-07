// roc 2011-06 00858530  unit: CXTPControls  size: 27 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00858530
//
// 00858530  8bc1                 mov eax, ecx
// 00858532  8b483c               mov ecx, dword ptr [eax + 0x3c]
// 00858535  85c9                 test ecx, ecx
// 00858537  7506                 jne 0x85853f
// 00858539  b801000000           mov eax, 1
// 0085853e  c3                   ret 
// 0085853f  50                   push eax
// 00858540  e80bffffff           call 0x858450
// 00858545  f7d8                 neg eax
// 00858547  1bc0                 sbb eax, eax
// 00858549  40                   inc eax
// 0085854a  c3                   ret 
// library xtp-15.2.1/Source\CommandBars\XTPControls.cpp (function ?IsChanged@CXTPControls@@QBEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/CommandBars/XTPControls.cpp
