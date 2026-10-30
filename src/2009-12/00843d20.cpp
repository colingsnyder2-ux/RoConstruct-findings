// roc 2009-12 00843d20  unit: CXTPPopupBar  size: 125 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00843d20
//
// 00843d20  83ec08               sub esp, 8
// 00843d23  56                   push esi
// 00843d24  8bf1                 mov esi, ecx
// 00843d26  83bed401000000       cmp dword ptr [esi + 0x1d4], 0
// 00843d2d  7460                 je 0x843d8f
// 00843d2f  8d442404             lea eax, [esp + 4]
// 00843d33  50                   push eax
// 00843d34  ff1538cc9800         call dword ptr [0x98cc38]
// 00843d3a  8b5620               mov edx, dword ptr [esi + 0x20]
// 00843d3d  8d4c2404             lea ecx, [esp + 4]
// 00843d41  51                   push ecx
// 00843d42  52                   push edx
// 00843d43  ff1534cc9800         call dword ptr [0x98cc34]
// 00843d49  8d442404             lea eax, [esp + 4]
// 00843d4d  50                   push eax
// 00843d4e  8bce                 mov ecx, esi
// 00843d50  e84bffffff           call 0x843ca0
// 00843d55  85c0                 test eax, eax
// 00843d57  7436                 je 0x843d8f
// 00843d59  e8c0fdfaff           call 0x7f3b1e
// 00843d5e  8b86d4010000         mov eax, dword ptr [esi + 0x1d4]
// 00843d64  83e802               sub eax, 2
// 00843d67  f7d8                 neg eax
// 00843d69  1bc0                 sbb eax, eax
// 00843d6b  83e0fd               and eax, 0xfffffffd
// 00843d6e  05857f0000           add eax, 0x7f85
// 00843d73  50                   push eax
// 00843d74  6a00                 push 0
// 00843d76  ff1548ca9800         call dword ptr [0x98ca48]
// 00843d7c  50                   push eax
// 00843d7d  ff1520ca9800         call dword ptr [0x98ca20]
// 00843d83  b801000000           mov eax, 1
// 00843d88  5e                   pop esi
// 00843d89  83c408               add esp, 8
// 00843d8c  c20c00               ret 0xc
// 00843d8f  8bce                 mov ecx, esi
// 00843d91  e89a00fbff           call 0x7f3e30
// 00843d96  5e                   pop esi
// 00843d97  83c408               add esp, 8
// 00843d9a  c20c00               ret 0xc
// library xtp-11.2.2/Source\CommandBars\XTPPopupBar.cpp (function ?OnSetCursor@CXTPPopupBar@@IAEHPAVCWnd@@II@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPPopupBar.cpp
