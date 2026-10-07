// roc 2011-06 008448c0  unit: CXTPReportSelectedRows  size: 18 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008448c0
//
// 008448c0  8bc1                 mov eax, ecx
// 008448c2  83c9ff               or ecx, 0xffffffff
// 008448c5  c700c062ac00         mov dword ptr [eax], 0xac62c0
// 008448cb  894804               mov dword ptr [eax + 4], ecx
// 008448ce  894808               mov dword ptr [eax + 8], ecx
// 008448d1  c3                   ret 
// library xtp-15.2.1/Source\Common\XTPColorManager.cpp (function ??0CXTPPaintManagerColor@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Common/XTPColorManager.cpp
