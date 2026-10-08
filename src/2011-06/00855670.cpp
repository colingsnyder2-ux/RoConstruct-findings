// roc 2011-06 00855670  unit: CXTPPopupBar  size: 125 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00855670
//
// 00855670  83ec08               sub esp, 8
// 00855673  56                   push esi
// 00855674  8bf1                 mov esi, ecx
// 00855676  83bed401000000       cmp dword ptr [esi + 0x1d4], 0
// 0085567d  7460                 je 0x8556df
// 0085567f  8d442404             lea eax, [esp + 4]
// 00855683  50                   push eax
// 00855684  ff15c819a400         call dword ptr [0xa419c8]
// 0085568a  8b5620               mov edx, dword ptr [esi + 0x20]
// 0085568d  8d4c2404             lea ecx, [esp + 4]
// 00855691  51                   push ecx
// 00855692  52                   push edx
// 00855693  ff15f419a400         call dword ptr [0xa419f4]
// 00855699  8d442404             lea eax, [esp + 4]
// 0085569d  50                   push eax
// 0085569e  8bce                 mov ecx, esi
// 008556a0  e84bffffff           call 0x8555f0
// 008556a5  85c0                 test eax, eax
// 008556a7  7436                 je 0x8556df
// 008556a9  e86e4cfbff           call 0x80a31c
// 008556ae  8b86d4010000         mov eax, dword ptr [esi + 0x1d4]
// 008556b4  83e802               sub eax, 2
// 008556b7  f7d8                 neg eax
// 008556b9  1bc0                 sbb eax, eax
// 008556bb  83e0fd               and eax, 0xfffffffd
// 008556be  05857f0000           add eax, 0x7f85
// 008556c3  50                   push eax
// 008556c4  6a00                 push 0
// 008556c6  ff15081aa400         call dword ptr [0xa41a08]
// 008556cc  50                   push eax
// 008556cd  ff15f41ba400         call dword ptr [0xa41bf4]
// 008556d3  b801000000           mov eax, 1
// 008556d8  5e                   pop esi
// 008556d9  83c408               add esp, 8
// 008556dc  c20c00               ret 0xc
// 008556df  8bce                 mov ecx, esi
// 008556e1  e8484ffbff           call 0x80a62e
// 008556e6  5e                   pop esi
// 008556e7  83c408               add esp, 8
// 008556ea  c20c00               ret 0xc
// library xtp-11.2.2/Source\CommandBars\XTPPopupBar.cpp (function ?OnSetCursor@CXTPPopupBar@@IAEHPAVCWnd@@II@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPPopupBar.cpp
