// roc 2008-06 006cb0b0  unit: VCXTPReportRow::?$CXTPHeapObjectT  size: 81 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006cb0b0
//
// 006cb0b0  8b811c010000         mov eax, dword ptr [ecx + 0x11c]
// 006cb0b6  83f8ff               cmp eax, -1
// 006cb0b9  740f                 je 0x6cb0ca
// 006cb0bb  8b89e0000000         mov ecx, dword ptr [ecx + 0xe0]
// 006cb0c1  8b11                 mov edx, dword ptr [ecx]
// 006cb0c3  50                   push eax
// 006cb0c4  8b425c               mov eax, dword ptr [edx + 0x5c]
// 006cb0c7  ffd0                 call eax
// 006cb0c9  c3                   ret 
// 006cb0ca  8b8120010000         mov eax, dword ptr [ecx + 0x120]
// 006cb0d0  83f8ff               cmp eax, -1
// 006cb0d3  740f                 je 0x6cb0e4
// 006cb0d5  8b89f8000000         mov ecx, dword ptr [ecx + 0xf8]
// 006cb0db  8b11                 mov edx, dword ptr [ecx]
// 006cb0dd  50                   push eax
// 006cb0de  8b425c               mov eax, dword ptr [edx + 0x5c]
// 006cb0e1  ffd0                 call eax
// 006cb0e3  c3                   ret 
// 006cb0e4  8b8124010000         mov eax, dword ptr [ecx + 0x124]
// 006cb0ea  83f8ff               cmp eax, -1
// 006cb0ed  740f                 je 0x6cb0fe
// 006cb0ef  8b89fc000000         mov ecx, dword ptr [ecx + 0xfc]
// 006cb0f5  8b11                 mov edx, dword ptr [ecx]
// 006cb0f7  50                   push eax
// 006cb0f8  8b425c               mov eax, dword ptr [edx + 0x5c]
// 006cb0fb  ffd0                 call eax
// 006cb0fd  c3                   ret 
// 006cb0fe  33c0                 xor eax, eax
// 006cb100  c3                   ret 
// library xtp-11.2.2-shared-mfc/Source\ReportControl\XTPReportControl.cpp (function ?GetFocusedRow@CXTPReportControl@@QBEPAVCXTPReportRow@@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/ReportControl/XTPReportControl.cpp
