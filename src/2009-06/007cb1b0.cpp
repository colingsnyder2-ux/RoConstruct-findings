// roc 2009-06 007cb1b0  unit: CXTPReportTip  size: 108 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 007cb1b0
//
// 007cb1b0  83ec10               sub esp, 0x10
// 007cb1b3  56                   push esi
// 007cb1b4  8bf1                 mov esi, ecx
// 007cb1b6  837e2000             cmp dword ptr [esi + 0x20], 0
// 007cb1ba  740c                 je 0x7cb1c8
// 007cb1bc  b801000000           mov eax, 1
// 007cb1c1  5e                   pop esi
// 007cb1c2  83c410               add esp, 0x10
// 007cb1c5  c20400               ret 4
// 007cb1c8  8b442418             mov eax, dword ptr [esp + 0x18]
// 007cb1cc  57                   push edi
// 007cb1cd  894664               mov dword ptr [esi + 0x64], eax
// 007cb1d0  e821dbf4ff           call 0x718cf6
// 007cb1d5  68007f0000           push 0x7f00
// 007cb1da  6a00                 push 0
// 007cb1dc  ff15b0ed8900         call dword ptr [0x89edb0]
// 007cb1e2  6a00                 push 0
// 007cb1e4  6a00                 push 0
// 007cb1e6  6a00                 push 0
// 007cb1e8  8d4c2414             lea ecx, [esp + 0x14]
// 007cb1ec  8bf8                 mov edi, eax
// 007cb1ee  e83d52faff           call 0x770430
// 007cb1f3  50                   push eax
// 007cb1f4  6800000080           push 0x80000000
// 007cb1f9  6a00                 push 0
// 007cb1fb  6a00                 push 0
// 007cb1fd  6a00                 push 0
// 007cb1ff  57                   push edi
// 007cb200  6a00                 push 0
// 007cb202  e8f7e1f4ff           call 0x7193fe
// 007cb207  50                   push eax
// 007cb208  6880000000           push 0x80
// 007cb20d  8bce                 mov ecx, esi
// 007cb20f  e896d8f4ff           call 0x718aaa
// 007cb214  5f                   pop edi
// 007cb215  5e                   pop esi
// 007cb216  83c410               add esp, 0x10
// 007cb219  c20400               ret 4
// library xtp-11.2.2/Source\ReportControl\XTPReportTip.cpp (function ?Create@CXTPReportTip@@UAEHPAVCWnd@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/ReportControl/XTPReportTip.cpp
