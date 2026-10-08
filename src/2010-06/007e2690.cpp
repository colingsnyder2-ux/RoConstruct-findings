// roc 2010-06 007e2690  unit: VCXTPReportRows::?$CXTPHeapObjectT  size: 44 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 007e2690
//
// 007e2690  83ec08               sub esp, 8
// 007e2693  8b442410             mov eax, dword ptr [esp + 0x10]
// 007e2697  8b542414             mov edx, dword ptr [esp + 0x14]
// 007e269b  890424               mov dword ptr [esp], eax
// 007e269e  6a01                 push 1
// 007e26a0  8d442404             lea eax, [esp + 4]
// 007e26a4  89542408             mov dword ptr [esp + 8], edx
// 007e26a8  8b542410             mov edx, dword ptr [esp + 0x10]
// 007e26ac  50                   push eax
// 007e26ad  52                   push edx
// 007e26ae  83c12c               add ecx, 0x2c
// 007e26b1  e87af3ffff           call 0x7e1a30
// 007e26b6  83c408               add esp, 8
// 007e26b9  c20c00               ret 0xc
// library xtp-11.2.2/Source\ReportControl\XTPReportRows.cpp (function ?_InsertBlock@CXTPReportSelectedRows@@QAEXHHH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/ReportControl/XTPReportRows.cpp
