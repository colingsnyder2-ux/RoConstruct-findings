// from server: 100% by auto
// roc 2008-06 006a3870  unit: CXTPCommandBarKeyboardTip  size: 84 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006a3870
//
// 006a3870  83ec08               sub esp, 8
// 006a3873  56                   push esi
// 006a3874  8bf1                 mov esi, ecx
// 006a3876  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 006a387a  898ea0000000         mov dword ptr [esi + 0xa0], ecx
// 006a3880  85c9                 test ecx, ecx
// 006a3882  7423                 je 0x6a38a7
// 006a3884  83792000             cmp dword ptr [ecx + 0x20], 0
// 006a3888  741d                 je 0x6a38a7
// 006a388a  8d442404             lea eax, [esp + 4]
// 006a388e  50                   push eax
// 006a388f  56                   push esi
// 006a3890  6a00                 push 0
// 006a3892  68b9880000           push 0x88b9
// 006a3897  c744241400000000     mov dword ptr [esp + 0x14], 0
// 006a389f  e8f8d5ffff           call 0x6a0e9c
// 006a38a4  894660               mov dword ptr [esi + 0x60], eax
// 006a38a7  8b8ea0000000         mov ecx, dword ptr [esi + 0xa0]
// 006a38ad  e8e6861100           call 0x7bbf98
// 006a38b2  2500004000           and eax, 0x400000
// 006a38b7  8986c8000000         mov dword ptr [esi + 0xc8], eax
// 006a38bd  5e                   pop esi
// 006a38be  83c408               add esp, 8
// 006a38c1  c20400               ret 4
// library xtp-11.2.2/Source\CommandBars\XTPCommandBars.cpp (function ?SetSite@CXTPCommandBars@@QAEXPAVCWnd@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPCommandBars.cpp
