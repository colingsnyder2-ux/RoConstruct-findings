// roc 2009-12 008a3e20  unit: VCXTPReportRow::?$CXTPHeapObjectT  size: 75 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008a3e20
//
// 008a3e20  8b4170               mov eax, dword ptr [ecx + 0x70]
// 008a3e23  83e800               sub eax, 0
// 008a3e26  7431                 je 0x8a3e59
// 008a3e28  83e801               sub eax, 1
// 008a3e2b  741a                 je 0x8a3e47
// 008a3e2d  83e801               sub eax, 1
// 008a3e30  7403                 je 0x8a3e35
// 008a3e32  33c0                 xor eax, eax
// 008a3e34  c3                   ret 
// 008a3e35  8b4124               mov eax, dword ptr [ecx + 0x24]
// 008a3e38  8b9024010000         mov edx, dword ptr [eax + 0x124]
// 008a3e3e  33c0                 xor eax, eax
// 008a3e40  3b5128               cmp edx, dword ptr [ecx + 0x28]
// 008a3e43  0f94c0               sete al
// 008a3e46  c3                   ret 
// 008a3e47  8b4124               mov eax, dword ptr [ecx + 0x24]
// 008a3e4a  8b9020010000         mov edx, dword ptr [eax + 0x120]
// 008a3e50  33c0                 xor eax, eax
// 008a3e52  3b5128               cmp edx, dword ptr [ecx + 0x28]
// 008a3e55  0f94c0               sete al
// 008a3e58  c3                   ret 
// 008a3e59  8b4124               mov eax, dword ptr [ecx + 0x24]
// 008a3e5c  8b901c010000         mov edx, dword ptr [eax + 0x11c]
// 008a3e62  33c0                 xor eax, eax
// 008a3e64  3b5128               cmp edx, dword ptr [ecx + 0x28]
// 008a3e67  0f94c0               sete al
// 008a3e6a  c3                   ret 
// library xtp-11.2.2/Source\ReportControl\XTPReportRow.cpp (function ?IsFocused@CXTPReportRow@@UBEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/ReportControl/XTPReportRow.cpp
