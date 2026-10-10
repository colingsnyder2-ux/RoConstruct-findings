// roc 2008-06 00420870  unit: CInstanceRecord::CNameItem  size: 21 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00420870
//
// 00420870  83794800             cmp dword ptr [ecx + 0x48], 0
// 00420874  740a                 je 0x420880
// 00420876  8b4948               mov ecx, dword ptr [ecx + 0x48]
// 00420879  8b01                 mov eax, dword ptr [ecx]
// 0042087b  8b4060               mov eax, dword ptr [eax + 0x60]
// 0042087e  ffe0                 jmp eax
// 00420880  33c0                 xor eax, eax
// 00420882  c20400               ret 4
// library xtp-11.2.2-shared-mfc/Source\ReportControl\XTPReportRecordItemText.cpp (function ?GetHyperlinkAt@CXTPReportRecordItem@@UBEPAVCXTPReportHyperlink@@H@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/ReportControl/XTPReportRecordItemText.cpp
