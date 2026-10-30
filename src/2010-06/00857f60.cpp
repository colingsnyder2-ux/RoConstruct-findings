// roc 2010-06 00857f60  unit: VCXTPReportRow::?$CXTPHeapObjectT  size: 75 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00857f60
//
// 00857f60  8b4170               mov eax, dword ptr [ecx + 0x70]
// 00857f63  83e800               sub eax, 0
// 00857f66  7431                 je 0x857f99
// 00857f68  83e801               sub eax, 1
// 00857f6b  741a                 je 0x857f87
// 00857f6d  83e801               sub eax, 1
// 00857f70  7403                 je 0x857f75
// 00857f72  33c0                 xor eax, eax
// 00857f74  c3                   ret 
// 00857f75  8b4124               mov eax, dword ptr [ecx + 0x24]
// 00857f78  8b9024010000         mov edx, dword ptr [eax + 0x124]
// 00857f7e  33c0                 xor eax, eax
// 00857f80  3b5128               cmp edx, dword ptr [ecx + 0x28]
// 00857f83  0f94c0               sete al
// 00857f86  c3                   ret 
// 00857f87  8b4124               mov eax, dword ptr [ecx + 0x24]
// 00857f8a  8b9020010000         mov edx, dword ptr [eax + 0x120]
// 00857f90  33c0                 xor eax, eax
// 00857f92  3b5128               cmp edx, dword ptr [ecx + 0x28]
// 00857f95  0f94c0               sete al
// 00857f98  c3                   ret 
// 00857f99  8b4124               mov eax, dword ptr [ecx + 0x24]
// 00857f9c  8b901c010000         mov edx, dword ptr [eax + 0x11c]
// 00857fa2  33c0                 xor eax, eax
// 00857fa4  3b5128               cmp edx, dword ptr [ecx + 0x28]
// 00857fa7  0f94c0               sete al
// 00857faa  c3                   ret 
// library xtp-11.2.2/Source\ReportControl\XTPReportRow.cpp (function ?IsFocused@CXTPReportRow@@UBEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/ReportControl/XTPReportRow.cpp
