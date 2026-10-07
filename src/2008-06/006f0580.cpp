// roc 2008-06 006f0580  unit: CXTPPopupBar  size: 125 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006f0580
//
// 006f0580  83ec08               sub esp, 8
// 006f0583  56                   push esi
// 006f0584  8bf1                 mov esi, ecx
// 006f0586  83bed401000000       cmp dword ptr [esi + 0x1d4], 0
// 006f058d  7460                 je 0x6f05ef
// 006f058f  8d442404             lea eax, [esp + 4]
// 006f0593  50                   push eax
// 006f0594  ff159c2d8000         call dword ptr [0x802d9c]
// 006f059a  8b5620               mov edx, dword ptr [esi + 0x20]
// 006f059d  8d4c2404             lea ecx, [esp + 4]
// 006f05a1  51                   push ecx
// 006f05a2  52                   push edx
// 006f05a3  ff15a02d8000         call dword ptr [0x802da0]
// 006f05a9  8d442404             lea eax, [esp + 4]
// 006f05ad  50                   push eax
// 006f05ae  8bce                 mov ecx, esi
// 006f05b0  e84bffffff           call 0x6f0500
// 006f05b5  85c0                 test eax, eax
// 006f05b7  7436                 je 0x6f05ef
// 006f05b9  e86803fbff           call 0x6a0926
// 006f05be  8b86d4010000         mov eax, dword ptr [esi + 0x1d4]
// 006f05c4  83e802               sub eax, 2
// 006f05c7  f7d8                 neg eax
// 006f05c9  1bc0                 sbb eax, eax
// 006f05cb  83e0fd               and eax, 0xfffffffd
// 006f05ce  05857f0000           add eax, 0x7f85
// 006f05d3  50                   push eax
// 006f05d4  6a00                 push 0
// 006f05d6  ff15d02d8000         call dword ptr [0x802dd0]
// 006f05dc  50                   push eax
// 006f05dd  ff15042d8000         call dword ptr [0x802d04]
// 006f05e3  b801000000           mov eax, 1
// 006f05e8  5e                   pop esi
// 006f05e9  83c408               add esp, 8
// 006f05ec  c20c00               ret 0xc
// 006f05ef  8bce                 mov ecx, esi
// 006f05f1  e87206fbff           call 0x6a0c68
// 006f05f6  5e                   pop esi
// 006f05f7  83c408               add esp, 8
// 006f05fa  c20c00               ret 0xc
// library xtp-11.2.2/Source\CommandBars\XTPPopupBar.cpp (function ?OnSetCursor@CXTPPopupBar@@IAEHPAVCWnd@@II@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPPopupBar.cpp
