// roc 2009-12 008a13a0  unit: CXTPReportInplaceEdit  size: 42 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008a13a0
//
// 008a13a0  56                   push esi
// 008a13a1  8bf1                 mov esi, ecx
// 008a13a3  837e5800             cmp dword ptr [esi + 0x58], 0
// 008a13a7  741f                 je 0x8a13c8
// 008a13a9  837e6400             cmp dword ptr [esi + 0x64], 0
// 008a13ad  7419                 je 0x8a13c8
// 008a13af  8b4e64               mov ecx, dword ptr [esi + 0x64]
// 008a13b2  8b11                 mov edx, dword ptr [ecx]
// 008a13b4  8d4654               lea eax, [esi + 0x54]
// 008a13b7  50                   push eax
// 008a13b8  8b8224010000         mov eax, dword ptr [edx + 0x124]
// 008a13be  ffd0                 call eax
// 008a13c0  8bce                 mov ecx, esi
// 008a13c2  5e                   pop esi
// 008a13c3  e978ffffff           jmp 0x8a1340
// 008a13c8  5e                   pop esi
// 008a13c9  c3                   ret 
// copied from an identical function in another client (function ?OnEnKillfocus@CXTPReportInplaceEdit@@IAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\ReportControl\XTPReportInplaceControls.cpp