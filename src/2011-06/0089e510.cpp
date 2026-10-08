// from server: 100% by auto
// roc 2011-06 0089e510  unit: CXTPKeyboardManager  size: 31 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0089e510
//
// 0089e510  83791400             cmp dword ptr [ecx + 0x14], 0
// 0089e514  7513                 jne 0x89e529
// 0089e516  8b09                 mov ecx, dword ptr [ecx]
// 0089e518  e833c6f7ff           call 0x81ab50
// 0089e51d  83b88800000000       cmp dword ptr [eax + 0x88], 0
// 0089e524  7503                 jne 0x89e529
// 0089e526  33c0                 xor eax, eax
// 0089e528  c3                   ret 
// 0089e529  b801000000           mov eax, 1
// 0089e52e  c3                   ret 
// library xtp-15.2.1/Source\CommandBars\XTPCommandBarAnimation.cpp (function ?IsAnimationEnabled@CXTPCommandBarAnimation@@IBEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/CommandBars/XTPCommandBarAnimation.cpp
