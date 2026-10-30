// roc 2009-12 00812dd0  unit: CXTPToolBar  size: 155 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00812dd0
//
// 00812dd0  56                   push esi
// 00812dd1  8bf1                 mov esi, ecx
// 00812dd3  83be0001000004       cmp dword ptr [esi + 0x100], 4
// 00812dda  7515                 jne 0x812df1
// 00812ddc  a180d79800           mov eax, dword ptr [0x98d780]
// 00812de1  6a13                 push 0x13
// 00812de3  6a00                 push 0
// 00812de5  6a00                 push 0
// 00812de7  6a00                 push 0
// 00812de9  6a00                 push 0
// 00812deb  50                   push eax
// 00812dec  e83b0efeff           call 0x7f3c2c
// 00812df1  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00812df5  8b54240c             mov edx, dword ptr [esp + 0xc]
// 00812df9  51                   push ecx
// 00812dfa  8b8efc000000         mov ecx, dword ptr [esi + 0xfc]
// 00812e00  52                   push edx
// 00812e01  e81a280300           call 0x845620
// 00812e06  85c0                 test eax, eax
// 00812e08  7547                 jne 0x812e51
// 00812e0a  8b8e04010000         mov ecx, dword ptr [esi + 0x104]
// 00812e10  e8cb300000           call 0x815ee0
// 00812e15  83be8401000000       cmp dword ptr [esi + 0x184], 0
// 00812e1c  7449                 je 0x812e67
// 00812e1e  f686ec0000001f       test byte ptr [esi + 0xec], 0x1f
// 00812e25  7440                 je 0x812e67
// 00812e27  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 00812e2a  8d44240c             lea eax, [esp + 0xc]
// 00812e2e  50                   push eax
// 00812e2f  51                   push ecx
// 00812e30  ff1554cc9800         call dword ptr [0x98cc54]
// 00812e36  8b442410             mov eax, dword ptr [esp + 0x10]
// 00812e3a  8b8e84010000         mov ecx, dword ptr [esi + 0x184]
// 00812e40  8b11                 mov edx, dword ptr [ecx]
// 00812e42  8b5204               mov edx, dword ptr [edx + 4]
// 00812e45  50                   push eax
// 00812e46  8b442410             mov eax, dword ptr [esp + 0x10]
// 00812e4a  50                   push eax
// 00812e4b  ffd2                 call edx
// 00812e4d  5e                   pop esi
// 00812e4e  c20c00               ret 0xc
// 00812e51  8b442410             mov eax, dword ptr [esp + 0x10]
// 00812e55  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00812e59  8b542408             mov edx, dword ptr [esp + 8]
// 00812e5d  50                   push eax
// 00812e5e  51                   push ecx
// 00812e5f  52                   push edx
// 00812e60  8bce                 mov ecx, esi
// 00812e62  e85947ffff           call 0x8075c0
// 00812e67  5e                   pop esi
// 00812e68  c20c00               ret 0xc
// copied from an identical function in another client (function ?OnLButtonDown@CXTPToolBar@@IAEXIVCPoint@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/CommandBars/XTPToolBar.cpp