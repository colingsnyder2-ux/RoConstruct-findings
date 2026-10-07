// roc 2012-06 009b7120  unit: CInstanceRecord::CNameItem  size: 99 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009b7120
//
// 009b7120  83ec28               sub esp, 0x28
// 009b7123  33c0                 xor eax, eax
// 009b7125  89442424             mov dword ptr [esp + 0x24], eax
// 009b7129  8944240c             mov dword ptr [esp + 0xc], eax
// 009b712d  89442410             mov dword ptr [esp + 0x10], eax
// 009b7131  89442414             mov dword ptr [esp + 0x14], eax
// 009b7135  890424               mov dword ptr [esp], eax
// 009b7138  89442404             mov dword ptr [esp + 4], eax
// 009b713c  89442408             mov dword ptr [esp + 8], eax
// 009b7140  89442418             mov dword ptr [esp + 0x18], eax
// 009b7144  8944241c             mov dword ptr [esp + 0x1c], eax
// 009b7148  89442420             mov dword ptr [esp + 0x20], eax
// 009b714c  89442424             mov dword ptr [esp + 0x24], eax
// 009b7150  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 009b7154  8b500c               mov edx, dword ptr [eax + 0xc]
// 009b7157  894c2410             mov dword ptr [esp + 0x10], ecx
// 009b715b  8b4808               mov ecx, dword ptr [eax + 8]
// 009b715e  894c240c             mov dword ptr [esp + 0xc], ecx
// 009b7162  8d0c24               lea ecx, [esp]
// 009b7165  51                   push ecx
// 009b7166  8b4804               mov ecx, dword ptr [eax + 4]
// 009b7169  6ac2                 push -0x3e
// 009b716b  8954241c             mov dword ptr [esp + 0x1c], edx
// 009b716f  e8fc88ffff           call 0x9afa70
// 009b7174  33c0                 xor eax, eax
// 009b7176  39442424             cmp dword ptr [esp + 0x24], eax
// 009b717a  0f94c0               sete al
// 009b717d  83c428               add esp, 0x28
// 009b7180  c20400               ret 4
// library xtp-15.2.1/Source\ReportControl\XTPReportRecordItem.cpp (function ?OnRequestEdit@CXTPReportRecordItem@@MAEHPAUXTP_REPORTRECORDITEM_ARGS@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/ReportControl/XTPReportRecordItem.cpp
