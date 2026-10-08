// from server: 100% by auto
// roc 2012-06 009f6150  unit: PAVCXTPReportColumn::?$CArray  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009f6150
//
// 009f6150  57                   push edi
// 009f6151  8b7c2408             mov edi, dword ptr [esp + 8]
// 009f6155  85ff                 test edi, edi
// 009f6157  7c4a                 jl 0x9f61a3
// 009f6159  8b44240c             mov eax, dword ptr [esp + 0xc]
// 009f615d  85c0                 test eax, eax
// 009f615f  7c42                 jl 0x9f61a3
// 009f6161  3b4130               cmp eax, dword ptr [ecx + 0x30]
// 009f6164  53                   push ebx
// 009f6165  56                   push esi
// 009f6166  7d2e                 jge 0x9f6196
// 009f6168  3b4130               cmp eax, dword ptr [ecx + 0x30]
// 009f616b  8d7128               lea esi, [ecx + 0x28]
// 009f616e  7d2e                 jge 0x9f619e
// 009f6170  8b4e04               mov ecx, dword ptr [esi + 4]
// 009f6173  8b1c81               mov ebx, dword ptr [ecx + eax*4]
// 009f6176  85db                 test ebx, ebx
// 009f6178  741c                 je 0x9f6196
// 009f617a  3bf8                 cmp edi, eax
// 009f617c  7418                 je 0x9f6196
// 009f617e  7e01                 jle 0x9f6181
// 009f6180  4f                   dec edi
// 009f6181  6a01                 push 1
// 009f6183  50                   push eax
// 009f6184  8bce                 mov ecx, esi
// 009f6186  e8e5cff9ff           call 0x993170
// 009f618b  6a01                 push 1
// 009f618d  53                   push ebx
// 009f618e  57                   push edi
// 009f618f  8bce                 mov ecx, esi
// 009f6191  e83a51fcff           call 0x9bb2d0
// 009f6196  5e                   pop esi
// 009f6197  5b                   pop ebx
// 009f6198  8bc7                 mov eax, edi
// 009f619a  5f                   pop edi
// 009f619b  c20800               ret 8
// 009f619e  e81dc2f8ff           call 0x9823c0
// 009f61a3  83c8ff               or eax, 0xffffffff
// 009f61a6  5f                   pop edi
// 009f61a7  c20800               ret 8
// library xtp-15.2.1/Source\ReportControl\XTPReportColumns.cpp (function ?ChangeColumnOrder@CXTPReportColumns@@QAEHHH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/ReportControl/XTPReportColumns.cpp
