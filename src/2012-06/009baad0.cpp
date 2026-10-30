// roc 2012-06 009baad0  unit: CXTPReportRecordItemVariant  size: 77 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009baad0
//
// 009baad0  56                   push esi
// 009baad1  8bf1                 mov esi, ecx
// 009baad3  8d467c               lea eax, [esi + 0x7c]
// 009baad6  50                   push eax
// 009baad7  ff152c2bb200         call dword ptr [0xb22b2c]
// 009baadd  8bce                 mov ecx, esi
// 009baadf  e89cc1ffff           call 0x9b6c80
// 009baae4  f644240801           test byte ptr [esp + 8], 1
// 009baae9  742c                 je 0x9bab17
// 009baaeb  833de493e50000       cmp dword ptr [0xe593e4], 0
// 009baaf2  740f                 je 0x9bab03
// 009baaf4  56                   push esi
// 009baaf5  e8a6dba6ff           call 0x4286a0
// 009baafa  83c404               add esp, 4
// 009baafd  8bc6                 mov eax, esi
// 009baaff  5e                   pop esi
// 009bab00  c20400               ret 4
// 009bab03  68dc93e500           push 0xe593dc
// 009bab08  ff159421b200         call dword ptr [0xb22194]
// 009bab0e  56                   push esi
// 009bab0f  e80076fcff           call 0x982114
// 009bab14  83c404               add esp, 4
// 009bab17  8bc6                 mov eax, esi
// 009bab19  5e                   pop esi
// 009bab1a  c20400               ret 4
// library xtp-11.2.2/Source\ReportControl\XTPReportRecordItemText.cpp (function ??_GCXTPReportRecordItemVariant@@UAEPAXI@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/ReportControl/XTPReportRecordItemText.cpp
