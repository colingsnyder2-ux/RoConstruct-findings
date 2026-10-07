// roc 2011-06 008f2230  unit: CXTCaptionButton  size: 21 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008f2230
//
// 008f2230  8b899c000000         mov ecx, dword ptr [ecx + 0x9c]
// 008f2236  85c9                 test ecx, ecx
// 008f2238  7408                 je 0x8f2242
// 008f223a  e841ebf2ff           call 0x820d80
// 008f223f  8b00                 mov eax, dword ptr [eax]
// 008f2241  c3                   ret 
// 008f2242  33c0                 xor eax, eax
// 008f2244  c3                   ret 
// library xtp-15.2.1/Source\Controls\Deprecated\XTButton.cpp (function ?GetNormalIcon@CXTButton@@QAEPAUHICON__@@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Controls/Deprecated/XTButton.cpp
