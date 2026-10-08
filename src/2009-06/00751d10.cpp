// roc 2009-06 00751d10  unit: CXTPReportRecordItemVariant  size: 77 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00751d10
//
// 00751d10  56                   push esi
// 00751d11  8bf1                 mov esi, ecx
// 00751d13  8d467c               lea eax, [esi + 0x7c]
// 00751d16  50                   push eax
// 00751d17  ff1528ea8900         call dword ptr [0x89ea28]
// 00751d1d  8bce                 mov ecx, esi
// 00751d1f  e8acd4feff           call 0x73f1d0
// 00751d24  f644240801           test byte ptr [esp + 8], 1
// 00751d29  742c                 je 0x751d57
// 00751d2b  833d0c1aa50000       cmp dword ptr [0xa51a0c], 0
// 00751d32  740f                 je 0x751d43
// 00751d34  56                   push esi
// 00751d35  e8368fccff           call 0x41ac70
// 00751d3a  83c404               add esp, 4
// 00751d3d  8bc6                 mov eax, esi
// 00751d3f  5e                   pop esi
// 00751d40  c20400               ret 4
// 00751d43  68041aa500           push 0xa51a04
// 00751d48  ff15a4e18900         call dword ptr [0x89e1a4]
// 00751d4e  56                   push esi
// 00751d4f  e8de6cfcff           call 0x718a32
// 00751d54  83c404               add esp, 4
// 00751d57  8bc6                 mov eax, esi
// 00751d59  5e                   pop esi
// 00751d5a  c20400               ret 4
// library xtp-11.2.2/Source\ReportControl\XTPReportRecordItemText.cpp (function ??_GCXTPReportRecordItemVariant@@UAEPAXI@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/ReportControl/XTPReportRecordItemText.cpp
