// roc 2009-06 004110e0  unit: CRbxChildFrame  size: 17 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 004110e0
//
// 004110e0  8b442408             mov eax, dword ptr [esp + 8]
// 004110e4  8b10                 mov edx, dword ptr [eax]
// 004110e6  8b4c2404             mov ecx, dword ptr [esp + 4]
// 004110ea  3b11                 cmp edx, dword ptr [ecx]
// 004110ec  7c02                 jl 0x4110f0
// 004110ee  8bc1                 mov eax, ecx
// 004110f0  c3                   ret 
// library boost-1.34.1/libs\regex\src\cregex.cpp (function ??$min@H@std@@YAABHABH0@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/regex/src/cregex.cpp
