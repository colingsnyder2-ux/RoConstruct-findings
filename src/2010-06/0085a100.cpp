// roc 2010-06 0085a100  unit: CXTPReportTip  size: 108 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0085a100
//
// 0085a100  83ec10               sub esp, 0x10
// 0085a103  56                   push esi
// 0085a104  8bf1                 mov esi, ecx
// 0085a106  837e2000             cmp dword ptr [esi + 0x20], 0
// 0085a10a  740c                 je 0x85a118
// 0085a10c  b801000000           mov eax, 1
// 0085a111  5e                   pop esi
// 0085a112  83c410               add esp, 0x10
// 0085a115  c20400               ret 4
// 0085a118  8b442418             mov eax, dword ptr [esp + 0x18]
// 0085a11c  57                   push edi
// 0085a11d  894664               mov dword ptr [esi + 0x64], eax
// 0085a120  e839dbf4ff           call 0x7a7c5e
// 0085a125  68007f0000           push 0x7f00
// 0085a12a  6a00                 push 0
// 0085a12c  ff15ccbb9e00         call dword ptr [0x9ebbcc]
// 0085a132  6a00                 push 0
// 0085a134  6a00                 push 0
// 0085a136  6a00                 push 0
// 0085a138  8d4c2414             lea ecx, [esp + 0x14]
// 0085a13c  8bf8                 mov edi, eax
// 0085a13e  e82d51faff           call 0x7ff270
// 0085a143  50                   push eax
// 0085a144  6800000080           push 0x80000000
// 0085a149  6a00                 push 0
// 0085a14b  6a00                 push 0
// 0085a14d  6a00                 push 0
// 0085a14f  57                   push edi
// 0085a150  6a00                 push 0
// 0085a152  e80fe2f4ff           call 0x7a8366
// 0085a157  50                   push eax
// 0085a158  6880000000           push 0x80
// 0085a15d  8bce                 mov ecx, esi
// 0085a15f  e8aed8f4ff           call 0x7a7a12
// 0085a164  5f                   pop edi
// 0085a165  5e                   pop esi
// 0085a166  83c410               add esp, 0x10
// 0085a169  c20400               ret 4
// library xtp-11.2.2/Source\ReportControl\XTPReportTip.cpp (function ?Create@CXTPReportTip@@UAEHPAVCWnd@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/ReportControl/XTPReportTip.cpp
