// from server: 100% by auto
// roc 2008-06 00746470  unit: CXTPDockContext  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00746470
//
// 00746470  56                   push esi
// 00746471  8bf1                 mov esi, ecx
// 00746473  e8325b0700           call 0x7bbfaa
// 00746478  b801000000           mov eax, 1
// 0074647d  894620               mov dword ptr [esi + 0x20], eax
// 00746480  894624               mov dword ptr [esi + 0x24], eax
// 00746483  c706543c8600         mov dword ptr [esi], 0x863c54
// 00746489  c7462800000000       mov dword ptr [esi + 0x28], 0
// 00746490  8bc6                 mov eax, esi
// 00746492  5e                   pop esi
// 00746493  c3                   ret 
// library xtp-11.2.2/Source\ReportControl\XTPReportPaintManager.cpp (function ??0CXTPFormulaMulDivC@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/ReportControl/XTPReportPaintManager.cpp
