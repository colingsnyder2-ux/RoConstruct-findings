// roc 2008-06 006d1500  unit: CXTPReportGroupRow_Batch  size: 38 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006d1500
//
// 006d1500  56                   push esi
// 006d1501  8bf1                 mov esi, ecx
// 006d1503  8d4e74               lea ecx, [esi + 0x74]
// 006d1506  ff15143f8000         call dword ptr [0x803f14]
// 006d150c  8bce                 mov ecx, esi
// 006d150e  e88df40700           call 0x7509a0
// 006d1513  f644240801           test byte ptr [esp + 8], 1
// 006d1518  7406                 je 0x6d1520
// 006d151a  56                   push esi
// 006d151b  e840ecffff           call 0x6d0160
// 006d1520  8bc6                 mov eax, esi
// 006d1522  5e                   pop esi
// 006d1523  c20400               ret 4
// library xtp-11.2.2-shared-mfc/Source\ReportControl\XTPReportControl.cpp (function ??_GCXTPReportGroupRow_Batch@@UAEPAXI@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/ReportControl/XTPReportControl.cpp
