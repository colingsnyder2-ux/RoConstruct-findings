// roc 2009-06 007c9020  unit: VCXTPReportRow::?$CXTPHeapObjectT  size: 75 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 007c9020
//
// 007c9020  8b4170               mov eax, dword ptr [ecx + 0x70]
// 007c9023  83e800               sub eax, 0
// 007c9026  7431                 je 0x7c9059
// 007c9028  83e801               sub eax, 1
// 007c902b  741a                 je 0x7c9047
// 007c902d  83e801               sub eax, 1
// 007c9030  7403                 je 0x7c9035
// 007c9032  33c0                 xor eax, eax
// 007c9034  c3                   ret 
// 007c9035  8b4124               mov eax, dword ptr [ecx + 0x24]
// 007c9038  8b9024010000         mov edx, dword ptr [eax + 0x124]
// 007c903e  33c0                 xor eax, eax
// 007c9040  3b5128               cmp edx, dword ptr [ecx + 0x28]
// 007c9043  0f94c0               sete al
// 007c9046  c3                   ret 
// 007c9047  8b4124               mov eax, dword ptr [ecx + 0x24]
// 007c904a  8b9020010000         mov edx, dword ptr [eax + 0x120]
// 007c9050  33c0                 xor eax, eax
// 007c9052  3b5128               cmp edx, dword ptr [ecx + 0x28]
// 007c9055  0f94c0               sete al
// 007c9058  c3                   ret 
// 007c9059  8b4124               mov eax, dword ptr [ecx + 0x24]
// 007c905c  8b901c010000         mov edx, dword ptr [eax + 0x11c]
// 007c9062  33c0                 xor eax, eax
// 007c9064  3b5128               cmp edx, dword ptr [ecx + 0x28]
// 007c9067  0f94c0               sete al
// 007c906a  c3                   ret 
// library xtp-11.2.2/Source\ReportControl\XTPReportRow.cpp (function ?IsFocused@CXTPReportRow@@UBEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/ReportControl/XTPReportRow.cpp
