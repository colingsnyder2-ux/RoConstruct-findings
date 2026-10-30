// roc 2011-06 008a66f0  unit: CXTPRibbonBar  size: 37 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008a66f0
//
// 008a66f0  e89b43f7ff           call 0x81aa90
// 008a66f5  85c0                 test eax, eax
// 008a66f7  7506                 jne 0x8a66ff
// 008a66f9  b801000000           mov eax, 1
// 008a66fe  c3                   ret 
// 008a66ff  8b4874               mov ecx, dword ptr [eax + 0x74]
// 008a6702  83b9c400000000       cmp dword ptr [ecx + 0xc4], 0
// 008a6709  7403                 je 0x8a670e
// 008a670b  33c0                 xor eax, eax
// 008a670d  c3                   ret 
// 008a670e  8b80b0000000         mov eax, dword ptr [eax + 0xb0]
// 008a6714  c3                   ret 
// library xtp-11.2.2/Source\Ribbon\XTPRibbonBar.cpp (function ?IsKeyboardCuesVisible@CXTPRibbonBar@@UBEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Ribbon/XTPRibbonBar.cpp
