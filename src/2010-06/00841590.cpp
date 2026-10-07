// roc 2010-06 00841590  unit: CXTPKeyboardManager  size: 31 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00841590
//
// 00841590  83791400             cmp dword ptr [ecx + 0x14], 0
// 00841594  7513                 jne 0x8415a9
// 00841596  8b09                 mov ecx, dword ptr [ecx]
// 00841598  e8f370f7ff           call 0x7b8690
// 0084159d  83b88800000000       cmp dword ptr [eax + 0x88], 0
// 008415a4  7503                 jne 0x8415a9
// 008415a6  33c0                 xor eax, eax
// 008415a8  c3                   ret 
// 008415a9  b801000000           mov eax, 1
// 008415ae  c3                   ret 
// library xtp-15.2.1/Source\CommandBars\XTPCommandBarAnimation.cpp (function ?IsAnimationEnabled@CXTPCommandBarAnimation@@IBEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/CommandBars/XTPCommandBarAnimation.cpp
