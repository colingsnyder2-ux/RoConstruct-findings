// roc 2009-12 00829b00  unit: CXTPReportHeader  size: 148 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00829b00
//
// 00829b00  8b442408             mov eax, dword ptr [esp + 8]
// 00829b04  53                   push ebx
// 00829b05  55                   push ebp
// 00829b06  56                   push esi
// 00829b07  57                   push edi
// 00829b08  8be9                 mov ebp, ecx
// 00829b0a  83f801               cmp eax, 1
// 00829b0d  7549                 jne 0x829b58
// 00829b0f  8b4520               mov eax, dword ptr [ebp + 0x20]
// 00829b12  8b742414             mov esi, dword ptr [esp + 0x14]
// 00829b16  8b5830               mov ebx, dword ptr [eax + 0x30]
// 00829b19  46                   inc esi
// 00829b1a  3bf3                 cmp esi, ebx
// 00829b1c  7d6d                 jge 0x829b8b
// 00829b1e  8bff                 mov edi, edi
// 00829b20  8b4520               mov eax, dword ptr [ebp + 0x20]
// 00829b23  85f6                 test esi, esi
// 00829b25  7c1a                 jl 0x829b41
// 00829b27  3b7030               cmp esi, dword ptr [eax + 0x30]
// 00829b2a  7d15                 jge 0x829b41
// 00829b2c  8b482c               mov ecx, dword ptr [eax + 0x2c]
// 00829b2f  8b3cb1               mov edi, dword ptr [ecx + esi*4]
// 00829b32  85ff                 test edi, edi
// 00829b34  740b                 je 0x829b41
// 00829b36  8bcf                 mov ecx, edi
// 00829b38  e8839f0800           call 0x8b3ac0
// 00829b3d  85c0                 test eax, eax
// 00829b3f  750e                 jne 0x829b4f
// 00829b41  46                   inc esi
// 00829b42  3bf3                 cmp esi, ebx
// 00829b44  7cda                 jl 0x829b20
// 00829b46  5f                   pop edi
// 00829b47  5e                   pop esi
// 00829b48  5d                   pop ebp
// 00829b49  33c0                 xor eax, eax
// 00829b4b  5b                   pop ebx
// 00829b4c  c20800               ret 8
// 00829b4f  8bc7                 mov eax, edi
// 00829b51  5f                   pop edi
// 00829b52  5e                   pop esi
// 00829b53  5d                   pop ebp
// 00829b54  5b                   pop ebx
// 00829b55  c20800               ret 8
// 00829b58  83f8ff               cmp eax, -1
// 00829b5b  752e                 jne 0x829b8b
// 00829b5d  8b742414             mov esi, dword ptr [esp + 0x14]
// 00829b61  03f0                 add esi, eax
// 00829b63  7826                 js 0x829b8b
// 00829b65  8b4520               mov eax, dword ptr [ebp + 0x20]
// 00829b68  85f6                 test esi, esi
// 00829b6a  7c1a                 jl 0x829b86
// 00829b6c  3b7030               cmp esi, dword ptr [eax + 0x30]
// 00829b6f  7d15                 jge 0x829b86
// 00829b71  8b502c               mov edx, dword ptr [eax + 0x2c]
// 00829b74  8b3cb2               mov edi, dword ptr [edx + esi*4]
// 00829b77  85ff                 test edi, edi
// 00829b79  740b                 je 0x829b86
// 00829b7b  8bcf                 mov ecx, edi
// 00829b7d  e83e9f0800           call 0x8b3ac0
// 00829b82  85c0                 test eax, eax
// 00829b84  75c9                 jne 0x829b4f
// 00829b86  83ee01               sub esi, 1
// 00829b89  79da                 jns 0x829b65
// 00829b8b  5f                   pop edi
// 00829b8c  5e                   pop esi
// 00829b8d  5d                   pop ebp
// 00829b8e  33c0                 xor eax, eax
// 00829b90  5b                   pop ebx
// 00829b91  c20800               ret 8
// library xtp-11.2.2/Source\ReportControl\XTPReportHeader.cpp (function ?GetNextVisibleColumn@CXTPReportHeader@@UAEPAVCXTPReportColumn@@HH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/ReportControl/XTPReportHeader.cpp
