// roc 2008-06 006c3740  unit: CXTPToolBar  size: 155 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006c3740
//
// 006c3740  56                   push esi
// 006c3741  8bf1                 mov esi, ecx
// 006c3743  83be0001000004       cmp dword ptr [esi + 0x100], 4
// 006c374a  7515                 jne 0x6c3761
// 006c374c  a1443e8000           mov eax, dword ptr [0x803e44]
// 006c3751  6a13                 push 0x13
// 006c3753  6a00                 push 0
// 006c3755  6a00                 push 0
// 006c3757  6a00                 push 0
// 006c3759  6a00                 push 0
// 006c375b  50                   push eax
// 006c375c  e8e5d2fdff           call 0x6a0a46
// 006c3761  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 006c3765  8b54240c             mov edx, dword ptr [esp + 0xc]
// 006c3769  51                   push ecx
// 006c376a  8b8efc000000         mov ecx, dword ptr [esi + 0xfc]
// 006c3770  52                   push edx
// 006c3771  e88ae70200           call 0x6f1f00
// 006c3776  85c0                 test eax, eax
// 006c3778  7547                 jne 0x6c37c1
// 006c377a  8b8e04010000         mov ecx, dword ptr [esi + 0x104]
// 006c3780  e8cb11feff           call 0x6a4950
// 006c3785  83be8401000000       cmp dword ptr [esi + 0x184], 0
// 006c378c  7449                 je 0x6c37d7
// 006c378e  f686ec0000001f       test byte ptr [esi + 0xec], 0x1f
// 006c3795  7440                 je 0x6c37d7
// 006c3797  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 006c379a  8d44240c             lea eax, [esp + 0xc]
// 006c379e  50                   push eax
// 006c379f  51                   push ecx
// 006c37a0  ff15802d8000         call dword ptr [0x802d80]
// 006c37a6  8b442410             mov eax, dword ptr [esp + 0x10]
// 006c37aa  8b8e84010000         mov ecx, dword ptr [esi + 0x184]
// 006c37b0  8b11                 mov edx, dword ptr [ecx]
// 006c37b2  8b5204               mov edx, dword ptr [edx + 4]
// 006c37b5  50                   push eax
// 006c37b6  8b442410             mov eax, dword ptr [esp + 0x10]
// 006c37ba  50                   push eax
// 006c37bb  ffd2                 call edx
// 006c37bd  5e                   pop esi
// 006c37be  c20c00               ret 0xc
// 006c37c1  8b442410             mov eax, dword ptr [esp + 0x10]
// 006c37c5  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 006c37c9  8b542408             mov edx, dword ptr [esp + 8]
// 006c37cd  50                   push eax
// 006c37ce  51                   push ecx
// 006c37cf  52                   push edx
// 006c37d0  8bce                 mov ecx, esi
// 006c37d2  e81947ffff           call 0x6b7ef0
// 006c37d7  5e                   pop esi
// 006c37d8  c20c00               ret 0xc
// library xtp-11.2.2-shared-mfc/Source\CommandBars\XTPToolBar.cpp (function ?OnLButtonDown@CXTPToolBar@@IAEXIVCPoint@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/CommandBars/XTPToolBar.cpp
