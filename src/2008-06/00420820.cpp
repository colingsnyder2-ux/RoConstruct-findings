// roc 2008-06 00420820  unit: CInstanceRecord::CNameItem  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00420820
//
// 00420820  56                   push esi
// 00420821  8bf1                 mov esi, ecx
// 00420823  e818832a00           call 0x6c8b40
// 00420828  85c0                 test eax, eax
// 0042082a  7411                 je 0x42083d
// 0042082c  8bce                 mov ecx, esi
// 0042082e  e80d832a00           call 0x6c8b40
// 00420833  8b10                 mov edx, dword ptr [eax]
// 00420835  5e                   pop esi
// 00420836  8bc8                 mov ecx, eax
// 00420838  8b5278               mov edx, dword ptr [edx + 0x78]
// 0042083b  ffe2                 jmp edx
// 0042083d  83c8ff               or eax, 0xffffffff
// 00420840  5e                   pop esi
// 00420841  c20400               ret 4
// library xtp-11.2.2-shared-mfc/Source\ReportControl\XTPReportRecordItemText.cpp (function ?AddHyperlink@CXTPReportRecordItem@@UAEHPAVCXTPReportHyperlink@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/ReportControl/XTPReportRecordItemText.cpp
