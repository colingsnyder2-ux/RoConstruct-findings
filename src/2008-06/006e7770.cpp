// from server: 100% by auto
// roc 2008-06 006e7770  unit: CXTPToolBar::CControlButtonExpand  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006e7770
//
// 006e7770  56                   push esi
// 006e7771  8bf1                 mov esi, ecx
// 006e7773  83be7801000000       cmp dword ptr [esi + 0x178], 0
// 006e777a  7446                 je 0x6e77c2
// 006e777c  8b869c000000         mov eax, dword ptr [esi + 0x9c]
// 006e7782  83f8ff               cmp eax, -1
// 006e7785  750f                 jne 0x6e7796
// 006e7787  8b8e5c010000         mov ecx, dword ptr [esi + 0x15c]
// 006e778d  85c9                 test ecx, ecx
// 006e778f  7405                 je 0x6e7796
// 006e7791  e82a40fcff           call 0x6ab7c0
// 006e7796  85c0                 test eax, eax
// 006e7798  7428                 je 0x6e77c2
// 006e779a  8b8e00010000         mov ecx, dword ptr [esi + 0x100]
// 006e77a0  83b9e000000002       cmp dword ptr [ecx + 0xe0], 2
// 006e77a7  7409                 je 0x6e77b2
// 006e77a9  83b90001000005       cmp dword ptr [ecx + 0x100], 5
// 006e77b0  7510                 jne 0x6e77c2
// 006e77b2  8b8680000000         mov eax, dword ptr [esi + 0x80]
// 006e77b8  6a00                 push 0
// 006e77ba  50                   push eax
// 006e77bb  e810f7fcff           call 0x6b6ed0
// 006e77c0  5e                   pop esi
// 006e77c1  c3                   ret 
// 006e77c2  8bce                 mov ecx, esi
// 006e77c4  5e                   pop esi
// 006e77c5  e91638fcff           jmp 0x6aafe0
// library xtp-11.2.2/Source\CommandBars\XTPControlPopup.cpp (function ?OnMouseHover@CXTPControlPopup@@MAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPControlPopup.cpp
