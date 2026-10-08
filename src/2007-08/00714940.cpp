// from server: 100% by auto
// roc 2007-08 00714940  unit: CXTCaptionButton  size: 21 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00714940
//
// 00714940  8b899c000000         mov ecx, dword ptr [ecx + 0x9c]
// 00714946  85c9                 test ecx, ecx
// 00714948  7408                 je 0x714952
// 0071494a  e8f13df3ff           call 0x648740
// 0071494f  8b00                 mov eax, dword ptr [eax]
// 00714951  c3                   ret 
// 00714952  33c0                 xor eax, eax
// 00714954  c3                   ret 
// library xtp-11.2.2-vc8/Source\Controls\XTButton.cpp (function ?GetNormalIcon@CXTButton@@QAEPAUHICON__@@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/Controls/XTButton.cpp
