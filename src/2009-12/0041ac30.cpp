// roc 2009-12 0041ac30  unit: CInstanceRecord::CNameItem  size: 19 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0041ac30
//
// 0041ac30  83794800             cmp dword ptr [ecx + 0x48], 0
// 0041ac34  740a                 je 0x41ac40
// 0041ac36  8b4948               mov ecx, dword ptr [ecx + 0x48]
// 0041ac39  8b01                 mov eax, dword ptr [ecx]
// 0041ac3b  8b5058               mov edx, dword ptr [eax + 0x58]
// 0041ac3e  ffe2                 jmp edx
// 0041ac40  33c0                 xor eax, eax
// 0041ac42  c3                   ret 
// copied from an identical function in another client (function ?GetHyperlinksCount@CXTPReportRecordItem@@UBEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/ReportControl/XTPReportRecordItem.cpp