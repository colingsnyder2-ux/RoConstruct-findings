// from server: 100% by auto
// roc 2007-08 00653d70  unit: CInstanceRecord::CNameItem  size: 99 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00653d70
//
// 00653d70  83ec28               sub esp, 0x28
// 00653d73  33c0                 xor eax, eax
// 00653d75  89442424             mov dword ptr [esp + 0x24], eax
// 00653d79  8944240c             mov dword ptr [esp + 0xc], eax
// 00653d7d  89442410             mov dword ptr [esp + 0x10], eax
// 00653d81  89442414             mov dword ptr [esp + 0x14], eax
// 00653d85  890424               mov dword ptr [esp], eax
// 00653d88  89442404             mov dword ptr [esp + 4], eax
// 00653d8c  89442408             mov dword ptr [esp + 8], eax
// 00653d90  89442418             mov dword ptr [esp + 0x18], eax
// 00653d94  8944241c             mov dword ptr [esp + 0x1c], eax
// 00653d98  89442420             mov dword ptr [esp + 0x20], eax
// 00653d9c  89442424             mov dword ptr [esp + 0x24], eax
// 00653da0  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 00653da4  8b500c               mov edx, dword ptr [eax + 0xc]
// 00653da7  894c2410             mov dword ptr [esp + 0x10], ecx
// 00653dab  8b4808               mov ecx, dword ptr [eax + 8]
// 00653dae  894c240c             mov dword ptr [esp + 0xc], ecx
// 00653db2  8d0c24               lea ecx, [esp]
// 00653db5  51                   push ecx
// 00653db6  8b4804               mov ecx, dword ptr [eax + 4]
// 00653db9  6ac2                 push -0x3e
// 00653dbb  8954241c             mov dword ptr [esp + 0x1c], edx
// 00653dbf  e8bc6e0000           call 0x65ac80
// 00653dc4  33c0                 xor eax, eax
// 00653dc6  39442424             cmp dword ptr [esp + 0x24], eax
// 00653dca  0f94c0               sete al
// 00653dcd  83c428               add esp, 0x28
// 00653dd0  c20400               ret 4
// library xtp-11.2.2-vc8/Source\ReportControl\XTPReportRecordItem.cpp (function ?OnRequestEdit@CXTPReportRecordItem@@MAEHPAUXTP_REPORTRECORDITEM_ARGS@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/ReportControl/XTPReportRecordItem.cpp
