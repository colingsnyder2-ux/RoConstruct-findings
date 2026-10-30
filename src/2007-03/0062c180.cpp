// roc 2007-03 0062c180  unit: seg_00620000  size: 84 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0062c180
//
// 0062c180  83ec08               sub esp, 8
// 0062c183  56                   push esi
// 0062c184  8bf1                 mov esi, ecx
// 0062c186  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0062c18a  85c9                 test ecx, ecx
// 0062c18c  898ea0000000         mov dword ptr [esi + 0xa0], ecx
// 0062c192  7423                 je 0x62c1b7
// 0062c194  83792000             cmp dword ptr [ecx + 0x20], 0
// 0062c198  741d                 je 0x62c1b7
// 0062c19a  8d442404             lea eax, [esp + 4]
// 0062c19e  50                   push eax
// 0062c19f  56                   push esi
// 0062c1a0  6a00                 push 0
// 0062c1a2  68b9880000           push 0x88b9
// 0062c1a7  c744241400000000     mov dword ptr [esp + 0x14], 0
// 0062c1af  e81027ffff           call 0x61e8c4
// 0062c1b4  894660               mov dword ptr [esi + 0x60], eax
// 0062c1b7  8b8ea0000000         mov ecx, dword ptr [esi + 0xa0]
// 0062c1bd  e8c4e81000           call 0x73aa86
// 0062c1c2  2500004000           and eax, 0x400000
// 0062c1c7  8986c8000000         mov dword ptr [esi + 0xc8], eax
// 0062c1cd  5e                   pop esi
// 0062c1ce  83c408               add esp, 8
// 0062c1d1  c20400               ret 4
// library xtp-11.2.2-vc8/Source\CommandBars\XTPCommandBars.cpp (function ?SetSite@CXTPCommandBars@@QAEXPAVCWnd@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/CommandBars/XTPCommandBars.cpp
