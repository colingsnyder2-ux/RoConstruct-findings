// roc 2012-06 009a2bd0  unit: PAVCXTPCommandBarKeyboardTip::?$CArray  size: 45 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009a2bd0
//
// 009a2bd0  8b89a0000000         mov ecx, dword ptr [ecx + 0xa0]
// 009a2bd6  85c9                 test ecx, ecx
// 009a2bd8  7406                 je 0x9a2be0
// 009a2bda  83792000             cmp dword ptr [ecx + 0x20], 0
// 009a2bde  7503                 jne 0x9a2be3
// 009a2be0  33c0                 xor eax, eax
// 009a2be2  c3                   ret 
// 009a2be3  6804e80000           push 0xe804
// 009a2be8  e80304feff           call 0x982ff0
// 009a2bed  50                   push eax
// 009a2bee  e88d950700           call 0xa1c180
// 009a2bf3  50                   push eax
// 009a2bf4  e8edf8fdff           call 0x9824e6
// 009a2bf9  83c408               add esp, 8
// 009a2bfc  c3                   ret 
// library xtp-15.2.1-shared-mfc/Source\CommandBars\XTPCommandBars.cpp (function ?GetFrameReBar@CXTPCommandBars@@QBEPAVCXTPReBar@@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1-shared-mfc Source/CommandBars/XTPCommandBars.cpp
