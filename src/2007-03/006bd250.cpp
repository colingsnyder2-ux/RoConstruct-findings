// roc 2007-03 006bd250  unit: seg_006b0000  size: 108 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 006bd250
//
// 006bd250  83ec10               sub esp, 0x10
// 006bd253  56                   push esi
// 006bd254  8bf1                 mov esi, ecx
// 006bd256  837e2000             cmp dword ptr [esi + 0x20], 0
// 006bd25a  740c                 je 0x6bd268
// 006bd25c  b801000000           mov eax, 1
// 006bd261  5e                   pop esi
// 006bd262  83c410               add esp, 0x10
// 006bd265  c20400               ret 4
// 006bd268  8b442418             mov eax, dword ptr [esp + 0x18]
// 006bd26c  57                   push edi
// 006bd26d  894664               mov dword ptr [esi + 0x64], eax
// 006bd270  e81b11f6ff           call 0x61e390
// 006bd275  68007f0000           push 0x7f00
// 006bd27a  6a00                 push 0
// 006bd27c  ff15f0ec7700         call dword ptr [0x77ecf0]
// 006bd282  6a00                 push 0
// 006bd284  6a00                 push 0
// 006bd286  6a00                 push 0
// 006bd288  8d4c2414             lea ecx, [esp + 0x14]
// 006bd28c  8bf8                 mov edi, eax
// 006bd28e  e8fde4faff           call 0x66b790
// 006bd293  50                   push eax
// 006bd294  6800000080           push 0x80000000
// 006bd299  6a00                 push 0
// 006bd29b  6a00                 push 0
// 006bd29d  6a00                 push 0
// 006bd29f  57                   push edi
// 006bd2a0  6a00                 push 0
// 006bd2a2  e8dd16f6ff           call 0x61e984
// 006bd2a7  50                   push eax
// 006bd2a8  6880000000           push 0x80
// 006bd2ad  8bce                 mov ecx, esi
// 006bd2af  e8c00ef6ff           call 0x61e174
// 006bd2b4  5f                   pop edi
// 006bd2b5  5e                   pop esi
// 006bd2b6  83c410               add esp, 0x10
// 006bd2b9  c20400               ret 4
// library xtp-11.2.2/Source\ReportControl\XTPReportTip.cpp (function ?Create@CXTPReportTip@@UAEHPAVCWnd@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/ReportControl/XTPReportTip.cpp
