// roc 2009-06 00768f40  unit: CXTPPopupBar  size: 125 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00768f40
//
// 00768f40  83ec08               sub esp, 8
// 00768f43  56                   push esi
// 00768f44  8bf1                 mov esi, ecx
// 00768f46  83bed401000000       cmp dword ptr [esi + 0x1d4], 0
// 00768f4d  7460                 je 0x768faf
// 00768f4f  8d442404             lea eax, [esp + 4]
// 00768f53  50                   push eax
// 00768f54  ff152cee8900         call dword ptr [0x89ee2c]
// 00768f5a  8b5620               mov edx, dword ptr [esi + 0x20]
// 00768f5d  8d4c2404             lea ecx, [esp + 4]
// 00768f61  51                   push ecx
// 00768f62  52                   push edx
// 00768f63  ff1530ee8900         call dword ptr [0x89ee30]
// 00768f69  8d442404             lea eax, [esp + 4]
// 00768f6d  50                   push eax
// 00768f6e  8bce                 mov ecx, esi
// 00768f70  e84bffffff           call 0x768ec0
// 00768f75  85c0                 test eax, eax
// 00768f77  7436                 je 0x768faf
// 00768f79  e878fdfaff           call 0x718cf6
// 00768f7e  8b86d4010000         mov eax, dword ptr [esi + 0x1d4]
// 00768f84  83e802               sub eax, 2
// 00768f87  f7d8                 neg eax
// 00768f89  1bc0                 sbb eax, eax
// 00768f8b  83e0fd               and eax, 0xfffffffd
// 00768f8e  05857f0000           add eax, 0x7f85
// 00768f93  50                   push eax
// 00768f94  6a00                 push 0
// 00768f96  ff15b0ed8900         call dword ptr [0x89edb0]
// 00768f9c  50                   push eax
// 00768f9d  ff1590ed8900         call dword ptr [0x89ed90]
// 00768fa3  b801000000           mov eax, 1
// 00768fa8  5e                   pop esi
// 00768fa9  83c408               add esp, 8
// 00768fac  c20c00               ret 0xc
// 00768faf  8bce                 mov ecx, esi
// 00768fb1  e85200fbff           call 0x719008
// 00768fb6  5e                   pop esi
// 00768fb7  83c408               add esp, 8
// 00768fba  c20c00               ret 0xc
// library xtp-11.2.2/Source\CommandBars\XTPPopupBar.cpp (function ?OnSetCursor@CXTPPopupBar@@IAEHPAVCWnd@@II@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPPopupBar.cpp
