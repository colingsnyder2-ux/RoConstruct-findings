// roc 2012-06 009a2f90  unit: CXTPCommandBarKeyboardTip  size: 84 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009a2f90
//
// 009a2f90  83ec08               sub esp, 8
// 009a2f93  56                   push esi
// 009a2f94  8bf1                 mov esi, ecx
// 009a2f96  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 009a2f9a  898ea0000000         mov dword ptr [esi + 0xa0], ecx
// 009a2fa0  85c9                 test ecx, ecx
// 009a2fa2  7423                 je 0x9a2fc7
// 009a2fa4  83792000             cmp dword ptr [ecx + 0x20], 0
// 009a2fa8  741d                 je 0x9a2fc7
// 009a2faa  8d442404             lea eax, [esp + 4]
// 009a2fae  50                   push eax
// 009a2faf  56                   push esi
// 009a2fb0  6a00                 push 0
// 009a2fb2  68b9880000           push 0x88b9
// 009a2fb7  c744241400000000     mov dword ptr [esp + 0x14], 0
// 009a2fbf  e81ef9fdff           call 0x9828e2
// 009a2fc4  894660               mov dword ptr [esi + 0x60], eax
// 009a2fc7  8b8ea0000000         mov ecx, dword ptr [esi + 0xa0]
// 009a2fcd  e806660f00           call 0xa995d8
// 009a2fd2  2500004000           and eax, 0x400000
// 009a2fd7  8986c8000000         mov dword ptr [esi + 0xc8], eax
// 009a2fdd  5e                   pop esi
// 009a2fde  83c408               add esp, 8
// 009a2fe1  c20400               ret 4
// library xtp-13.2.1/Source\CommandBars\XTPCommandBars.cpp (function ?SetSite@CXTPCommandBars@@QAEXPAVCWnd@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-13.2.1 Source/CommandBars/XTPCommandBars.cpp
