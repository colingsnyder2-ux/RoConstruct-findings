// from server: 100% by auto
// roc 2008-06 0078e740  unit: CXTColorSelectorCtrl  size: 33 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0078e740
//
// 0078e740  8b8158010000         mov eax, dword ptr [ecx + 0x158]
// 0078e746  85c0                 test eax, eax
// 0078e748  7414                 je 0x78e75e
// 0078e74a  8b4020               mov eax, dword ptr [eax + 0x20]
// 0078e74d  50                   push eax
// 0078e74e  ff15502d8000         call dword ptr [0x802d50]
// 0078e754  85c0                 test eax, eax
// 0078e756  7406                 je 0x78e75e
// 0078e758  b801000000           mov eax, 1
// 0078e75d  c3                   ret 
// 0078e75e  33c0                 xor eax, eax
// 0078e760  c3                   ret 
// library xtp-11.2.2/Source\Controls\XTColorSelectorCtrl.cpp (function ?IsColorDlgVisible@CXTColorSelectorCtrl@@QAE_NXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Controls/XTColorSelectorCtrl.cpp
