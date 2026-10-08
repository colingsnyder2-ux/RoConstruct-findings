// from server: 100% by auto
// roc 2008-06 00752ba0  unit: CXTPReportTip  size: 108 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00752ba0
//
// 00752ba0  83ec10               sub esp, 0x10
// 00752ba3  56                   push esi
// 00752ba4  8bf1                 mov esi, ecx
// 00752ba6  837e2000             cmp dword ptr [esi + 0x20], 0
// 00752baa  740c                 je 0x752bb8
// 00752bac  b801000000           mov eax, 1
// 00752bb1  5e                   pop esi
// 00752bb2  83c410               add esp, 0x10
// 00752bb5  c20400               ret 4
// 00752bb8  8b442418             mov eax, dword ptr [esp + 0x18]
// 00752bbc  57                   push edi
// 00752bbd  894664               mov dword ptr [esi + 0x64], eax
// 00752bc0  e861ddf4ff           call 0x6a0926
// 00752bc5  68007f0000           push 0x7f00
// 00752bca  6a00                 push 0
// 00752bcc  ff15d02d8000         call dword ptr [0x802dd0]
// 00752bd2  6a00                 push 0
// 00752bd4  6a00                 push 0
// 00752bd6  6a00                 push 0
// 00752bd8  8d4c2414             lea ecx, [esp + 0x14]
// 00752bdc  8bf8                 mov edi, eax
// 00752bde  e8ad4efaff           call 0x6f7a90
// 00752be3  50                   push eax
// 00752be4  6800000080           push 0x80000000
// 00752be9  6a00                 push 0
// 00752beb  6a00                 push 0
// 00752bed  6a00                 push 0
// 00752bef  57                   push edi
// 00752bf0  6a00                 push 0
// 00752bf2  e895e3f4ff           call 0x6a0f8c
// 00752bf7  50                   push eax
// 00752bf8  6880000000           push 0x80
// 00752bfd  8bce                 mov ecx, esi
// 00752bff  e8f4daf4ff           call 0x6a06f8
// 00752c04  5f                   pop edi
// 00752c05  5e                   pop esi
// 00752c06  83c410               add esp, 0x10
// 00752c09  c20400               ret 4
// library xtp-11.2.2/Source\ReportControl\XTPReportTip.cpp (function ?Create@CXTPReportTip@@UAEHPAVCWnd@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/ReportControl/XTPReportTip.cpp
