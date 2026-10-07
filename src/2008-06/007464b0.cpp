// roc 2008-06 007464b0  unit: CXTPFormulaMulDivC  size: 33 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007464b0
//
// 007464b0  8b4124               mov eax, dword ptr [ecx + 0x24]
// 007464b3  56                   push esi
// 007464b4  8bf0                 mov esi, eax
// 007464b6  85c0                 test eax, eax
// 007464b8  7505                 jne 0x7464bf
// 007464ba  be01000000           mov esi, 1
// 007464bf  8b4120               mov eax, dword ptr [ecx + 0x20]
// 007464c2  0faf442408           imul eax, dword ptr [esp + 8]
// 007464c7  99                   cdq 
// 007464c8  f7fe                 idiv esi
// 007464ca  5e                   pop esi
// 007464cb  034128               add eax, dword ptr [ecx + 0x28]
// 007464ce  c20400               ret 4
// library xtp-11.2.2/Source\ReportControl\XTPReportPaintManager.cpp (function ?Calculate@CXTPFormulaMulDivC@@UBEHH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/ReportControl/XTPReportPaintManager.cpp
