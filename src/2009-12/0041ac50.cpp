// roc 2009-12 0041ac50  unit: CInstanceRecord::CNameItem  size: 21 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0041ac50
//
// 0041ac50  83794800             cmp dword ptr [ecx + 0x48], 0
// 0041ac54  740a                 je 0x41ac60
// 0041ac56  8b4948               mov ecx, dword ptr [ecx + 0x48]
// 0041ac59  8b01                 mov eax, dword ptr [ecx]
// 0041ac5b  8b4060               mov eax, dword ptr [eax + 0x60]
// 0041ac5e  ffe0                 jmp eax
// 0041ac60  33c0                 xor eax, eax
// 0041ac62  c20400               ret 4
// copied from an identical function in another client (function ?GetHyperlinkAt@CXTPReportRecordItem@@UBEPAVCXTPReportHyperlink@@H@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/ReportControl/XTPReportRecordItem.cpp