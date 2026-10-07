// roc 2007-08 006d5a70  unit: CXTPReportTip  size: 108 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006d5a70
//
// 006d5a70  83ec10               sub esp, 0x10
// 006d5a73  56                   push esi
// 006d5a74  8bf1                 mov esi, ecx
// 006d5a76  837e2000             cmp dword ptr [esi + 0x20], 0
// 006d5a7a  740c                 je 0x6d5a88
// 006d5a7c  b801000000           mov eax, 1
// 006d5a81  5e                   pop esi
// 006d5a82  83c410               add esp, 0x10
// 006d5a85  c20400               ret 4
// 006d5a88  8b442418             mov eax, dword ptr [esp + 0x18]
// 006d5a8c  57                   push edi
// 006d5a8d  894664               mov dword ptr [esi + 0x64], eax
// 006d5a90  e86da4f5ff           call 0x62ff02
// 006d5a95  68007f0000           push 0x7f00
// 006d5a9a  6a00                 push 0
// 006d5a9c  ff1520ec7700         call dword ptr [0x77ec20]
// 006d5aa2  6a00                 push 0
// 006d5aa4  6a00                 push 0
// 006d5aa6  6a00                 push 0
// 006d5aa8  8d4c2414             lea ecx, [esp + 0x14]
// 006d5aac  8bf8                 mov edi, eax
// 006d5aae  e8ada4faff           call 0x67ff60
// 006d5ab3  50                   push eax
// 006d5ab4  6800000080           push 0x80000000
// 006d5ab9  6a00                 push 0
// 006d5abb  6a00                 push 0
// 006d5abd  6a00                 push 0
// 006d5abf  57                   push edi
// 006d5ac0  6a00                 push 0
// 006d5ac2  e82faaf5ff           call 0x6304f6
// 006d5ac7  50                   push eax
// 006d5ac8  6880000000           push 0x80
// 006d5acd  8bce                 mov ecx, esi
// 006d5acf  e80ca2f5ff           call 0x62fce0
// 006d5ad4  5f                   pop edi
// 006d5ad5  5e                   pop esi
// 006d5ad6  83c410               add esp, 0x10
// 006d5ad9  c20400               ret 4
// library xtp-11.2.2-vc8/Source\ReportControl\XTPReportTip.cpp (function ?Create@CXTPReportTip@@UAEHPAVCWnd@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/ReportControl/XTPReportTip.cpp
