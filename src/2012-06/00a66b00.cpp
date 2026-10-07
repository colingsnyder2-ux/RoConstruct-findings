// roc 2012-06 00a66b00  unit: CXTColorSelectorCtrl  size: 33 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a66b00
//
// 00a66b00  8b8158010000         mov eax, dword ptr [ecx + 0x158]
// 00a66b06  85c0                 test eax, eax
// 00a66b08  7414                 je 0xa66b1e
// 00a66b0a  8b4020               mov eax, dword ptr [eax + 0x20]
// 00a66b0d  50                   push eax
// 00a66b0e  ff15143bb200         call dword ptr [0xb23b14]
// 00a66b14  85c0                 test eax, eax
// 00a66b16  7406                 je 0xa66b1e
// 00a66b18  b801000000           mov eax, 1
// 00a66b1d  c3                   ret 
// 00a66b1e  33c0                 xor eax, eax
// 00a66b20  c3                   ret 
// library xtp-13.2.1/Source\Controls\XTColorSelectorCtrl.cpp (function ?IsColorDlgVisible@CXTColorSelectorCtrl@@QAE_NXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-13.2.1 Source/Controls/XTColorSelectorCtrl.cpp
