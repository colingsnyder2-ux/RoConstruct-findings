// roc 2008-06 006c36e0  unit: CXTPToolBar  size: 52 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006c36e0
//
// 006c36e0  56                   push esi
// 006c36e1  8bf1                 mov esi, ecx
// 006c36e3  83be0001000004       cmp dword ptr [esi + 0x100], 4
// 006c36ea  741f                 je 0x6c370b
// 006c36ec  e88fffffff           call 0x6c3680
// 006c36f1  85c0                 test eax, eax
// 006c36f3  7516                 jne 0x6c370b
// 006c36f5  8bce                 mov ecx, esi
// 006c36f7  e84417ffff           call 0x6b4e40
// 006c36fc  85c0                 test eax, eax
// 006c36fe  750b                 jne 0x6c370b
// 006c3700  8bce                 mov ecx, esi
// 006c3702  e861d5fdff           call 0x6a0c68
// 006c3707  5e                   pop esi
// 006c3708  c20c00               ret 0xc
// 006c370b  b803000000           mov eax, 3
// 006c3710  5e                   pop esi
// 006c3711  c20c00               ret 0xc
// library xtp-11.2.2/Source\CommandBars\XTPToolBar.cpp (function ?OnMouseActivate@CXTPToolBar@@IAEHPAVCWnd@@II@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPToolBar.cpp
