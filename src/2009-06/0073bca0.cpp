// roc 2009-06 0073bca0  unit: CXTPToolBar  size: 52 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0073bca0
//
// 0073bca0  56                   push esi
// 0073bca1  8bf1                 mov esi, ecx
// 0073bca3  83be0001000004       cmp dword ptr [esi + 0x100], 4
// 0073bcaa  741f                 je 0x73bccb
// 0073bcac  e88fffffff           call 0x73bc40
// 0073bcb1  85c0                 test eax, eax
// 0073bcb3  7516                 jne 0x73bccb
// 0073bcb5  8bce                 mov ecx, esi
// 0073bcb7  e80417ffff           call 0x72d3c0
// 0073bcbc  85c0                 test eax, eax
// 0073bcbe  750b                 jne 0x73bccb
// 0073bcc0  8bce                 mov ecx, esi
// 0073bcc2  e841d3fdff           call 0x719008
// 0073bcc7  5e                   pop esi
// 0073bcc8  c20c00               ret 0xc
// 0073bccb  b803000000           mov eax, 3
// 0073bcd0  5e                   pop esi
// 0073bcd1  c20c00               ret 0xc
// library xtp-11.2.2/Source\CommandBars\XTPToolBar.cpp (function ?OnMouseActivate@CXTPToolBar@@IAEHPAVCWnd@@II@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPToolBar.cpp
