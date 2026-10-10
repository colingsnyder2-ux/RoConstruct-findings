// roc 2008-06 00420890  unit: CInstanceRecord::CNameItem  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00420890
//
// 00420890  83794800             cmp dword ptr [ecx + 0x48], 0
// 00420894  740d                 je 0x4208a3
// 00420896  8b4948               mov ecx, dword ptr [ecx + 0x48]
// 00420899  8b01                 mov eax, dword ptr [ecx]
// 0042089b  8b80bc000000         mov eax, dword ptr [eax + 0xbc]
// 004208a1  ffe0                 jmp eax
// 004208a3  c20400               ret 4
// library xtp-11.2.2-shared-mfc/Source\ReportControl\XTPReportRecordItemText.cpp (function ?RemoveHyperlinkAt@CXTPReportRecordItem@@UAEXH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/ReportControl/XTPReportRecordItemText.cpp
