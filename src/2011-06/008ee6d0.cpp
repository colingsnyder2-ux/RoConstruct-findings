// roc 2011-06 008ee6d0  unit: CXTPOffice2007Image  size: 32 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008ee6d0
//
// 008ee6d0  56                   push esi
// 008ee6d1  8bf1                 mov esi, ecx
// 008ee6d3  e840df0d00           call 0x9cc618
// 008ee6d8  85c0                 test eax, eax
// 008ee6da  7909                 jns 0x8ee6e5
// 008ee6dc  b803000000           mov eax, 3
// 008ee6e1  5e                   pop esi
// 008ee6e2  c20c00               ret 0xc
// 008ee6e5  8bce                 mov ecx, esi
// 008ee6e7  e842bff1ff           call 0x80a62e
// 008ee6ec  5e                   pop esi
// 008ee6ed  c20c00               ret 0xc
// library xtp-15.2.1/Source\Controls\Popup\XTPColorSelectorCtrl.cpp (function ?OnMouseActivate@CXTPColorSelectorCtrl@@IAEHPAVCWnd@@II@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Controls/Popup/XTPColorSelectorCtrl.cpp
