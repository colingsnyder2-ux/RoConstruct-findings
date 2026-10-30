// roc 2009-12 0041ac70  unit: CInstanceRecord::CNameItem  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0041ac70
//
// 0041ac70  83794800             cmp dword ptr [ecx + 0x48], 0
// 0041ac74  740d                 je 0x41ac83
// 0041ac76  8b4948               mov ecx, dword ptr [ecx + 0x48]
// 0041ac79  8b01                 mov eax, dword ptr [ecx]
// 0041ac7b  8b80bc000000         mov eax, dword ptr [eax + 0xbc]
// 0041ac81  ffe0                 jmp eax
// 0041ac83  c20400               ret 4
// copied from an identical function in another client (function ?RemoveHyperlinkAt@CXTPReportRecordItem@@UAEXH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/ReportControl/XTPReportRecordItem.cpp