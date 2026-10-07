// roc 2008-06 0074f940  unit: CXTPReportHyperlinks  size: 58 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0074f940
//
// 0074f940  53                   push ebx
// 0074f941  55                   push ebp
// 0074f942  56                   push esi
// 0074f943  57                   push edi
// 0074f944  8bf9                 mov edi, ecx
// 0074f946  8b5f30               mov ebx, dword ptr [edi + 0x30]
// 0074f949  33ed                 xor ebp, ebp
// 0074f94b  33f6                 xor esi, esi
// 0074f94d  85db                 test ebx, ebx
// 0074f94f  7e22                 jle 0x74f973
// 0074f951  85f6                 test esi, esi
// 0074f953  7c19                 jl 0x74f96e
// 0074f955  3b7730               cmp esi, dword ptr [edi + 0x30]
// 0074f958  7d14                 jge 0x74f96e
// 0074f95a  8b472c               mov eax, dword ptr [edi + 0x2c]
// 0074f95d  8b0cb0               mov ecx, dword ptr [eax + esi*4]
// 0074f960  85c9                 test ecx, ecx
// 0074f962  740a                 je 0x74f96e
// 0074f964  e8774cf8ff           call 0x6d45e0
// 0074f969  85c0                 test eax, eax
// 0074f96b  7401                 je 0x74f96e
// 0074f96d  45                   inc ebp
// 0074f96e  46                   inc esi
// 0074f96f  3bf3                 cmp esi, ebx
// 0074f971  7cde                 jl 0x74f951
// 0074f973  5f                   pop edi
// 0074f974  5e                   pop esi
// 0074f975  8bc5                 mov eax, ebp
// 0074f977  5d                   pop ebp
// 0074f978  5b                   pop ebx
// 0074f979  c3                   ret 
// library xtp-11.2.2/Source\ReportControl\XTPReportColumns.cpp (function ?GetVisibleColumnsCount@CXTPReportColumns@@QBEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/ReportControl/XTPReportColumns.cpp
