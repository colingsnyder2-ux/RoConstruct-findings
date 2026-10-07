// roc 2012-06 00a6a5a0  unit: CXTCaptionButton  size: 21 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a6a5a0
//
// 00a6a5a0  8b899c000000         mov ecx, dword ptr [ecx + 0x9c]
// 00a6a5a6  85c9                 test ecx, ecx
// 00a6a5a8  7408                 je 0xa6a5b2
// 00a6a5aa  e821eef2ff           call 0x9993d0
// 00a6a5af  8b00                 mov eax, dword ptr [eax]
// 00a6a5b1  c3                   ret 
// 00a6a5b2  33c0                 xor eax, eax
// 00a6a5b4  c3                   ret 
// library xtp-15.2.1/Source\Controls\Deprecated\XTButton.cpp (function ?GetNormalIcon@CXTButton@@QAEPAUHICON__@@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Controls/Deprecated/XTButton.cpp
