// roc 2012-06 00a23cf0  unit: CXTPFormulaMulDivC  size: 33 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a23cf0
//
// 00a23cf0  8b4124               mov eax, dword ptr [ecx + 0x24]
// 00a23cf3  56                   push esi
// 00a23cf4  8bf0                 mov esi, eax
// 00a23cf6  85c0                 test eax, eax
// 00a23cf8  7505                 jne 0xa23cff
// 00a23cfa  be01000000           mov esi, 1
// 00a23cff  8b4120               mov eax, dword ptr [ecx + 0x20]
// 00a23d02  0faf442408           imul eax, dword ptr [esp + 8]
// 00a23d07  99                   cdq 
// 00a23d08  f7fe                 idiv esi
// 00a23d0a  5e                   pop esi
// 00a23d0b  034128               add eax, dword ptr [ecx + 0x28]
// 00a23d0e  c20400               ret 4
// library xtp-13.2.1/Source\ReportControl\XTPReportPaintManager.cpp (function ?Calculate@CXTPFormulaMulDivC@@UBEHH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-13.2.1 Source/ReportControl/XTPReportPaintManager.cpp
