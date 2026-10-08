// roc 2010-06 008495b0  unit: CXTPRibbonBar  size: 37 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 008495b0
//
// 008495b0  e81bf0f6ff           call 0x7b85d0
// 008495b5  85c0                 test eax, eax
// 008495b7  7506                 jne 0x8495bf
// 008495b9  b801000000           mov eax, 1
// 008495be  c3                   ret 
// 008495bf  8b4874               mov ecx, dword ptr [eax + 0x74]
// 008495c2  83b9c400000000       cmp dword ptr [ecx + 0xc4], 0
// 008495c9  7403                 je 0x8495ce
// 008495cb  33c0                 xor eax, eax
// 008495cd  c3                   ret 
// 008495ce  8b80b0000000         mov eax, dword ptr [eax + 0xb0]
// 008495d4  c3                   ret 
// library xtp-11.2.2/Source\Ribbon\XTPRibbonBar.cpp (function ?IsKeyboardCuesVisible@CXTPRibbonBar@@UBEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Ribbon/XTPRibbonBar.cpp
