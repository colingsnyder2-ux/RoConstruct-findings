// from server: 100% by auto
// roc 2008-06 00722870  unit: CXTPRibbonBar  size: 37 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00722870
//
// 00722870  e89b25f9ff           call 0x6b4e10
// 00722875  85c0                 test eax, eax
// 00722877  7506                 jne 0x72287f
// 00722879  b801000000           mov eax, 1
// 0072287e  c3                   ret 
// 0072287f  8b4874               mov ecx, dword ptr [eax + 0x74]
// 00722882  83b9c400000000       cmp dword ptr [ecx + 0xc4], 0
// 00722889  7403                 je 0x72288e
// 0072288b  33c0                 xor eax, eax
// 0072288d  c3                   ret 
// 0072288e  8b80b0000000         mov eax, dword ptr [eax + 0xb0]
// 00722894  c3                   ret 
// library xtp-11.2.2/Source\Ribbon\XTPRibbonBar.cpp (function ?IsKeyboardCuesVisible@CXTPRibbonBar@@UBEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Ribbon/XTPRibbonBar.cpp
