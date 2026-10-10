// roc 2008-06 006daa90  unit: VCXTPReportRows::?$CXTPHeapObjectT  size: 16 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006daa90
//
// 006daa90  8b01                 mov eax, dword ptr [ecx]
// 006daa92  8b908c000000         mov edx, dword ptr [eax + 0x8c]
// 006daa98  68e0a56d00           push 0x6da5e0
// 006daa9d  ffd2                 call edx
// 006daa9f  c3                   ret 
// library xtp-11.2.2-shared-mfc/Source\ReportControl\XTPReportRows.cpp (function ?Sort@CXTPReportRows@@UAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/ReportControl/XTPReportRows.cpp
