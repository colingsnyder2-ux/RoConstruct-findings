// roc 2008-06 0074fc40  unit: PAVCXTPReportColumn::?$CArray  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0074fc40
//
// 0074fc40  57                   push edi
// 0074fc41  8b7c2408             mov edi, dword ptr [esp + 8]
// 0074fc45  85ff                 test edi, edi
// 0074fc47  7c4a                 jl 0x74fc93
// 0074fc49  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0074fc4d  85c0                 test eax, eax
// 0074fc4f  7c42                 jl 0x74fc93
// 0074fc51  3b4130               cmp eax, dword ptr [ecx + 0x30]
// 0074fc54  53                   push ebx
// 0074fc55  56                   push esi
// 0074fc56  7d2e                 jge 0x74fc86
// 0074fc58  3b4130               cmp eax, dword ptr [ecx + 0x30]
// 0074fc5b  8d7128               lea esi, [ecx + 0x28]
// 0074fc5e  7d2e                 jge 0x74fc8e
// 0074fc60  8b4e04               mov ecx, dword ptr [esi + 4]
// 0074fc63  8b1c81               mov ebx, dword ptr [ecx + eax*4]
// 0074fc66  85db                 test ebx, ebx
// 0074fc68  741c                 je 0x74fc86
// 0074fc6a  3bf8                 cmp edi, eax
// 0074fc6c  7418                 je 0x74fc86
// 0074fc6e  7e01                 jle 0x74fc71
// 0074fc70  4f                   dec edi
// 0074fc71  6a01                 push 1
// 0074fc73  50                   push eax
// 0074fc74  8bce                 mov ecx, esi
// 0074fc76  e8f5d3fcff           call 0x71d070
// 0074fc7b  6a01                 push 1
// 0074fc7d  53                   push ebx
// 0074fc7e  57                   push edi
// 0074fc7f  8bce                 mov ecx, esi
// 0074fc81  e87abf0200           call 0x77bc00
// 0074fc86  5e                   pop esi
// 0074fc87  5b                   pop ebx
// 0074fc88  8bc7                 mov eax, edi
// 0074fc8a  5f                   pop edi
// 0074fc8b  c20800               ret 8
// 0074fc8e  e8b10cf5ff           call 0x6a0944
// 0074fc93  83c8ff               or eax, 0xffffffff
// 0074fc96  5f                   pop edi
// 0074fc97  c20800               ret 8
// library xtp-11.2.2/Source\ReportControl\XTPReportColumns.cpp (function ?ChangeColumnOrder@CXTPReportColumns@@QAEHHH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/ReportControl/XTPReportColumns.cpp
