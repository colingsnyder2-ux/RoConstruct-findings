// roc 2012-06 00a2d470  unit: CXTPReportTip  size: 108 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a2d470
//
// 00a2d470  83ec10               sub esp, 0x10
// 00a2d473  56                   push esi
// 00a2d474  8bf1                 mov esi, ecx
// 00a2d476  837e2000             cmp dword ptr [esi + 0x20], 0
// 00a2d47a  740c                 je 0xa2d488
// 00a2d47c  b801000000           mov eax, 1
// 00a2d481  5e                   pop esi
// 00a2d482  83c410               add esp, 0x10
// 00a2d485  c20400               ret 4
// 00a2d488  8b442418             mov eax, dword ptr [esp + 0x18]
// 00a2d48c  57                   push edi
// 00a2d48d  894664               mov dword ptr [esi + 0x64], eax
// 00a2d490  e83d4ff5ff           call 0x9823d2
// 00a2d495  68007f0000           push 0x7f00
// 00a2d49a  6a00                 push 0
// 00a2d49c  ff159c3ab200         call dword ptr [0xb23a9c]
// 00a2d4a2  6a00                 push 0
// 00a2d4a4  6a00                 push 0
// 00a2d4a6  6a00                 push 0
// 00a2d4a8  8d4c2414             lea ecx, [esp + 0x14]
// 00a2d4ac  8bf8                 mov edi, eax
// 00a2d4ae  e84d7cfaff           call 0x9d5100
// 00a2d4b3  50                   push eax
// 00a2d4b4  6800000080           push 0x80000000
// 00a2d4b9  6a00                 push 0
// 00a2d4bb  6a00                 push 0
// 00a2d4bd  6a00                 push 0
// 00a2d4bf  57                   push edi
// 00a2d4c0  6a00                 push 0
// 00a2d4c2  e8e955f5ff           call 0x982ab0
// 00a2d4c7  50                   push eax
// 00a2d4c8  6880000000           push 0x80
// 00a2d4cd  8bce                 mov ecx, esi
// 00a2d4cf  e8b84cf5ff           call 0x98218c
// 00a2d4d4  5f                   pop edi
// 00a2d4d5  5e                   pop esi
// 00a2d4d6  83c410               add esp, 0x10
// 00a2d4d9  c20400               ret 4
// library xtp-11.2.2/Source\ReportControl\XTPReportTip.cpp (function ?Create@CXTPReportTip@@UAEHPAVCWnd@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/ReportControl/XTPReportTip.cpp
