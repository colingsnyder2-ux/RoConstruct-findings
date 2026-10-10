// roc 2008-06 00420850  unit: CInstanceRecord::CNameItem  size: 19 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00420850
//
// 00420850  83794800             cmp dword ptr [ecx + 0x48], 0
// 00420854  740a                 je 0x420860
// 00420856  8b4948               mov ecx, dword ptr [ecx + 0x48]
// 00420859  8b01                 mov eax, dword ptr [ecx]
// 0042085b  8b5058               mov edx, dword ptr [eax + 0x58]
// 0042085e  ffe2                 jmp edx
// 00420860  33c0                 xor eax, eax
// 00420862  c3                   ret 
// library xtp-11.2.2-shared-mfc/Source\ReportControl\XTPReportRecordItemText.cpp (function ?GetHyperlinksCount@CXTPReportRecordItem@@UBEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/ReportControl/XTPReportRecordItemText.cpp
