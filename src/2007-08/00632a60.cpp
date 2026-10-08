// from server: 100% by auto
// roc 2007-08 00632a60  unit: CXTPCommandBarKeyboardTip  size: 84 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00632a60
//
// 00632a60  83ec08               sub esp, 8
// 00632a63  56                   push esi
// 00632a64  8bf1                 mov esi, ecx
// 00632a66  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00632a6a  85c9                 test ecx, ecx
// 00632a6c  898ea0000000         mov dword ptr [esi + 0xa0], ecx
// 00632a72  7423                 je 0x632a97
// 00632a74  83792000             cmp dword ptr [ecx + 0x20], 0
// 00632a78  741d                 je 0x632a97
// 00632a7a  8d442404             lea eax, [esp + 4]
// 00632a7e  50                   push eax
// 00632a7f  56                   push esi
// 00632a80  6a00                 push 0
// 00632a82  68b9880000           push 0x88b9
// 00632a87  c744241400000000     mov dword ptr [esp + 0x14], 0
// 00632a8f  e89cd9ffff           call 0x630430
// 00632a94  894660               mov dword ptr [esi + 0x60], eax
// 00632a97  8b8ea0000000         mov ecx, dword ptr [esi + 0xa0]
// 00632a9d  e880581000           call 0x738322
// 00632aa2  2500004000           and eax, 0x400000
// 00632aa7  8986c8000000         mov dword ptr [esi + 0xc8], eax
// 00632aad  5e                   pop esi
// 00632aae  83c408               add esp, 8
// 00632ab1  c20400               ret 4
// library xtp-11.2.2-vc8/Source\CommandBars\XTPCommandBars.cpp (function ?SetSite@CXTPCommandBars@@QAEXPAVCWnd@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/CommandBars/XTPCommandBars.cpp
