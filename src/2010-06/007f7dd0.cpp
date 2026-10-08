// roc 2010-06 007f7dd0  unit: CXTPPopupBar  size: 125 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 007f7dd0
//
// 007f7dd0  83ec08               sub esp, 8
// 007f7dd3  56                   push esi
// 007f7dd4  8bf1                 mov esi, ecx
// 007f7dd6  83bed401000000       cmp dword ptr [esi + 0x1d4], 0
// 007f7ddd  7460                 je 0x7f7e3f
// 007f7ddf  8d442404             lea eax, [esp + 4]
// 007f7de3  50                   push eax
// 007f7de4  ff1574bc9e00         call dword ptr [0x9ebc74]
// 007f7dea  8b5620               mov edx, dword ptr [esi + 0x20]
// 007f7ded  8d4c2404             lea ecx, [esp + 4]
// 007f7df1  51                   push ecx
// 007f7df2  52                   push edx
// 007f7df3  ff1578bc9e00         call dword ptr [0x9ebc78]
// 007f7df9  8d442404             lea eax, [esp + 4]
// 007f7dfd  50                   push eax
// 007f7dfe  8bce                 mov ecx, esi
// 007f7e00  e84bffffff           call 0x7f7d50
// 007f7e05  85c0                 test eax, eax
// 007f7e07  7436                 je 0x7f7e3f
// 007f7e09  e850fefaff           call 0x7a7c5e
// 007f7e0e  8b86d4010000         mov eax, dword ptr [esi + 0x1d4]
// 007f7e14  83e802               sub eax, 2
// 007f7e17  f7d8                 neg eax
// 007f7e19  1bc0                 sbb eax, eax
// 007f7e1b  83e0fd               and eax, 0xfffffffd
// 007f7e1e  05857f0000           add eax, 0x7f85
// 007f7e23  50                   push eax
// 007f7e24  6a00                 push 0
// 007f7e26  ff15ccbb9e00         call dword ptr [0x9ebbcc]
// 007f7e2c  50                   push eax
// 007f7e2d  ff15b4bb9e00         call dword ptr [0x9ebbb4]
// 007f7e33  b801000000           mov eax, 1
// 007f7e38  5e                   pop esi
// 007f7e39  83c408               add esp, 8
// 007f7e3c  c20c00               ret 0xc
// 007f7e3f  8bce                 mov ecx, esi
// 007f7e41  e82a01fbff           call 0x7a7f70
// 007f7e46  5e                   pop esi
// 007f7e47  83c408               add esp, 8
// 007f7e4a  c20c00               ret 0xc
// library xtp-11.2.2/Source\CommandBars\XTPPopupBar.cpp (function ?OnSetCursor@CXTPPopupBar@@IAEHPAVCWnd@@II@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPPopupBar.cpp
