// roc 2011-06 008288d0  unit: CXTPToolBar  size: 52 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008288d0
//
// 008288d0  56                   push esi
// 008288d1  8bf1                 mov esi, ecx
// 008288d3  83be0001000004       cmp dword ptr [esi + 0x100], 4
// 008288da  741f                 je 0x8288fb
// 008288dc  e88fffffff           call 0x828870
// 008288e1  85c0                 test eax, eax
// 008288e3  7516                 jne 0x8288fb
// 008288e5  8bce                 mov ecx, esi
// 008288e7  e8d421ffff           call 0x81aac0
// 008288ec  85c0                 test eax, eax
// 008288ee  750b                 jne 0x8288fb
// 008288f0  8bce                 mov ecx, esi
// 008288f2  e8371dfeff           call 0x80a62e
// 008288f7  5e                   pop esi
// 008288f8  c20c00               ret 0xc
// 008288fb  b803000000           mov eax, 3
// 00828900  5e                   pop esi
// 00828901  c20c00               ret 0xc
// library xtp-11.2.2/Source\CommandBars\XTPToolBar.cpp (function ?OnMouseActivate@CXTPToolBar@@IAEHPAVCWnd@@II@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPToolBar.cpp
