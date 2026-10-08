// from server: 100% by auto
// roc 2011-06 008ab7a0  unit: CXTPRibbonBar  size: 86 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008ab7a0
//
// 008ab7a0  8b442418             mov eax, dword ptr [esp + 0x18]
// 008ab7a4  83ec08               sub esp, 8
// 008ab7a7  53                   push ebx
// 008ab7a8  55                   push ebp
// 008ab7a9  56                   push esi
// 008ab7aa  8b742418             mov esi, dword ptr [esp + 0x18]
// 008ab7ae  57                   push edi
// 008ab7af  50                   push eax
// 008ab7b0  8bce                 mov ecx, esi
// 008ab7b2  e837141200           call 0x9ccbee
// 008ab7b7  8b5c2424             mov ebx, dword ptr [esp + 0x24]
// 008ab7bb  8b6c2420             mov ebp, dword ptr [esp + 0x20]
// 008ab7bf  53                   push ebx
// 008ab7c0  55                   push ebp
// 008ab7c1  8d4c2418             lea ecx, [esp + 0x18]
// 008ab7c5  51                   push ecx
// 008ab7c6  8bce                 mov ecx, esi
// 008ab7c8  8bf8                 mov edi, eax
// 008ab7ca  e8a1f7f5ff           call 0x80af70
// 008ab7cf  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 008ab7d3  8b442428             mov eax, dword ptr [esp + 0x28]
// 008ab7d7  03da                 add ebx, edx
// 008ab7d9  53                   push ebx
// 008ab7da  03e8                 add ebp, eax
// 008ab7dc  55                   push ebp
// 008ab7dd  8bce                 mov ecx, esi
// 008ab7df  e886f7f5ff           call 0x80af6a
// 008ab7e4  57                   push edi
// 008ab7e5  8bce                 mov ecx, esi
// 008ab7e7  e802141200           call 0x9ccbee
// 008ab7ec  5f                   pop edi
// 008ab7ed  5e                   pop esi
// 008ab7ee  5d                   pop ebp
// 008ab7ef  5b                   pop ebx
// 008ab7f0  83c408               add esp, 8
// 008ab7f3  c21800               ret 0x18
// library xtp-15.2.1/Source\ReportControl\XTPReportPaintManager.cpp (function ?Line@CXTPReportPaintManager@@QAEXPAVCDC@@HHHHPAVCPen@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/ReportControl/XTPReportPaintManager.cpp
