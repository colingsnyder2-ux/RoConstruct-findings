// roc 2012-06 00a24190  unit: CXTPReportPaintManager  size: 80 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a24190
//
// 00a24190  8b8940020000         mov ecx, dword ptr [ecx + 0x240]
// 00a24196  83e1fb               and ecx, 0xfffffffb
// 00a24199  33c0                 xor eax, eax
// 00a2419b  83f908               cmp ecx, 8
// 00a2419e  771b                 ja 0xa241bb
// 00a241a0  ff248dbc41a200       jmp dword ptr [ecx*4 + 0xa241bc]
// 00a241a7  33c0                 xor eax, eax
// 00a241a9  c3                   ret 
// 00a241aa  b801000000           mov eax, 1
// 00a241af  c3                   ret 
// 00a241b0  b802000000           mov eax, 2
// 00a241b5  c3                   ret 
// 00a241b6  b808000000           mov eax, 8
// 00a241bb  c3                   ret 
// 00a241bc  a7                   cmpsd dword ptr [esi], dword ptr es:[edi]
// 00a241bd  41                   inc ecx
// 00a241be  a200aa41a2           mov byte ptr [0xa241aa00], al
// 00a241c3  00b041a200bb         add byte ptr [eax - 0x44ff5dbf], dh
// 00a241c9  41                   inc ecx
// 00a241ca  a200bb41a2           mov byte ptr [0xa241bb00], al
// 00a241cf  00bb41a200bb         add byte ptr [ebx - 0x44ff5dbf], bh
// 00a241d5  41                   inc ecx
// 00a241d6  a200bb41a2           mov byte ptr [0xa241bb00], al
// copied from an identical function in another client (function ?GetHeaderRowsDividerHeight@CXTPReportPaintManager@@QAEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /MD /GS /EHsc
// roc-lib: xtp-11.2.2-shared-mfc Source/ReportControl/XTPReportPaintManager.cpp