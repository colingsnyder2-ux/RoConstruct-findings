// roc 2008-06 00750bc0  unit: VCXTPReportRow::?$CXTPHeapObjectT  size: 62 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00750bc0
//
// 00750bc0  56                   push esi
// 00750bc1  8bf1                 mov esi, ecx
// 00750bc3  8b06                 mov eax, dword ptr [esi]
// 00750bc5  8b9088000000         mov edx, dword ptr [eax + 0x88]
// 00750bcb  ffd2                 call edx
// 00750bcd  85c0                 test eax, eax
// 00750bcf  7529                 jne 0x750bfa
// 00750bd1  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 00750bd4  85c9                 test ecx, ecx
// 00750bd6  7422                 je 0x750bfa
// 00750bd8  8b4624               mov eax, dword ptr [esi + 0x24]
// 00750bdb  8b9000010000         mov edx, dword ptr [eax + 0x100]
// 00750be1  83ba7802000000       cmp dword ptr [edx + 0x278], 0
// 00750be8  7410                 je 0x750bfa
// 00750bea  e881fb0400           call 0x7a0770
// 00750bef  85c0                 test eax, eax
// 00750bf1  7407                 je 0x750bfa
// 00750bf3  b801000000           mov eax, 1
// 00750bf8  5e                   pop esi
// 00750bf9  c3                   ret 
// 00750bfa  33c0                 xor eax, eax
// 00750bfc  5e                   pop esi
// 00750bfd  c3                   ret 
// library xtp-11.2.2-shared-mfc/Source\ReportControl\XTPReportRow.cpp (function ?IsPreviewVisible@CXTPReportRow@@UBEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/ReportControl/XTPReportRow.cpp
