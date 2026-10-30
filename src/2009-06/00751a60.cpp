// from server: 100% by tester
// roc 2008-06 006d99f0  unit: CXTPReportRecordItemText  size: 76 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006d99f0
//
// 006d99f0  56                   push esi
// 006d99f1  8bf1                 mov esi, ecx
// 006d99f3  8d4e7c               lea ecx, [esi + 0x7c]
// 006d99f6  ff15143f8000         call dword ptr [0x803f14]
// 006d99fc  8bce                 mov ecx, esi
// 006d99fe  e85dd2feff           call 0x6c6c60
// 006d9a03  f644240801           test byte ptr [esp + 8], 1
// 006d9a08  742c                 je 0x6d9a36
// 006d9a0a  833d14e1970000       cmp dword ptr [0x97e114], 0
// 006d9a11  740f                 je 0x6d9a22
// 006d9a13  56                   push esi
// 006d9a14  e86770d4ff           call 0x420a80
// 006d9a19  83c404               add esp, 4
// 006d9a1c  8bc6                 mov eax, esi
// 006d9a1e  5e                   pop esi
// 006d9a1f  c20400               ret 4
// 006d9a22  680ce19700           push 0x97e10c
// 006d9a27  ff15ac218000         call dword ptr [0x8021ac]
// 006d9a2d  56                   push esi
// 006d9a2e  e8476cfcff           call 0x6a067a
// 006d9a33  83c404               add esp, 4
// 006d9a36  8bc6                 mov eax, esi
// 006d9a38  5e                   pop esi
// 006d9a39  c20400               ret 4
// library xtp-11.2.2-shared-mfc/Source\ReportControl\XTPReportRecordItemText.cpp (function ??_GCXTPReportRecordItemText@@UAEPAXI@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/ReportControl/XTPReportRecordItemText.cpp
