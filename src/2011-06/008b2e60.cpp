// roc 2011-06 008b2e60  unit: VCXTPReportRow::?$CXTPHeapObjectT  size: 75 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008b2e60
//
// 008b2e60  8b4170               mov eax, dword ptr [ecx + 0x70]
// 008b2e63  83e800               sub eax, 0
// 008b2e66  7431                 je 0x8b2e99
// 008b2e68  83e801               sub eax, 1
// 008b2e6b  741a                 je 0x8b2e87
// 008b2e6d  83e801               sub eax, 1
// 008b2e70  7403                 je 0x8b2e75
// 008b2e72  33c0                 xor eax, eax
// 008b2e74  c3                   ret 
// 008b2e75  8b4124               mov eax, dword ptr [ecx + 0x24]
// 008b2e78  8b9024010000         mov edx, dword ptr [eax + 0x124]
// 008b2e7e  33c0                 xor eax, eax
// 008b2e80  3b5128               cmp edx, dword ptr [ecx + 0x28]
// 008b2e83  0f94c0               sete al
// 008b2e86  c3                   ret 
// 008b2e87  8b4124               mov eax, dword ptr [ecx + 0x24]
// 008b2e8a  8b9020010000         mov edx, dword ptr [eax + 0x120]
// 008b2e90  33c0                 xor eax, eax
// 008b2e92  3b5128               cmp edx, dword ptr [ecx + 0x28]
// 008b2e95  0f94c0               sete al
// 008b2e98  c3                   ret 
// 008b2e99  8b4124               mov eax, dword ptr [ecx + 0x24]
// 008b2e9c  8b901c010000         mov edx, dword ptr [eax + 0x11c]
// 008b2ea2  33c0                 xor eax, eax
// 008b2ea4  3b5128               cmp edx, dword ptr [ecx + 0x28]
// 008b2ea7  0f94c0               sete al
// 008b2eaa  c3                   ret 
// library xtp-11.2.2/Source\ReportControl\XTPReportRow.cpp (function ?IsFocused@CXTPReportRow@@UBEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/ReportControl/XTPReportRow.cpp
