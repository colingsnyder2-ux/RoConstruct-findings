// from server: 100% by auto
// roc 2008-06 006daeb0  unit: VCXTPReportRows::?$CXTPHeapObjectT  size: 44 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006daeb0
//
// 006daeb0  83ec08               sub esp, 8
// 006daeb3  8b442410             mov eax, dword ptr [esp + 0x10]
// 006daeb7  8b542414             mov edx, dword ptr [esp + 0x14]
// 006daebb  890424               mov dword ptr [esp], eax
// 006daebe  6a01                 push 1
// 006daec0  8d442404             lea eax, [esp + 4]
// 006daec4  89542408             mov dword ptr [esp + 8], edx
// 006daec8  8b542410             mov edx, dword ptr [esp + 0x10]
// 006daecc  50                   push eax
// 006daecd  52                   push edx
// 006daece  83c12c               add ecx, 0x2c
// 006daed1  e82af4ffff           call 0x6da300
// 006daed6  83c408               add esp, 8
// 006daed9  c20c00               ret 0xc
// library xtp-11.2.2/Source\ReportControl\XTPReportRows.cpp (function ?_InsertBlock@CXTPReportSelectedRows@@QAEXHHH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/ReportControl/XTPReportRows.cpp
