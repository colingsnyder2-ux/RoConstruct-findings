// roc 2012-06 00a2b2d0  unit: VCXTPReportRow::?$CXTPHeapObjectT  size: 75 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a2b2d0
//
// 00a2b2d0  8b4170               mov eax, dword ptr [ecx + 0x70]
// 00a2b2d3  83e800               sub eax, 0
// 00a2b2d6  7431                 je 0xa2b309
// 00a2b2d8  83e801               sub eax, 1
// 00a2b2db  741a                 je 0xa2b2f7
// 00a2b2dd  83e801               sub eax, 1
// 00a2b2e0  7403                 je 0xa2b2e5
// 00a2b2e2  33c0                 xor eax, eax
// 00a2b2e4  c3                   ret 
// 00a2b2e5  8b4124               mov eax, dword ptr [ecx + 0x24]
// 00a2b2e8  8b9024010000         mov edx, dword ptr [eax + 0x124]
// 00a2b2ee  33c0                 xor eax, eax
// 00a2b2f0  3b5128               cmp edx, dword ptr [ecx + 0x28]
// 00a2b2f3  0f94c0               sete al
// 00a2b2f6  c3                   ret 
// 00a2b2f7  8b4124               mov eax, dword ptr [ecx + 0x24]
// 00a2b2fa  8b9020010000         mov edx, dword ptr [eax + 0x120]
// 00a2b300  33c0                 xor eax, eax
// 00a2b302  3b5128               cmp edx, dword ptr [ecx + 0x28]
// 00a2b305  0f94c0               sete al
// 00a2b308  c3                   ret 
// 00a2b309  8b4124               mov eax, dword ptr [ecx + 0x24]
// 00a2b30c  8b901c010000         mov edx, dword ptr [eax + 0x11c]
// 00a2b312  33c0                 xor eax, eax
// 00a2b314  3b5128               cmp edx, dword ptr [ecx + 0x28]
// 00a2b317  0f94c0               sete al
// 00a2b31a  c3                   ret 
// library xtp-11.2.2/Source\ReportControl\XTPReportRow.cpp (function ?IsFocused@CXTPReportRow@@UBEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/ReportControl/XTPReportRow.cpp
