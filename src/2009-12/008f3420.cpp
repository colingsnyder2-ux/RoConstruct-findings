// roc 2009-12 008f3420  unit: CXTColorSelectorCtrlThemeOffice2003  size: 112 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008f3420
//
// 008f3420  56                   push esi
// 008f3421  8bf1                 mov esi, ecx
// 008f3423  e868ffffff           call 0x8f3390
// 008f3428  e8a3c5f3ff           call 0x82f9d0
// 008f342d  6a20                 push 0x20
// 008f342f  8bc8                 mov ecx, eax
// 008f3431  e8fabef3ff           call 0x82f330
// 008f3436  894614               mov dword ptr [esi + 0x14], eax
// 008f3439  e892c5f3ff           call 0x82f9d0
// 008f343e  6a20                 push 0x20
// 008f3440  8bc8                 mov ecx, eax
// 008f3442  e8e9bef3ff           call 0x82f330
// 008f3447  894618               mov dword ptr [esi + 0x18], eax
// 008f344a  e881c5f3ff           call 0x82f9d0
// 008f344f  6a29                 push 0x29
// 008f3451  8bc8                 mov ecx, eax
// 008f3453  e8d8bef3ff           call 0x82f330
// 008f3458  89461c               mov dword ptr [esi + 0x1c], eax
// 008f345b  e870c5f3ff           call 0x82f9d0
// 008f3460  6a21                 push 0x21
// 008f3462  8bc8                 mov ecx, eax
// 008f3464  e8c7bef3ff           call 0x82f330
// 008f3469  894620               mov dword ptr [esi + 0x20], eax
// 008f346c  e85fc5f3ff           call 0x82f9d0
// 008f3471  6a1f                 push 0x1f
// 008f3473  8bc8                 mov ecx, eax
// 008f3475  e8b6bef3ff           call 0x82f330
// 008f347a  894624               mov dword ptr [esi + 0x24], eax
// 008f347d  e84ec5f3ff           call 0x82f9d0
// 008f3482  6a24                 push 0x24
// 008f3484  8bc8                 mov ecx, eax
// 008f3486  e8a5bef3ff           call 0x82f330
// 008f348b  894628               mov dword ptr [esi + 0x28], eax
// 008f348e  5e                   pop esi
// 008f348f  c3                   ret 
// library xtp-11.2.2/Source\Controls\XTColorSelectorCtrlTheme.cpp (function ?RefreshMetrics@CXTColorSelectorCtrlThemeOfficeXP@@UAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Controls/XTColorSelectorCtrlTheme.cpp
