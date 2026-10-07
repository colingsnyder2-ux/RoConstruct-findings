// roc 2008-06 007463e0  unit: CXTPDockContext  size: 86 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007463e0
//
// 007463e0  8b442418             mov eax, dword ptr [esp + 0x18]
// 007463e4  83ec08               sub esp, 8
// 007463e7  53                   push ebx
// 007463e8  55                   push ebp
// 007463e9  56                   push esi
// 007463ea  8b742418             mov esi, dword ptr [esp + 0x18]
// 007463ee  57                   push edi
// 007463ef  50                   push eax
// 007463f0  8bce                 mov ecx, esi
// 007463f2  e899630700           call 0x7bc790
// 007463f7  8b5c2424             mov ebx, dword ptr [esp + 0x24]
// 007463fb  8b6c2420             mov ebp, dword ptr [esp + 0x20]
// 007463ff  53                   push ebx
// 00746400  55                   push ebp
// 00746401  8d4c2418             lea ecx, [esp + 0x18]
// 00746405  51                   push ecx
// 00746406  8bce                 mov ecx, esi
// 00746408  8bf8                 mov edi, eax
// 0074640a  e81bb0f5ff           call 0x6a142a
// 0074640f  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 00746413  8b442428             mov eax, dword ptr [esp + 0x28]
// 00746417  03da                 add ebx, edx
// 00746419  53                   push ebx
// 0074641a  03e8                 add ebp, eax
// 0074641c  55                   push ebp
// 0074641d  8bce                 mov ecx, esi
// 0074641f  e800b0f5ff           call 0x6a1424
// 00746424  57                   push edi
// 00746425  8bce                 mov ecx, esi
// 00746427  e864630700           call 0x7bc790
// 0074642c  5f                   pop edi
// 0074642d  5e                   pop esi
// 0074642e  5d                   pop ebp
// 0074642f  5b                   pop ebx
// 00746430  83c408               add esp, 8
// 00746433  c21800               ret 0x18
// library xtp-11.2.2/Source\ReportControl\XTPReportPaintManager.cpp (function ?Line@CXTPReportPaintManager@@QAEXPAVCDC@@HHHHPAVCPen@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/ReportControl/XTPReportPaintManager.cpp
