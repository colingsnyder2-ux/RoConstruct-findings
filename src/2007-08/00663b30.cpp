// roc 2007-08 00663b30  unit: VCXTPReportRows::?$CXTPHeapObjectT  size: 16 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00663b30
//
// 00663b30  8b01                 mov eax, dword ptr [ecx]
// 00663b32  8b9084000000         mov edx, dword ptr [eax + 0x84]
// 00663b38  68c0396600           push 0x6639c0
// 00663b3d  ffd2                 call edx
// 00663b3f  c3                   ret 
// library xtp-11.2.2-vc8/Source\ReportControl\XTPReportRows.cpp (function ?Sort@CXTPReportRows@@UAEXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/ReportControl/XTPReportRows.cpp
