// roc 2012-06 00a16b30  unit: CXTPKeyboardManager  size: 31 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a16b30
//
// 00a16b30  83791400             cmp dword ptr [ecx + 0x14], 0
// 00a16b34  7513                 jne 0xa16b49
// 00a16b36  8b09                 mov ecx, dword ptr [ecx]
// 00a16b38  e873c2f7ff           call 0x992db0
// 00a16b3d  83b88800000000       cmp dword ptr [eax + 0x88], 0
// 00a16b44  7503                 jne 0xa16b49
// 00a16b46  33c0                 xor eax, eax
// 00a16b48  c3                   ret 
// 00a16b49  b801000000           mov eax, 1
// 00a16b4e  c3                   ret 
// library xtp-15.2.1/Source\CommandBars\XTPCommandBarAnimation.cpp (function ?IsAnimationEnabled@CXTPCommandBarAnimation@@IBEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/CommandBars/XTPCommandBarAnimation.cpp
