// roc 2012-06 00a1eba0  unit: CXTPRibbonBar  size: 37 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a1eba0
//
// 00a1eba0  e84b41f7ff           call 0x992cf0
// 00a1eba5  85c0                 test eax, eax
// 00a1eba7  7506                 jne 0xa1ebaf
// 00a1eba9  b801000000           mov eax, 1
// 00a1ebae  c3                   ret 
// 00a1ebaf  8b4874               mov ecx, dword ptr [eax + 0x74]
// 00a1ebb2  83b9c400000000       cmp dword ptr [ecx + 0xc4], 0
// 00a1ebb9  7403                 je 0xa1ebbe
// 00a1ebbb  33c0                 xor eax, eax
// 00a1ebbd  c3                   ret 
// 00a1ebbe  8b80b0000000         mov eax, dword ptr [eax + 0xb0]
// 00a1ebc4  c3                   ret 
// library xtp-11.2.2/Source\Ribbon\XTPRibbonBar.cpp (function ?IsKeyboardCuesVisible@CXTPRibbonBar@@UBEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Ribbon/XTPRibbonBar.cpp
