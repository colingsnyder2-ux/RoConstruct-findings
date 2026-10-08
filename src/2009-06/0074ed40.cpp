// roc 2009-06 0074ed40  unit: CXTPReportHeader  size: 148 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0074ed40
//
// 0074ed40  8b442408             mov eax, dword ptr [esp + 8]
// 0074ed44  53                   push ebx
// 0074ed45  55                   push ebp
// 0074ed46  56                   push esi
// 0074ed47  57                   push edi
// 0074ed48  8be9                 mov ebp, ecx
// 0074ed4a  83f801               cmp eax, 1
// 0074ed4d  7549                 jne 0x74ed98
// 0074ed4f  8b4520               mov eax, dword ptr [ebp + 0x20]
// 0074ed52  8b742414             mov esi, dword ptr [esp + 0x14]
// 0074ed56  8b5830               mov ebx, dword ptr [eax + 0x30]
// 0074ed59  46                   inc esi
// 0074ed5a  3bf3                 cmp esi, ebx
// 0074ed5c  7d6d                 jge 0x74edcb
// 0074ed5e  8bff                 mov edi, edi
// 0074ed60  8b4520               mov eax, dword ptr [ebp + 0x20]
// 0074ed63  85f6                 test esi, esi
// 0074ed65  7c1a                 jl 0x74ed81
// 0074ed67  3b7030               cmp esi, dword ptr [eax + 0x30]
// 0074ed6a  7d15                 jge 0x74ed81
// 0074ed6c  8b482c               mov ecx, dword ptr [eax + 0x2c]
// 0074ed6f  8b3cb1               mov edi, dword ptr [ecx + esi*4]
// 0074ed72  85ff                 test edi, edi
// 0074ed74  740b                 je 0x74ed81
// 0074ed76  8bcf                 mov ecx, edi
// 0074ed78  e8d3dfffff           call 0x74cd50
// 0074ed7d  85c0                 test eax, eax
// 0074ed7f  750e                 jne 0x74ed8f
// 0074ed81  46                   inc esi
// 0074ed82  3bf3                 cmp esi, ebx
// 0074ed84  7cda                 jl 0x74ed60
// 0074ed86  5f                   pop edi
// 0074ed87  5e                   pop esi
// 0074ed88  5d                   pop ebp
// 0074ed89  33c0                 xor eax, eax
// 0074ed8b  5b                   pop ebx
// 0074ed8c  c20800               ret 8
// 0074ed8f  8bc7                 mov eax, edi
// 0074ed91  5f                   pop edi
// 0074ed92  5e                   pop esi
// 0074ed93  5d                   pop ebp
// 0074ed94  5b                   pop ebx
// 0074ed95  c20800               ret 8
// 0074ed98  83f8ff               cmp eax, -1
// 0074ed9b  752e                 jne 0x74edcb
// 0074ed9d  8b742414             mov esi, dword ptr [esp + 0x14]
// 0074eda1  03f0                 add esi, eax
// 0074eda3  7826                 js 0x74edcb
// 0074eda5  8b4520               mov eax, dword ptr [ebp + 0x20]
// 0074eda8  85f6                 test esi, esi
// 0074edaa  7c1a                 jl 0x74edc6
// 0074edac  3b7030               cmp esi, dword ptr [eax + 0x30]
// 0074edaf  7d15                 jge 0x74edc6
// 0074edb1  8b502c               mov edx, dword ptr [eax + 0x2c]
// 0074edb4  8b3cb2               mov edi, dword ptr [edx + esi*4]
// 0074edb7  85ff                 test edi, edi
// 0074edb9  740b                 je 0x74edc6
// 0074edbb  8bcf                 mov ecx, edi
// 0074edbd  e88edfffff           call 0x74cd50
// 0074edc2  85c0                 test eax, eax
// 0074edc4  75c9                 jne 0x74ed8f
// 0074edc6  83ee01               sub esi, 1
// 0074edc9  79da                 jns 0x74eda5
// 0074edcb  5f                   pop edi
// 0074edcc  5e                   pop esi
// 0074edcd  5d                   pop ebp
// 0074edce  33c0                 xor eax, eax
// 0074edd0  5b                   pop ebx
// 0074edd1  c20800               ret 8
// library xtp-11.2.2/Source\ReportControl\XTPReportHeader.cpp (function ?GetNextVisibleColumn@CXTPReportHeader@@UAEPAVCXTPReportColumn@@HH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/ReportControl/XTPReportHeader.cpp
