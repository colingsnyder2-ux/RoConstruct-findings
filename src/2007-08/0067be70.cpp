// roc 2007-08 0067be70  unit: CXTPControls  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0067be70
//
// 0067be70  8bc1                 mov eax, ecx
// 0067be72  8b483c               mov ecx, dword ptr [eax + 0x3c]
// 0067be75  85c9                 test ecx, ecx
// 0067be77  7506                 jne 0x67be7f
// 0067be79  b801000000           mov eax, 1
// 0067be7e  c3                   ret 
// 0067be7f  50                   push eax
// 0067be80  e80bffffff           call 0x67bd90
// 0067be85  f7d8                 neg eax
// 0067be87  1bc0                 sbb eax, eax
// 0067be89  83c001               add eax, 1
// 0067be8c  c3                   ret 
// library xtp-11.2.2-vc8/Source\CommandBars\XTPControls.cpp (function ?IsChanged@CXTPControls@@QBEHXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/CommandBars/XTPControls.cpp
