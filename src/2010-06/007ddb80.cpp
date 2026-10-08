// roc 2010-06 007ddb80  unit: CXTPReportHeader  size: 148 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 007ddb80
//
// 007ddb80  8b442408             mov eax, dword ptr [esp + 8]
// 007ddb84  53                   push ebx
// 007ddb85  55                   push ebp
// 007ddb86  56                   push esi
// 007ddb87  57                   push edi
// 007ddb88  8be9                 mov ebp, ecx
// 007ddb8a  83f801               cmp eax, 1
// 007ddb8d  7549                 jne 0x7ddbd8
// 007ddb8f  8b4520               mov eax, dword ptr [ebp + 0x20]
// 007ddb92  8b742414             mov esi, dword ptr [esp + 0x14]
// 007ddb96  8b5830               mov ebx, dword ptr [eax + 0x30]
// 007ddb99  46                   inc esi
// 007ddb9a  3bf3                 cmp esi, ebx
// 007ddb9c  7d6d                 jge 0x7ddc0b
// 007ddb9e  8bff                 mov edi, edi
// 007ddba0  8b4520               mov eax, dword ptr [ebp + 0x20]
// 007ddba3  85f6                 test esi, esi
// 007ddba5  7c1a                 jl 0x7ddbc1
// 007ddba7  3b7030               cmp esi, dword ptr [eax + 0x30]
// 007ddbaa  7d15                 jge 0x7ddbc1
// 007ddbac  8b482c               mov ecx, dword ptr [eax + 0x2c]
// 007ddbaf  8b3cb1               mov edi, dword ptr [ecx + esi*4]
// 007ddbb2  85ff                 test edi, edi
// 007ddbb4  740b                 je 0x7ddbc1
// 007ddbb6  8bcf                 mov ecx, edi
// 007ddbb8  e8e3dfffff           call 0x7dbba0
// 007ddbbd  85c0                 test eax, eax
// 007ddbbf  750e                 jne 0x7ddbcf
// 007ddbc1  46                   inc esi
// 007ddbc2  3bf3                 cmp esi, ebx
// 007ddbc4  7cda                 jl 0x7ddba0
// 007ddbc6  5f                   pop edi
// 007ddbc7  5e                   pop esi
// 007ddbc8  5d                   pop ebp
// 007ddbc9  33c0                 xor eax, eax
// 007ddbcb  5b                   pop ebx
// 007ddbcc  c20800               ret 8
// 007ddbcf  8bc7                 mov eax, edi
// 007ddbd1  5f                   pop edi
// 007ddbd2  5e                   pop esi
// 007ddbd3  5d                   pop ebp
// 007ddbd4  5b                   pop ebx
// 007ddbd5  c20800               ret 8
// 007ddbd8  83f8ff               cmp eax, -1
// 007ddbdb  752e                 jne 0x7ddc0b
// 007ddbdd  8b742414             mov esi, dword ptr [esp + 0x14]
// 007ddbe1  03f0                 add esi, eax
// 007ddbe3  7826                 js 0x7ddc0b
// 007ddbe5  8b4520               mov eax, dword ptr [ebp + 0x20]
// 007ddbe8  85f6                 test esi, esi
// 007ddbea  7c1a                 jl 0x7ddc06
// 007ddbec  3b7030               cmp esi, dword ptr [eax + 0x30]
// 007ddbef  7d15                 jge 0x7ddc06
// 007ddbf1  8b502c               mov edx, dword ptr [eax + 0x2c]
// 007ddbf4  8b3cb2               mov edi, dword ptr [edx + esi*4]
// 007ddbf7  85ff                 test edi, edi
// 007ddbf9  740b                 je 0x7ddc06
// 007ddbfb  8bcf                 mov ecx, edi
// 007ddbfd  e89edfffff           call 0x7dbba0
// 007ddc02  85c0                 test eax, eax
// 007ddc04  75c9                 jne 0x7ddbcf
// 007ddc06  83ee01               sub esi, 1
// 007ddc09  79da                 jns 0x7ddbe5
// 007ddc0b  5f                   pop edi
// 007ddc0c  5e                   pop esi
// 007ddc0d  5d                   pop ebp
// 007ddc0e  33c0                 xor eax, eax
// 007ddc10  5b                   pop ebx
// 007ddc11  c20800               ret 8
// library xtp-11.2.2/Source\ReportControl\XTPReportHeader.cpp (function ?GetNextVisibleColumn@CXTPReportHeader@@UAEPAVCXTPReportColumn@@HH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/ReportControl/XTPReportHeader.cpp
