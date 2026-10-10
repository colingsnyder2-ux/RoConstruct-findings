// from server: 100% by tester
// roc 2008-06 006c71a0  unit: XTP_REPORTRECORDITEM_METRICS  size: 41 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006c71a0
//
// 006c71a0  56                   push esi
// 006c71a1  8bf1                 mov esi, ecx
// 006c71a3  8d4e2c               lea ecx, [esi + 0x2c]
// 006c71a6  ff15143f8000         call dword ptr [0x803f14]
// 006c71ac  8bce                 mov ecx, esi
// 006c71ae  e8839ffdff           call 0x6a1136
// 006c71b3  f644240801           test byte ptr [esp + 8], 1
// 006c71b8  7409                 je 0x6c71c3
// 006c71ba  56                   push esi
// 006c71bb  e8ba94fdff           call 0x6a067a
// 006c71c0  83c404               add esp, 4
// 006c71c3  8bc6                 mov eax, esi
// 006c71c5  5e                   pop esi
// 006c71c6  c20400               ret 4
// library xtp-11.2.2-shared-mfc/Source\ReportControl\XTPReportControl.cpp (function ??_GXTP_REPORTRECORDITEM_METRICS@@UAEPAXI@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/ReportControl/XTPReportControl.cpp
