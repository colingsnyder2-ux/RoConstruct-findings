// from server: 100% by auto
// roc 2008-06 006d65d0  unit: CXTPReportHeader  size: 148 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006d65d0
//
// 006d65d0  8b442408             mov eax, dword ptr [esp + 8]
// 006d65d4  53                   push ebx
// 006d65d5  55                   push ebp
// 006d65d6  56                   push esi
// 006d65d7  57                   push edi
// 006d65d8  8be9                 mov ebp, ecx
// 006d65da  83f801               cmp eax, 1
// 006d65dd  7549                 jne 0x6d6628
// 006d65df  8b4520               mov eax, dword ptr [ebp + 0x20]
// 006d65e2  8b742414             mov esi, dword ptr [esp + 0x14]
// 006d65e6  8b5830               mov ebx, dword ptr [eax + 0x30]
// 006d65e9  46                   inc esi
// 006d65ea  3bf3                 cmp esi, ebx
// 006d65ec  7d6d                 jge 0x6d665b
// 006d65ee  8bff                 mov edi, edi
// 006d65f0  8b4520               mov eax, dword ptr [ebp + 0x20]
// 006d65f3  85f6                 test esi, esi
// 006d65f5  7c1a                 jl 0x6d6611
// 006d65f7  3b7030               cmp esi, dword ptr [eax + 0x30]
// 006d65fa  7d15                 jge 0x6d6611
// 006d65fc  8b482c               mov ecx, dword ptr [eax + 0x2c]
// 006d65ff  8b3cb1               mov edi, dword ptr [ecx + esi*4]
// 006d6602  85ff                 test edi, edi
// 006d6604  740b                 je 0x6d6611
// 006d6606  8bcf                 mov ecx, edi
// 006d6608  e8d3dfffff           call 0x6d45e0
// 006d660d  85c0                 test eax, eax
// 006d660f  750e                 jne 0x6d661f
// 006d6611  46                   inc esi
// 006d6612  3bf3                 cmp esi, ebx
// 006d6614  7cda                 jl 0x6d65f0
// 006d6616  5f                   pop edi
// 006d6617  5e                   pop esi
// 006d6618  5d                   pop ebp
// 006d6619  33c0                 xor eax, eax
// 006d661b  5b                   pop ebx
// 006d661c  c20800               ret 8
// 006d661f  8bc7                 mov eax, edi
// 006d6621  5f                   pop edi
// 006d6622  5e                   pop esi
// 006d6623  5d                   pop ebp
// 006d6624  5b                   pop ebx
// 006d6625  c20800               ret 8
// 006d6628  83f8ff               cmp eax, -1
// 006d662b  752e                 jne 0x6d665b
// 006d662d  8b742414             mov esi, dword ptr [esp + 0x14]
// 006d6631  03f0                 add esi, eax
// 006d6633  7826                 js 0x6d665b
// 006d6635  8b4520               mov eax, dword ptr [ebp + 0x20]
// 006d6638  85f6                 test esi, esi
// 006d663a  7c1a                 jl 0x6d6656
// 006d663c  3b7030               cmp esi, dword ptr [eax + 0x30]
// 006d663f  7d15                 jge 0x6d6656
// 006d6641  8b502c               mov edx, dword ptr [eax + 0x2c]
// 006d6644  8b3cb2               mov edi, dword ptr [edx + esi*4]
// 006d6647  85ff                 test edi, edi
// 006d6649  740b                 je 0x6d6656
// 006d664b  8bcf                 mov ecx, edi
// 006d664d  e88edfffff           call 0x6d45e0
// 006d6652  85c0                 test eax, eax
// 006d6654  75c9                 jne 0x6d661f
// 006d6656  83ee01               sub esi, 1
// 006d6659  79da                 jns 0x6d6635
// 006d665b  5f                   pop edi
// 006d665c  5e                   pop esi
// 006d665d  5d                   pop ebp
// 006d665e  33c0                 xor eax, eax
// 006d6660  5b                   pop ebx
// 006d6661  c20800               ret 8
// library xtp-11.2.2/Source\ReportControl\XTPReportHeader.cpp (function ?GetNextVisibleColumn@CXTPReportHeader@@UAEPAVCXTPReportColumn@@HH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/ReportControl/XTPReportHeader.cpp
