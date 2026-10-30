// roc 2009-12 00895420  unit: CXTPRibbonBar  size: 37 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00895420
//
// 00895420  e8abf0f6ff           call 0x8044d0
// 00895425  85c0                 test eax, eax
// 00895427  7506                 jne 0x89542f
// 00895429  b801000000           mov eax, 1
// 0089542e  c3                   ret 
// 0089542f  8b4874               mov ecx, dword ptr [eax + 0x74]
// 00895432  83b9c400000000       cmp dword ptr [ecx + 0xc4], 0
// 00895439  7403                 je 0x89543e
// 0089543b  33c0                 xor eax, eax
// 0089543d  c3                   ret 
// 0089543e  8b80b0000000         mov eax, dword ptr [eax + 0xb0]
// 00895444  c3                   ret 
// library xtp-11.2.2/Source\Ribbon\XTPRibbonBar.cpp (function ?IsKeyboardCuesVisible@CXTPRibbonBar@@UBEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Ribbon/XTPRibbonBar.cpp
