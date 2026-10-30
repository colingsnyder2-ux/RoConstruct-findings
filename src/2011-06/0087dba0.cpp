// from server: 100% by auto
// roc 2011-06 0087dba0  unit: PAVCXTPReportColumn::?$CArray  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0087dba0
//
// 0087dba0  57                   push edi
// 0087dba1  8b7c2408             mov edi, dword ptr [esp + 8]
// 0087dba5  85ff                 test edi, edi
// 0087dba7  7c4a                 jl 0x87dbf3
// 0087dba9  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0087dbad  85c0                 test eax, eax
// 0087dbaf  7c42                 jl 0x87dbf3
// 0087dbb1  3b4130               cmp eax, dword ptr [ecx + 0x30]
// 0087dbb4  53                   push ebx
// 0087dbb5  56                   push esi
// 0087dbb6  7d2e                 jge 0x87dbe6
// 0087dbb8  3b4130               cmp eax, dword ptr [ecx + 0x30]
// 0087dbbb  8d7128               lea esi, [ecx + 0x28]
// 0087dbbe  7d2e                 jge 0x87dbee
// 0087dbc0  8b4e04               mov ecx, dword ptr [esi + 4]
// 0087dbc3  8b1c81               mov ebx, dword ptr [ecx + eax*4]
// 0087dbc6  85db                 test ebx, ebx
// 0087dbc8  741c                 je 0x87dbe6
// 0087dbca  3bf8                 cmp edi, eax
// 0087dbcc  7418                 je 0x87dbe6
// 0087dbce  7e01                 jle 0x87dbd1
// 0087dbd0  4f                   dec edi
// 0087dbd1  6a01                 push 1
// 0087dbd3  50                   push eax
// 0087dbd4  8bce                 mov ecx, esi
// 0087dbd6  e8a5c6faff           call 0x82a280
// 0087dbdb  6a01                 push 1
// 0087dbdd  53                   push ebx
// 0087dbde  57                   push edi
// 0087dbdf  8bce                 mov ecx, esi
// 0087dbe1  e86aa9fdff           call 0x858550
// 0087dbe6  5e                   pop esi
// 0087dbe7  5b                   pop ebx
// 0087dbe8  8bc7                 mov eax, edi
// 0087dbea  5f                   pop edi
// 0087dbeb  c20800               ret 8
// 0087dbee  e817c7f8ff           call 0x80a30a
// 0087dbf3  83c8ff               or eax, 0xffffffff
// 0087dbf6  5f                   pop edi
// 0087dbf7  c20800               ret 8
// library xtp-15.2.1/Source\ReportControl\XTPReportColumns.cpp (function ?ChangeColumnOrder@CXTPReportColumns@@QAEHHH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/ReportControl/XTPReportColumns.cpp
