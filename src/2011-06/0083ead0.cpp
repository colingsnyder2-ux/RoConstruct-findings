// roc 2011-06 0083ead0  unit: CInstanceRecord::CNameItem  size: 99 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0083ead0
//
// 0083ead0  83ec28               sub esp, 0x28
// 0083ead3  33c0                 xor eax, eax
// 0083ead5  89442424             mov dword ptr [esp + 0x24], eax
// 0083ead9  8944240c             mov dword ptr [esp + 0xc], eax
// 0083eadd  89442410             mov dword ptr [esp + 0x10], eax
// 0083eae1  89442414             mov dword ptr [esp + 0x14], eax
// 0083eae5  890424               mov dword ptr [esp], eax
// 0083eae8  89442404             mov dword ptr [esp + 4], eax
// 0083eaec  89442408             mov dword ptr [esp + 8], eax
// 0083eaf0  89442418             mov dword ptr [esp + 0x18], eax
// 0083eaf4  8944241c             mov dword ptr [esp + 0x1c], eax
// 0083eaf8  89442420             mov dword ptr [esp + 0x20], eax
// 0083eafc  89442424             mov dword ptr [esp + 0x24], eax
// 0083eb00  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 0083eb04  8b500c               mov edx, dword ptr [eax + 0xc]
// 0083eb07  894c2410             mov dword ptr [esp + 0x10], ecx
// 0083eb0b  8b4808               mov ecx, dword ptr [eax + 8]
// 0083eb0e  894c240c             mov dword ptr [esp + 0xc], ecx
// 0083eb12  8d0c24               lea ecx, [esp]
// 0083eb15  51                   push ecx
// 0083eb16  8b4804               mov ecx, dword ptr [eax + 4]
// 0083eb19  6ac2                 push -0x3e
// 0083eb1b  8954241c             mov dword ptr [esp + 0x1c], edx
// 0083eb1f  e83c89ffff           call 0x837460
// 0083eb24  33c0                 xor eax, eax
// 0083eb26  39442424             cmp dword ptr [esp + 0x24], eax
// 0083eb2a  0f94c0               sete al
// 0083eb2d  83c428               add esp, 0x28
// 0083eb30  c20400               ret 4
// library xtp-15.2.1/Source\ReportControl\XTPReportRecordItem.cpp (function ?OnRequestEdit@CXTPReportRecordItem@@MAEHPAUXTP_REPORTRECORDITEM_ARGS@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/ReportControl/XTPReportRecordItem.cpp
