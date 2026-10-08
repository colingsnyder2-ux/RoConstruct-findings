// from server: 100% by auto
// roc 2007-08 006641e0  unit: VCXTPReportRows::?$CXTPHeapObjectT  size: 44 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006641e0
//
// 006641e0  83ec08               sub esp, 8
// 006641e3  8b442410             mov eax, dword ptr [esp + 0x10]
// 006641e7  8b542414             mov edx, dword ptr [esp + 0x14]
// 006641eb  890424               mov dword ptr [esp], eax
// 006641ee  6a01                 push 1
// 006641f0  8d442404             lea eax, [esp + 4]
// 006641f4  89542408             mov dword ptr [esp + 8], edx
// 006641f8  8b542410             mov edx, dword ptr [esp + 0x10]
// 006641fc  50                   push eax
// 006641fd  52                   push edx
// 006641fe  83c12c               add ecx, 0x2c
// 00664201  e8eafbffff           call 0x663df0
// 00664206  83c408               add esp, 8
// 00664209  c20c00               ret 0xc
// library xtp-11.2.2-vc8/Source\ReportControl\XTPReportRows.cpp (function ?_InsertBlock@CXTPReportSelectedRows@@QAEXHHH@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/ReportControl/XTPReportRows.cpp
