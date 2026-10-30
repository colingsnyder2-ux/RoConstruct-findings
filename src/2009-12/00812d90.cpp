// roc 2009-12 00812d90  unit: CXTPToolBar  size: 52 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00812d90
//
// 00812d90  56                   push esi
// 00812d91  8bf1                 mov esi, ecx
// 00812d93  83be0001000004       cmp dword ptr [esi + 0x100], 4
// 00812d9a  741f                 je 0x812dbb
// 00812d9c  e88fffffff           call 0x812d30
// 00812da1  85c0                 test eax, eax
// 00812da3  7516                 jne 0x812dbb
// 00812da5  8bce                 mov ecx, esi
// 00812da7  e85417ffff           call 0x804500
// 00812dac  85c0                 test eax, eax
// 00812dae  750b                 jne 0x812dbb
// 00812db0  8bce                 mov ecx, esi
// 00812db2  e87910feff           call 0x7f3e30
// 00812db7  5e                   pop esi
// 00812db8  c20c00               ret 0xc
// 00812dbb  b803000000           mov eax, 3
// 00812dc0  5e                   pop esi
// 00812dc1  c20c00               ret 0xc
// library xtp-11.2.2/Source\CommandBars\XTPToolBar.cpp (function ?OnMouseActivate@CXTPToolBar@@IAEHPAVCWnd@@II@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPToolBar.cpp
