// roc 2009-12 008b0430  unit: CXTPDockingPaneMiniWnd  size: 131 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008b0430
//
// 008b0430  56                   push esi
// 008b0431  8bf1                 mov esi, ecx
// 008b0433  837e2000             cmp dword ptr [esi + 0x20], 0
// 008b0437  7478                 je 0x8b04b1
// 008b0439  6a20                 push 0x20
// 008b043b  e8c0e2ffff           call 0x8ae700
// 008b0440  f7d8                 neg eax
// 008b0442  1bc0                 sbb eax, eax
// 008b0444  2500007cff           and eax, 0xff7c0000
// 008b0449  0500008400           add eax, 0x840000
// 008b044e  50                   push eax
// 008b044f  8bce                 mov ecx, esi
// 008b0451  e8aae2ffff           call 0x8ae700
// 008b0456  f7d8                 neg eax
// 008b0458  1bc0                 sbb eax, eax
// 008b045a  2500008400           and eax, 0x840000
// 008b045f  50                   push eax
// 008b0460  8bce                 mov ecx, esi
// 008b0462  e8733bf4ff           call 0x7f3fda
// 008b0467  8bce                 mov ecx, esi
// 008b0469  e892e2ffff           call 0x8ae700
// 008b046e  85c0                 test eax, eax
// 008b0470  750f                 jne 0x8b0481
// 008b0472  398648010000         cmp dword ptr [esi + 0x148], eax
// 008b0478  7407                 je 0x8b0481
// 008b047a  8bce                 mov ecx, esi
// 008b047c  e8cffeffff           call 0x8b0350
// 008b0481  6a37                 push 0x37
// 008b0483  6a00                 push 0
// 008b0485  6a00                 push 0
// 008b0487  6a00                 push 0
// 008b0489  6a00                 push 0
// 008b048b  6a00                 push 0
// 008b048d  8bce                 mov ecx, esi
// 008b048f  e89837f4ff           call 0x7f3c2c
// 008b0494  83be4801000000       cmp dword ptr [esi + 0x148], 0
// 008b049b  7414                 je 0x8b04b1
// 008b049d  8bce                 mov ecx, esi
// 008b049f  e85ce2ffff           call 0x8ae700
// 008b04a4  85c0                 test eax, eax
// 008b04a6  7409                 je 0x8b04b1
// 008b04a8  6a00                 push 0
// 008b04aa  8bce                 mov ecx, esi
// 008b04ac  e8dfe9ffff           call 0x8aee90
// 008b04b1  5e                   pop esi
// 008b04b2  c3                   ret 
// copied from an identical function in another client (function ?OnThemedChanged@CXTPDockingPaneMiniWnd@@IAEXXZ)

// from server: 100% by colin
// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD /Ob1 /Oy-
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPaneMiniWnd.cpp