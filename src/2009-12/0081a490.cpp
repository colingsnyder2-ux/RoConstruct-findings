// roc 2009-12 0081a490  unit: CInstanceRecord::CNameItem  size: 46 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0081a490
//
// 0081a490  85c9                 test ecx, ecx
// 0081a492  7427                 je 0x81a4bb
// 0081a494  8b414c               mov eax, dword ptr [ecx + 0x4c]
// 0081a497  85c0                 test eax, eax
// 0081a499  7420                 je 0x81a4bb
// 0081a49b  83784800             cmp dword ptr [eax + 0x48], 0
// 0081a49f  741a                 je 0x81a4bb
// 0081a4a1  83794400             cmp dword ptr [ecx + 0x44], 0
// 0081a4a5  7414                 je 0x81a4bb
// 0081a4a7  8b01                 mov eax, dword ptr [ecx]
// 0081a4a9  8b9004010000         mov edx, dword ptr [eax + 0x104]
// 0081a4af  ffd2                 call edx
// 0081a4b1  85c0                 test eax, eax
// 0081a4b3  7406                 je 0x81a4bb
// 0081a4b5  b801000000           mov eax, 1
// 0081a4ba  c3                   ret 
// 0081a4bb  33c0                 xor eax, eax
// 0081a4bd  c3                   ret 
// copied from an identical function in another client (function ?IsEditable@CXTPReportRecordItem@@UBEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/ReportControl/XTPReportRecordItem.cpp