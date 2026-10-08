// from server: 100% by auto
// roc 2008-06 0078e700  unit: CXTPOffice2007Image  size: 32 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0078e700
//
// 0078e700  56                   push esi
// 0078e701  8bf1                 mov esi, ecx
// 0078e703  e802d90200           call 0x7bc00a
// 0078e708  85c0                 test eax, eax
// 0078e70a  7909                 jns 0x78e715
// 0078e70c  b803000000           mov eax, 3
// 0078e711  5e                   pop esi
// 0078e712  c20c00               ret 0xc
// 0078e715  8bce                 mov ecx, esi
// 0078e717  e84c25f1ff           call 0x6a0c68
// 0078e71c  5e                   pop esi
// 0078e71d  c20c00               ret 0xc
// library xtp-11.2.2/Source\Controls\XTColorSelectorCtrl.cpp (function ?OnMouseActivate@CXTColorSelectorCtrl@@IAEHPAVCWnd@@II@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Controls/XTColorSelectorCtrl.cpp
