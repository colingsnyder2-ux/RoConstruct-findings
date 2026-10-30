// from server: 100% by auto
// roc 2012-06 00a23c50  unit: CXTPRibbonBar  size: 86 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a23c50
//
// 00a23c50  8b442418             mov eax, dword ptr [esp + 0x18]
// 00a23c54  83ec08               sub esp, 8
// 00a23c57  53                   push ebx
// 00a23c58  55                   push ebp
// 00a23c59  56                   push esi
// 00a23c5a  8b742418             mov esi, dword ptr [esp + 0x18]
// 00a23c5e  57                   push edi
// 00a23c5f  50                   push eax
// 00a23c60  8bce                 mov ecx, esi
// 00a23c62  e8cf5e0700           call 0xa99b36
// 00a23c67  8b5c2424             mov ebx, dword ptr [esp + 0x24]
// 00a23c6b  8b6c2420             mov ebp, dword ptr [esp + 0x20]
// 00a23c6f  53                   push ebx
// 00a23c70  55                   push ebp
// 00a23c71  8d4c2418             lea ecx, [esp + 0x18]
// 00a23c75  51                   push ecx
// 00a23c76  8bce                 mov ecx, esi
// 00a23c78  8bf8                 mov edi, eax
// 00a23c7a  e883f3f5ff           call 0x983002
// 00a23c7f  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 00a23c83  8b442428             mov eax, dword ptr [esp + 0x28]
// 00a23c87  03da                 add ebx, edx
// 00a23c89  53                   push ebx
// 00a23c8a  03e8                 add ebp, eax
// 00a23c8c  55                   push ebp
// 00a23c8d  8bce                 mov ecx, esi
// 00a23c8f  e868f3f5ff           call 0x982ffc
// 00a23c94  57                   push edi
// 00a23c95  8bce                 mov ecx, esi
// 00a23c97  e89a5e0700           call 0xa99b36
// 00a23c9c  5f                   pop edi
// 00a23c9d  5e                   pop esi
// 00a23c9e  5d                   pop ebp
// 00a23c9f  5b                   pop ebx
// 00a23ca0  83c408               add esp, 8
// 00a23ca3  c21800               ret 0x18
// library xtp-15.2.1/Source\ReportControl\XTPReportPaintManager.cpp (function ?Line@CXTPReportPaintManager@@QAEXPAVCDC@@HHHHPAVCPen@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/ReportControl/XTPReportPaintManager.cpp
