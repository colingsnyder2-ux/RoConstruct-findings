// roc 2008-06 006c7000  unit: CInstanceRecord::CNameItem  size: 46 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006c7000
//
// 006c7000  85c9                 test ecx, ecx
// 006c7002  7427                 je 0x6c702b
// 006c7004  8b414c               mov eax, dword ptr [ecx + 0x4c]
// 006c7007  85c0                 test eax, eax
// 006c7009  7420                 je 0x6c702b
// 006c700b  83784800             cmp dword ptr [eax + 0x48], 0
// 006c700f  741a                 je 0x6c702b
// 006c7011  83794400             cmp dword ptr [ecx + 0x44], 0
// 006c7015  7414                 je 0x6c702b
// 006c7017  8b01                 mov eax, dword ptr [ecx]
// 006c7019  8b9004010000         mov edx, dword ptr [eax + 0x104]
// 006c701f  ffd2                 call edx
// 006c7021  85c0                 test eax, eax
// 006c7023  7406                 je 0x6c702b
// 006c7025  b801000000           mov eax, 1
// 006c702a  c3                   ret 
// 006c702b  33c0                 xor eax, eax
// 006c702d  c3                   ret 
// library xtp-11.2.2-shared-mfc/Source\ReportControl\XTPReportRecordItem.cpp (function ?IsEditable@CXTPReportRecordItem@@UBEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/ReportControl/XTPReportRecordItem.cpp
