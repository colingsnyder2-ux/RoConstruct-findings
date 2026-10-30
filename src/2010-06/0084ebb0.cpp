// roc 2010-06 0084ebb0  unit: CXTPReportPaintManager  size: 80 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0084ebb0
//
// 0084ebb0  8b8940020000         mov ecx, dword ptr [ecx + 0x240]
// 0084ebb6  83e1fb               and ecx, 0xfffffffb
// 0084ebb9  33c0                 xor eax, eax
// 0084ebbb  83f908               cmp ecx, 8
// 0084ebbe  771b                 ja 0x84ebdb
// 0084ebc0  ff248ddceb8400       jmp dword ptr [ecx*4 + 0x84ebdc]
// 0084ebc7  33c0                 xor eax, eax
// 0084ebc9  c3                   ret 
// 0084ebca  b801000000           mov eax, 1
// 0084ebcf  c3                   ret 
// 0084ebd0  b802000000           mov eax, 2
// 0084ebd5  c3                   ret 
// 0084ebd6  b808000000           mov eax, 8
// 0084ebdb  c3                   ret 
// copied from an identical function in another client (function ?GetHeaderRowsDividerHeight@CXTPReportPaintManager@@QAEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /MD /GS /EHsc
// roc-lib: xtp-11.2.2-shared-mfc Source/ReportControl/XTPReportPaintManager.cpp