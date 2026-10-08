// roc 2010-06 007c6e50  unit: CXTPToolBar  size: 52 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 007c6e50
//
// 007c6e50  56                   push esi
// 007c6e51  8bf1                 mov esi, ecx
// 007c6e53  83be0001000004       cmp dword ptr [esi + 0x100], 4
// 007c6e5a  741f                 je 0x7c6e7b
// 007c6e5c  e88fffffff           call 0x7c6df0
// 007c6e61  85c0                 test eax, eax
// 007c6e63  7516                 jne 0x7c6e7b
// 007c6e65  8bce                 mov ecx, esi
// 007c6e67  e89417ffff           call 0x7b8600
// 007c6e6c  85c0                 test eax, eax
// 007c6e6e  750b                 jne 0x7c6e7b
// 007c6e70  8bce                 mov ecx, esi
// 007c6e72  e8f910feff           call 0x7a7f70
// 007c6e77  5e                   pop esi
// 007c6e78  c20c00               ret 0xc
// 007c6e7b  b803000000           mov eax, 3
// 007c6e80  5e                   pop esi
// 007c6e81  c20c00               ret 0xc
// library xtp-11.2.2/Source\CommandBars\XTPToolBar.cpp (function ?OnMouseActivate@CXTPToolBar@@IAEHPAVCWnd@@II@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPToolBar.cpp
