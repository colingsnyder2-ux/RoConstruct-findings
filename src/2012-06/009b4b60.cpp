// roc 2012-06 009b4b60  unit: CXTPReportHeader  size: 180 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009b4b60
//
// 009b4b60  8b542404             mov edx, dword ptr [esp + 4]
// 009b4b64  83ec08               sub esp, 8
// 009b4b67  53                   push ebx
// 009b4b68  8bd9                 mov ebx, ecx
// 009b4b6a  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 009b4b6e  8b4324               mov eax, dword ptr [ebx + 0x24]
// 009b4b71  51                   push ecx
// 009b4b72  83c070               add eax, 0x70
// 009b4b75  52                   push edx
// 009b4b76  50                   push eax
// 009b4b77  ff15483bb200         call dword ptr [0xb23b48]
// 009b4b7d  85c0                 test eax, eax
// 009b4b7f  750a                 jne 0x9b4b8b
// 009b4b81  83c8ff               or eax, 0xffffffff
// 009b4b84  5b                   pop ebx
// 009b4b85  83c408               add esp, 8
// 009b4b88  c20800               ret 8
// 009b4b8b  8b4360               mov eax, dword ptr [ebx + 0x60]
// 009b4b8e  8b5320               mov edx, dword ptr [ebx + 0x20]
// 009b4b91  8b4b24               mov ecx, dword ptr [ebx + 0x24]
// 009b4b94  55                   push ebp
// 009b4b95  8ba910010000         mov ebp, dword ptr [ecx + 0x110]
// 009b4b9b  56                   push esi
// 009b4b9c  8944240c             mov dword ptr [esp + 0xc], eax
// 009b4ba0  8b4230               mov eax, dword ptr [edx + 0x30]
// 009b4ba3  33f6                 xor esi, esi
// 009b4ba5  57                   push edi
// 009b4ba6  89442414             mov dword ptr [esp + 0x14], eax
// 009b4baa  85c0                 test eax, eax
// 009b4bac  7e4d                 jle 0x9b4bfb
// 009b4bae  8bff                 mov edi, edi
// 009b4bb0  8b4320               mov eax, dword ptr [ebx + 0x20]
// 009b4bb3  85f6                 test esi, esi
// 009b4bb5  7c3d                 jl 0x9b4bf4
// 009b4bb7  3b7030               cmp esi, dword ptr [eax + 0x30]
// 009b4bba  7d38                 jge 0x9b4bf4
// 009b4bbc  8b402c               mov eax, dword ptr [eax + 0x2c]
// 009b4bbf  8b3cb0               mov edi, dword ptr [eax + esi*4]
// 009b4bc2  85ff                 test edi, edi
// 009b4bc4  742e                 je 0x9b4bf4
// 009b4bc6  8bcf                 mov ecx, edi
// 009b4bc8  e863880800           call 0xa3d430
// 009b4bcd  85c0                 test eax, eax
// 009b4bcf  7423                 je 0x9b4bf4
// 009b4bd1  8bcf                 mov ecx, edi
// 009b4bd3  e8e83cffff           call 0x9a88c0
// 009b4bd8  01442410             add dword ptr [esp + 0x10], eax
// 009b4bdc  85ed                 test ebp, ebp
// 009b4bde  7e05                 jle 0x9b4be5
// 009b4be0  8b4360               mov eax, dword ptr [ebx + 0x60]
// 009b4be3  eb02                 jmp 0x9b4be7
// 009b4be5  33c0                 xor eax, eax
// 009b4be7  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 009b4beb  2bc8                 sub ecx, eax
// 009b4bed  394c241c             cmp dword ptr [esp + 0x1c], ecx
// 009b4bf1  7c15                 jl 0x9b4c08
// 009b4bf3  4d                   dec ebp
// 009b4bf4  46                   inc esi
// 009b4bf5  3b742414             cmp esi, dword ptr [esp + 0x14]
// 009b4bf9  7cb5                 jl 0x9b4bb0
// 009b4bfb  5f                   pop edi
// 009b4bfc  5e                   pop esi
// 009b4bfd  5d                   pop ebp
// 009b4bfe  83c8ff               or eax, 0xffffffff
// 009b4c01  5b                   pop ebx
// 009b4c02  83c408               add esp, 8
// 009b4c05  c20800               ret 8
// 009b4c08  5f                   pop edi
// 009b4c09  8bc6                 mov eax, esi
// 009b4c0b  5e                   pop esi
// 009b4c0c  5d                   pop ebp
// 009b4c0d  5b                   pop ebx
// 009b4c0e  83c408               add esp, 8
// 009b4c11  c20800               ret 8
// library xtp-11.2.2/Source\ReportControl\XTPReportHeader.cpp (function ?HitTestHeaderColumnIndex@CXTPReportHeader@@UBEHVCPoint@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/ReportControl/XTPReportHeader.cpp
