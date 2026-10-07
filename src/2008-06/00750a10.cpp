// roc 2008-06 00750a10  unit: VCXTPReportRow::?$CXTPHeapObjectT  size: 75 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00750a10
//
// 00750a10  8b4170               mov eax, dword ptr [ecx + 0x70]
// 00750a13  83e800               sub eax, 0
// 00750a16  7431                 je 0x750a49
// 00750a18  83e801               sub eax, 1
// 00750a1b  741a                 je 0x750a37
// 00750a1d  83e801               sub eax, 1
// 00750a20  7403                 je 0x750a25
// 00750a22  33c0                 xor eax, eax
// 00750a24  c3                   ret 
// 00750a25  8b4124               mov eax, dword ptr [ecx + 0x24]
// 00750a28  8b9024010000         mov edx, dword ptr [eax + 0x124]
// 00750a2e  33c0                 xor eax, eax
// 00750a30  3b5128               cmp edx, dword ptr [ecx + 0x28]
// 00750a33  0f94c0               sete al
// 00750a36  c3                   ret 
// 00750a37  8b4124               mov eax, dword ptr [ecx + 0x24]
// 00750a3a  8b9020010000         mov edx, dword ptr [eax + 0x120]
// 00750a40  33c0                 xor eax, eax
// 00750a42  3b5128               cmp edx, dword ptr [ecx + 0x28]
// 00750a45  0f94c0               sete al
// 00750a48  c3                   ret 
// 00750a49  8b4124               mov eax, dword ptr [ecx + 0x24]
// 00750a4c  8b901c010000         mov edx, dword ptr [eax + 0x11c]
// 00750a52  33c0                 xor eax, eax
// 00750a54  3b5128               cmp edx, dword ptr [ecx + 0x28]
// 00750a57  0f94c0               sete al
// 00750a5a  c3                   ret 
// library xtp-11.2.2/Source\ReportControl\XTPReportRow.cpp (function ?IsFocused@CXTPReportRow@@UBEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/ReportControl/XTPReportRow.cpp
