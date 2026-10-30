// roc 2009-12 008a5fb0  unit: CXTPReportTip  size: 108 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008a5fb0
//
// 008a5fb0  83ec10               sub esp, 0x10
// 008a5fb3  56                   push esi
// 008a5fb4  8bf1                 mov esi, ecx
// 008a5fb6  837e2000             cmp dword ptr [esi + 0x20], 0
// 008a5fba  740c                 je 0x8a5fc8
// 008a5fbc  b801000000           mov eax, 1
// 008a5fc1  5e                   pop esi
// 008a5fc2  83c410               add esp, 0x10
// 008a5fc5  c20400               ret 4
// 008a5fc8  8b442418             mov eax, dword ptr [esp + 0x18]
// 008a5fcc  57                   push edi
// 008a5fcd  894664               mov dword ptr [esi + 0x64], eax
// 008a5fd0  e849dbf4ff           call 0x7f3b1e
// 008a5fd5  68007f0000           push 0x7f00
// 008a5fda  6a00                 push 0
// 008a5fdc  ff1548ca9800         call dword ptr [0x98ca48]
// 008a5fe2  6a00                 push 0
// 008a5fe4  6a00                 push 0
// 008a5fe6  6a00                 push 0
// 008a5fe8  8d4c2414             lea ecx, [esp + 0x14]
// 008a5fec  8bf8                 mov edi, eax
// 008a5fee  e83d52faff           call 0x84b230
// 008a5ff3  50                   push eax
// 008a5ff4  6800000080           push 0x80000000
// 008a5ff9  6a00                 push 0
// 008a5ffb  6a00                 push 0
// 008a5ffd  6a00                 push 0
// 008a5fff  57                   push edi
// 008a6000  6a00                 push 0
// 008a6002  e81fe2f4ff           call 0x7f4226
// 008a6007  50                   push eax
// 008a6008  6880000000           push 0x80
// 008a600d  8bce                 mov ecx, esi
// 008a600f  e8bed8f4ff           call 0x7f38d2
// 008a6014  5f                   pop edi
// 008a6015  5e                   pop esi
// 008a6016  83c410               add esp, 0x10
// 008a6019  c20400               ret 4
// library xtp-11.2.2/Source\ReportControl\XTPReportTip.cpp (function ?Create@CXTPReportTip@@UAEHPAVCWnd@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/ReportControl/XTPReportTip.cpp
