// roc 2012-06 009a0ef0  unit: CXTPToolBar  size: 52 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009a0ef0
//
// 009a0ef0  56                   push esi
// 009a0ef1  8bf1                 mov esi, ecx
// 009a0ef3  83be0001000004       cmp dword ptr [esi + 0x100], 4
// 009a0efa  741f                 je 0x9a0f1b
// 009a0efc  e88fffffff           call 0x9a0e90
// 009a0f01  85c0                 test eax, eax
// 009a0f03  7516                 jne 0x9a0f1b
// 009a0f05  8bce                 mov ecx, esi
// 009a0f07  e8141effff           call 0x992d20
// 009a0f0c  85c0                 test eax, eax
// 009a0f0e  750b                 jne 0x9a0f1b
// 009a0f10  8bce                 mov ecx, esi
// 009a0f12  e8c717feff           call 0x9826de
// 009a0f17  5e                   pop esi
// 009a0f18  c20c00               ret 0xc
// 009a0f1b  b803000000           mov eax, 3
// 009a0f20  5e                   pop esi
// 009a0f21  c20c00               ret 0xc
// library xtp-11.2.2/Source\CommandBars\XTPToolBar.cpp (function ?OnMouseActivate@CXTPToolBar@@IAEHPAVCWnd@@II@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPToolBar.cpp
