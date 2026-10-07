// roc 2012-06 009f5a60  unit: CXTPPropertyGridItemEnum  size: 64 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009f5a60
//
// 009f5a60  56                   push esi
// 009f5a61  8bf1                 mov esi, ecx
// 009f5a63  e8a8feffff           call 0x9f5910
// 009f5a68  85c0                 test eax, eax
// 009f5a6a  7502                 jne 0x9f5a6e
// 009f5a6c  5e                   pop esi
// 009f5a6d  c3                   ret 
// 009f5a6e  8bce                 mov ecx, esi
// 009f5a70  e88bf9ffff           call 0x9f5400
// 009f5a75  81b8d0000000f1ff1f02 cmp dword ptr [eax + 0xd0], 0x21ffff1
// 009f5a7f  7507                 jne 0x9f5a88
// 009f5a81  b801000000           mov eax, 1
// 009f5a86  5e                   pop esi
// 009f5a87  c3                   ret 
// 009f5a88  8bce                 mov ecx, esi
// 009f5a8a  e871f9ffff           call 0x9f5400
// 009f5a8f  66b90500             mov cx, 5
// 009f5a93  663b88d6000000       cmp cx, word ptr [eax + 0xd6]
// 009f5a9a  5e                   pop esi
// 009f5a9b  1bc0                 sbb eax, eax
// 009f5a9d  f7d8                 neg eax
// 009f5a9f  c3                   ret 
// library xtp-15.2.1/Source\Common\XTPWinThemeWrapper.cpp (function ?IsAppThemeReady@CXTPWinThemeWrapper@@QBEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Common/XTPWinThemeWrapper.cpp
