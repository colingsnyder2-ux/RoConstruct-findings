// roc 2009-12 0082e0c0  unit: VCXTPReportRows::?$CXTPHeapObjectT  size: 16 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0082e0c0
//
// 0082e0c0  8b01                 mov eax, dword ptr [ecx]
// 0082e0c2  8b908c000000         mov edx, dword ptr [eax + 0x8c]
// 0082e0c8  6810dc8200           push 0x82dc10
// 0082e0cd  ffd2                 call edx
// 0082e0cf  c3                   ret 
// copied from an identical function in another client (function ?Sort@CXTPReportRows@@UAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/ReportControl/XTPReportRows.cpp