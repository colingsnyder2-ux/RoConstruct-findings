// roc 2008-06 006c70f0  unit: CInstanceRecord::CNameItem  size: 99 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006c70f0
//
// 006c70f0  83ec28               sub esp, 0x28
// 006c70f3  33c0                 xor eax, eax
// 006c70f5  89442424             mov dword ptr [esp + 0x24], eax
// 006c70f9  8944240c             mov dword ptr [esp + 0xc], eax
// 006c70fd  89442410             mov dword ptr [esp + 0x10], eax
// 006c7101  89442414             mov dword ptr [esp + 0x14], eax
// 006c7105  890424               mov dword ptr [esp], eax
// 006c7108  89442404             mov dword ptr [esp + 4], eax
// 006c710c  89442408             mov dword ptr [esp + 8], eax
// 006c7110  89442418             mov dword ptr [esp + 0x18], eax
// 006c7114  8944241c             mov dword ptr [esp + 0x1c], eax
// 006c7118  89442420             mov dword ptr [esp + 0x20], eax
// 006c711c  89442424             mov dword ptr [esp + 0x24], eax
// 006c7120  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 006c7124  8b500c               mov edx, dword ptr [eax + 0xc]
// 006c7127  894c2410             mov dword ptr [esp + 0x10], ecx
// 006c712b  8b4808               mov ecx, dword ptr [eax + 8]
// 006c712e  894c240c             mov dword ptr [esp + 0xc], ecx
// 006c7132  8d0c24               lea ecx, [esp]
// 006c7135  51                   push ecx
// 006c7136  8b4804               mov ecx, dword ptr [eax + 4]
// 006c7139  6ac2                 push -0x3e
// 006c713b  8954241c             mov dword ptr [esp + 0x1c], edx
// 006c713f  e8dc8b0000           call 0x6cfd20
// 006c7144  33c0                 xor eax, eax
// 006c7146  39442424             cmp dword ptr [esp + 0x24], eax
// 006c714a  0f94c0               sete al
// 006c714d  83c428               add esp, 0x28
// 006c7150  c20400               ret 4
// library xtp-11.2.2/Source\ReportControl\XTPReportRecordItem.cpp (function ?OnRequestEdit@CXTPReportRecordItem@@MAEHPAUXTP_REPORTRECORDITEM_ARGS@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/ReportControl/XTPReportRecordItem.cpp
