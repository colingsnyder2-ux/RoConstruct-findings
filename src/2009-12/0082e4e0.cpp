// roc 2009-12 0082e4e0  unit: VCXTPReportRows::?$CXTPHeapObjectT  size: 44 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0082e4e0
//
// 0082e4e0  83ec08               sub esp, 8
// 0082e4e3  8b442410             mov eax, dword ptr [esp + 0x10]
// 0082e4e7  8b542414             mov edx, dword ptr [esp + 0x14]
// 0082e4eb  890424               mov dword ptr [esp], eax
// 0082e4ee  6a01                 push 1
// 0082e4f0  8d442404             lea eax, [esp + 4]
// 0082e4f4  89542408             mov dword ptr [esp + 8], edx
// 0082e4f8  8b542410             mov edx, dword ptr [esp + 0x10]
// 0082e4fc  50                   push eax
// 0082e4fd  52                   push edx
// 0082e4fe  83c12c               add ecx, 0x2c
// 0082e501  e87af3ffff           call 0x82d880
// 0082e506  83c408               add esp, 8
// 0082e509  c20c00               ret 0xc
// library xtp-11.2.2/Source\ReportControl\XTPReportRows.cpp (function ?_InsertBlock@CXTPReportSelectedRows@@QAEXHHH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/ReportControl/XTPReportRows.cpp
