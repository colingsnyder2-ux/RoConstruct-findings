// roc 2008-06 007456d0  unit: CXTPToolBar::CControlButtonHide  size: 73 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007456d0
//
// 007456d0  56                   push esi
// 007456d1  8bf1                 mov esi, ecx
// 007456d3  8b869c000000         mov eax, dword ptr [esi + 0x9c]
// 007456d9  83f8ff               cmp eax, -1
// 007456dc  750f                 jne 0x7456ed
// 007456de  8b8e5c010000         mov ecx, dword ptr [esi + 0x15c]
// 007456e4  85c9                 test ecx, ecx
// 007456e6  7405                 je 0x7456ed
// 007456e8  e8d360f6ff           call 0x6ab7c0
// 007456ed  85c0                 test eax, eax
// 007456ef  7424                 je 0x745715
// 007456f1  8b8600010000         mov eax, dword ptr [esi + 0x100]
// 007456f7  83b8f800000002       cmp dword ptr [eax + 0xf8], 2
// 007456fe  7409                 je 0x745709
// 00745700  83b80001000005       cmp dword ptr [eax + 0x100], 5
// 00745707  750c                 jne 0x745715
// 00745709  8b06                 mov eax, dword ptr [esi]
// 0074570b  8b9098000000         mov edx, dword ptr [eax + 0x98]
// 00745711  8bce                 mov ecx, esi
// 00745713  ffd2                 call edx
// 00745715  5e                   pop esi
// 00745716  c20800               ret 8
// library xtp-11.2.2-shared-mfc/Source\CommandBars\XTPControlButton.cpp (function ?OnLButtonUp@CXTPControlButton@@MAEXVCPoint@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/CommandBars/XTPControlButton.cpp
