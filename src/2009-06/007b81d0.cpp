// roc 2009-06 007b81d0  unit: CXTPRibbonBar  size: 37 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 007b81d0
//
// 007b81d0  e8bb51f7ff           call 0x72d390
// 007b81d5  85c0                 test eax, eax
// 007b81d7  7506                 jne 0x7b81df
// 007b81d9  b801000000           mov eax, 1
// 007b81de  c3                   ret 
// 007b81df  8b4874               mov ecx, dword ptr [eax + 0x74]
// 007b81e2  83b9c400000000       cmp dword ptr [ecx + 0xc4], 0
// 007b81e9  7403                 je 0x7b81ee
// 007b81eb  33c0                 xor eax, eax
// 007b81ed  c3                   ret 
// 007b81ee  8b80b0000000         mov eax, dword ptr [eax + 0xb0]
// 007b81f4  c3                   ret 
// library xtp-11.2.2/Source\Ribbon\XTPRibbonBar.cpp (function ?IsKeyboardCuesVisible@CXTPRibbonBar@@UBEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Ribbon/XTPRibbonBar.cpp
