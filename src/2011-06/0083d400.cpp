// roc 2011-06 0083d400  unit: CXTPReportHeader  size: 148 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0083d400
//
// 0083d400  8b442408             mov eax, dword ptr [esp + 8]
// 0083d404  53                   push ebx
// 0083d405  55                   push ebp
// 0083d406  56                   push esi
// 0083d407  57                   push edi
// 0083d408  8be9                 mov ebp, ecx
// 0083d40a  83f801               cmp eax, 1
// 0083d40d  7549                 jne 0x83d458
// 0083d40f  8b4520               mov eax, dword ptr [ebp + 0x20]
// 0083d412  8b742414             mov esi, dword ptr [esp + 0x14]
// 0083d416  8b5830               mov ebx, dword ptr [eax + 0x30]
// 0083d419  46                   inc esi
// 0083d41a  3bf3                 cmp esi, ebx
// 0083d41c  7d6d                 jge 0x83d48b
// 0083d41e  8bff                 mov edi, edi
// 0083d420  8b4520               mov eax, dword ptr [ebp + 0x20]
// 0083d423  85f6                 test esi, esi
// 0083d425  7c1a                 jl 0x83d441
// 0083d427  3b7030               cmp esi, dword ptr [eax + 0x30]
// 0083d42a  7d15                 jge 0x83d441
// 0083d42c  8b482c               mov ecx, dword ptr [eax + 0x2c]
// 0083d42f  8b3cb1               mov edi, dword ptr [ecx + esi*4]
// 0083d432  85ff                 test edi, edi
// 0083d434  740b                 je 0x83d441
// 0083d436  8bcf                 mov ecx, edi
// 0083d438  e83328ffff           call 0x82fc70
// 0083d43d  85c0                 test eax, eax
// 0083d43f  750e                 jne 0x83d44f
// 0083d441  46                   inc esi
// 0083d442  3bf3                 cmp esi, ebx
// 0083d444  7cda                 jl 0x83d420
// 0083d446  5f                   pop edi
// 0083d447  5e                   pop esi
// 0083d448  5d                   pop ebp
// 0083d449  33c0                 xor eax, eax
// 0083d44b  5b                   pop ebx
// 0083d44c  c20800               ret 8
// 0083d44f  8bc7                 mov eax, edi
// 0083d451  5f                   pop edi
// 0083d452  5e                   pop esi
// 0083d453  5d                   pop ebp
// 0083d454  5b                   pop ebx
// 0083d455  c20800               ret 8
// 0083d458  83f8ff               cmp eax, -1
// 0083d45b  752e                 jne 0x83d48b
// 0083d45d  8b742414             mov esi, dword ptr [esp + 0x14]
// 0083d461  03f0                 add esi, eax
// 0083d463  7826                 js 0x83d48b
// 0083d465  8b4520               mov eax, dword ptr [ebp + 0x20]
// 0083d468  85f6                 test esi, esi
// 0083d46a  7c1a                 jl 0x83d486
// 0083d46c  3b7030               cmp esi, dword ptr [eax + 0x30]
// 0083d46f  7d15                 jge 0x83d486
// 0083d471  8b502c               mov edx, dword ptr [eax + 0x2c]
// 0083d474  8b3cb2               mov edi, dword ptr [edx + esi*4]
// 0083d477  85ff                 test edi, edi
// 0083d479  740b                 je 0x83d486
// 0083d47b  8bcf                 mov ecx, edi
// 0083d47d  e8ee27ffff           call 0x82fc70
// 0083d482  85c0                 test eax, eax
// 0083d484  75c9                 jne 0x83d44f
// 0083d486  83ee01               sub esi, 1
// 0083d489  79da                 jns 0x83d465
// 0083d48b  5f                   pop edi
// 0083d48c  5e                   pop esi
// 0083d48d  5d                   pop ebp
// 0083d48e  33c0                 xor eax, eax
// 0083d490  5b                   pop ebx
// 0083d491  c20800               ret 8
// library xtp-11.2.2/Source\ReportControl\XTPReportHeader.cpp (function ?GetNextVisibleColumn@CXTPReportHeader@@UAEPAVCXTPReportColumn@@HH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/ReportControl/XTPReportHeader.cpp
