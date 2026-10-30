// roc 2009-12 008a3fd0  unit: VCXTPReportRow::?$CXTPHeapObjectT  size: 62 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008a3fd0
//
// 008a3fd0  56                   push esi
// 008a3fd1  8bf1                 mov esi, ecx
// 008a3fd3  8b06                 mov eax, dword ptr [esi]
// 008a3fd5  8b9088000000         mov edx, dword ptr [eax + 0x88]
// 008a3fdb  ffd2                 call edx
// 008a3fdd  85c0                 test eax, eax
// 008a3fdf  7529                 jne 0x8a400a
// 008a3fe1  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 008a3fe4  85c9                 test ecx, ecx
// 008a3fe6  7422                 je 0x8a400a
// 008a3fe8  8b4624               mov eax, dword ptr [esi + 0x24]
// 008a3feb  8b9000010000         mov edx, dword ptr [eax + 0x100]
// 008a3ff1  83ba7802000000       cmp dword ptr [edx + 0x278], 0
// 008a3ff8  7410                 je 0x8a400a
// 008a3ffa  e89167fbff           call 0x85a790
// 008a3fff  85c0                 test eax, eax
// 008a4001  7407                 je 0x8a400a
// 008a4003  b801000000           mov eax, 1
// 008a4008  5e                   pop esi
// 008a4009  c3                   ret 
// 008a400a  33c0                 xor eax, eax
// 008a400c  5e                   pop esi
// 008a400d  c3                   ret 
// copied from an identical function in another client (function ?IsPreviewVisible@CXTPReportRow@@UBEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/ReportControl/XTPReportRow.cpp