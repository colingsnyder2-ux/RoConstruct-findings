// roc 2009-12 0081e560  unit: VCXTPReportRow::?$CXTPHeapObjectT  size: 81 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0081e560
//
// 0081e560  8b811c010000         mov eax, dword ptr [ecx + 0x11c]
// 0081e566  83f8ff               cmp eax, -1
// 0081e569  740f                 je 0x81e57a
// 0081e56b  8b89e0000000         mov ecx, dword ptr [ecx + 0xe0]
// 0081e571  8b11                 mov edx, dword ptr [ecx]
// 0081e573  50                   push eax
// 0081e574  8b425c               mov eax, dword ptr [edx + 0x5c]
// 0081e577  ffd0                 call eax
// 0081e579  c3                   ret 
// 0081e57a  8b8120010000         mov eax, dword ptr [ecx + 0x120]
// 0081e580  83f8ff               cmp eax, -1
// 0081e583  740f                 je 0x81e594
// 0081e585  8b89f8000000         mov ecx, dword ptr [ecx + 0xf8]
// 0081e58b  8b11                 mov edx, dword ptr [ecx]
// 0081e58d  50                   push eax
// 0081e58e  8b425c               mov eax, dword ptr [edx + 0x5c]
// 0081e591  ffd0                 call eax
// 0081e593  c3                   ret 
// 0081e594  8b8124010000         mov eax, dword ptr [ecx + 0x124]
// 0081e59a  83f8ff               cmp eax, -1
// 0081e59d  740f                 je 0x81e5ae
// 0081e59f  8b89fc000000         mov ecx, dword ptr [ecx + 0xfc]
// 0081e5a5  8b11                 mov edx, dword ptr [ecx]
// 0081e5a7  50                   push eax
// 0081e5a8  8b425c               mov eax, dword ptr [edx + 0x5c]
// 0081e5ab  ffd0                 call eax
// 0081e5ad  c3                   ret 
// 0081e5ae  33c0                 xor eax, eax
// 0081e5b0  c3                   ret 
// copied from an identical function in another client (function ?GetFocusedRow@CXTPReportControl@@QBEPAVCXTPReportRow@@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/ReportControl/XTPReportControl.cpp