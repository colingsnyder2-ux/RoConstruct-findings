// roc 2009-12 0086d3c0  unit: CXTCaption  size: 50 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0086d3c0
//
// 0086d3c0  8b4130               mov eax, dword ptr [ecx + 0x30]
// 0086d3c3  83e801               sub eax, 1
// 0086d3c6  56                   push esi
// 0086d3c7  781d                 js 0x86d3e6
// 0086d3c9  8b542408             mov edx, dword ptr [esp + 8]
// 0086d3cd  8d4900               lea ecx, [ecx]
// 0086d3d0  85c0                 test eax, eax
// 0086d3d2  7c19                 jl 0x86d3ed
// 0086d3d4  3b4130               cmp eax, dword ptr [ecx + 0x30]
// 0086d3d7  7d14                 jge 0x86d3ed
// 0086d3d9  8b712c               mov esi, dword ptr [ecx + 0x2c]
// 0086d3dc  391486               cmp dword ptr [esi + eax*4], edx
// 0086d3df  7408                 je 0x86d3e9
// 0086d3e1  83e801               sub eax, 1
// 0086d3e4  79ea                 jns 0x86d3d0
// 0086d3e6  83c8ff               or eax, 0xffffffff
// 0086d3e9  5e                   pop esi
// 0086d3ea  c20400               ret 4
// 0086d3ed  e81a67f8ff           call 0x7f3b0c
// copied from an identical function in another client (function ?IndexOf@CXTPReportColumns@@QBEHPBVCXTPReportColumn@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/ReportControl/XTPReportColumns.cpp