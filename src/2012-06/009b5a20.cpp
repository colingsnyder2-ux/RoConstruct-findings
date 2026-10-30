// roc 2012-06 009b5a20  unit: CXTPReportHeader  size: 148 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009b5a20
//
// 009b5a20  8b442408             mov eax, dword ptr [esp + 8]
// 009b5a24  53                   push ebx
// 009b5a25  55                   push ebp
// 009b5a26  56                   push esi
// 009b5a27  57                   push edi
// 009b5a28  8be9                 mov ebp, ecx
// 009b5a2a  83f801               cmp eax, 1
// 009b5a2d  7549                 jne 0x9b5a78
// 009b5a2f  8b4520               mov eax, dword ptr [ebp + 0x20]
// 009b5a32  8b742414             mov esi, dword ptr [esp + 0x14]
// 009b5a36  8b5830               mov ebx, dword ptr [eax + 0x30]
// 009b5a39  46                   inc esi
// 009b5a3a  3bf3                 cmp esi, ebx
// 009b5a3c  7d6d                 jge 0x9b5aab
// 009b5a3e  8bff                 mov edi, edi
// 009b5a40  8b4520               mov eax, dword ptr [ebp + 0x20]
// 009b5a43  85f6                 test esi, esi
// 009b5a45  7c1a                 jl 0x9b5a61
// 009b5a47  3b7030               cmp esi, dword ptr [eax + 0x30]
// 009b5a4a  7d15                 jge 0x9b5a61
// 009b5a4c  8b482c               mov ecx, dword ptr [eax + 0x2c]
// 009b5a4f  8b3cb1               mov edi, dword ptr [ecx + esi*4]
// 009b5a52  85ff                 test edi, edi
// 009b5a54  740b                 je 0x9b5a61
// 009b5a56  8bcf                 mov ecx, edi
// 009b5a58  e8d3790800           call 0xa3d430
// 009b5a5d  85c0                 test eax, eax
// 009b5a5f  750e                 jne 0x9b5a6f
// 009b5a61  46                   inc esi
// 009b5a62  3bf3                 cmp esi, ebx
// 009b5a64  7cda                 jl 0x9b5a40
// 009b5a66  5f                   pop edi
// 009b5a67  5e                   pop esi
// 009b5a68  5d                   pop ebp
// 009b5a69  33c0                 xor eax, eax
// 009b5a6b  5b                   pop ebx
// 009b5a6c  c20800               ret 8
// 009b5a6f  8bc7                 mov eax, edi
// 009b5a71  5f                   pop edi
// 009b5a72  5e                   pop esi
// 009b5a73  5d                   pop ebp
// 009b5a74  5b                   pop ebx
// 009b5a75  c20800               ret 8
// 009b5a78  83f8ff               cmp eax, -1
// 009b5a7b  752e                 jne 0x9b5aab
// 009b5a7d  8b742414             mov esi, dword ptr [esp + 0x14]
// 009b5a81  03f0                 add esi, eax
// 009b5a83  7826                 js 0x9b5aab
// 009b5a85  8b4520               mov eax, dword ptr [ebp + 0x20]
// 009b5a88  85f6                 test esi, esi
// 009b5a8a  7c1a                 jl 0x9b5aa6
// 009b5a8c  3b7030               cmp esi, dword ptr [eax + 0x30]
// 009b5a8f  7d15                 jge 0x9b5aa6
// 009b5a91  8b502c               mov edx, dword ptr [eax + 0x2c]
// 009b5a94  8b3cb2               mov edi, dword ptr [edx + esi*4]
// 009b5a97  85ff                 test edi, edi
// 009b5a99  740b                 je 0x9b5aa6
// 009b5a9b  8bcf                 mov ecx, edi
// 009b5a9d  e88e790800           call 0xa3d430
// 009b5aa2  85c0                 test eax, eax
// 009b5aa4  75c9                 jne 0x9b5a6f
// 009b5aa6  83ee01               sub esi, 1
// 009b5aa9  79da                 jns 0x9b5a85
// 009b5aab  5f                   pop edi
// 009b5aac  5e                   pop esi
// 009b5aad  5d                   pop ebp
// 009b5aae  33c0                 xor eax, eax
// 009b5ab0  5b                   pop ebx
// 009b5ab1  c20800               ret 8
// library xtp-11.2.2/Source\ReportControl\XTPReportHeader.cpp (function ?GetNextVisibleColumn@CXTPReportHeader@@UAEPAVCXTPReportColumn@@HH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/ReportControl/XTPReportHeader.cpp
