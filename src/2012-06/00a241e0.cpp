// roc 2012-06 00a241e0  unit: CXTPReportPaintManager  size: 80 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a241e0
//
// 00a241e0  8b8944020000         mov ecx, dword ptr [ecx + 0x244]
// 00a241e6  83e1fb               and ecx, 0xfffffffb
// 00a241e9  33c0                 xor eax, eax
// 00a241eb  83f908               cmp ecx, 8
// 00a241ee  771b                 ja 0xa2420b
// 00a241f0  ff248d0c42a200       jmp dword ptr [ecx*4 + 0xa2420c]
// 00a241f7  33c0                 xor eax, eax
// 00a241f9  c3                   ret 
// 00a241fa  b801000000           mov eax, 1
// 00a241ff  c3                   ret 
// 00a24200  b802000000           mov eax, 2
// 00a24205  c3                   ret 
// 00a24206  b808000000           mov eax, 8
// 00a2420b  c3                   ret 
// 00a2420c  f741a200fa41a2       test dword ptr [ecx - 0x5e], 0xa241fa00
// 00a24213  0000                 add byte ptr [eax], al
// 00a24215  42                   inc edx
// 00a24216  a2000b42a2           mov byte ptr [0xa2420b00], al
// 00a2421b  000b                 add byte ptr [ebx], cl
// 00a2421d  42                   inc edx
// 00a2421e  a2000b42a2           mov byte ptr [0xa2420b00], al
// 00a24223  000b                 add byte ptr [ebx], cl
// 00a24225  42                   inc edx
// 00a24226  a2000b42a2           mov byte ptr [0xa2420b00], al
// 00a2422b  0006                 add byte ptr [esi], al
// 00a2422d  42                   inc edx
// copied from an identical function in another client (function ?GetFooterRowsDividerHeight@CXTPReportPaintManager@@QAEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /MD /GS /EHsc
// roc-lib: xtp-11.2.2-shared-mfc Source/ReportControl/XTPReportPaintManager.cpp