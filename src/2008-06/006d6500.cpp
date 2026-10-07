// roc 2008-06 006d6500  unit: CXTPReportHeader  size: 87 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006d6500
//
// 006d6500  8b442404             mov eax, dword ptr [esp + 4]
// 006d6504  53                   push ebx
// 006d6505  56                   push esi
// 006d6506  57                   push edi
// 006d6507  8bf9                 mov edi, ecx
// 006d6509  8b4f20               mov ecx, dword ptr [edi + 0x20]
// 006d650c  8b5930               mov ebx, dword ptr [ecx + 0x30]
// 006d650f  50                   push eax
// 006d6510  e8eb930700           call 0x74f900
// 006d6515  8bf0                 mov esi, eax
// 006d6517  46                   inc esi
// 006d6518  3bf3                 cmp esi, ebx
// 006d651a  7d28                 jge 0x6d6544
// 006d651c  8d642400             lea esp, [esp]
// 006d6520  8b4720               mov eax, dword ptr [edi + 0x20]
// 006d6523  85f6                 test esi, esi
// 006d6525  7c18                 jl 0x6d653f
// 006d6527  3b7030               cmp esi, dword ptr [eax + 0x30]
// 006d652a  7d13                 jge 0x6d653f
// 006d652c  8b482c               mov ecx, dword ptr [eax + 0x2c]
// 006d652f  8b0cb1               mov ecx, dword ptr [ecx + esi*4]
// 006d6532  85c9                 test ecx, ecx
// 006d6534  7409                 je 0x6d653f
// 006d6536  e8a5e0ffff           call 0x6d45e0
// 006d653b  85c0                 test eax, eax
// 006d653d  7510                 jne 0x6d654f
// 006d653f  46                   inc esi
// 006d6540  3bf3                 cmp esi, ebx
// 006d6542  7cdc                 jl 0x6d6520
// 006d6544  5f                   pop edi
// 006d6545  5e                   pop esi
// 006d6546  b801000000           mov eax, 1
// 006d654b  5b                   pop ebx
// 006d654c  c20400               ret 4
// 006d654f  5f                   pop edi
// 006d6550  5e                   pop esi
// 006d6551  33c0                 xor eax, eax
// 006d6553  5b                   pop ebx
// 006d6554  c20400               ret 4
// library xtp-11.2.2/Source\ReportControl\XTPReportHeader.cpp (function ?IsLastVisibleColumn@CXTPReportHeader@@QBEHPAVCXTPReportColumn@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/ReportControl/XTPReportHeader.cpp
