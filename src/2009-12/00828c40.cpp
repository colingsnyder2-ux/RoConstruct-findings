// roc 2009-12 00828c40  unit: CXTPReportHeader  size: 180 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00828c40
//
// 00828c40  8b542404             mov edx, dword ptr [esp + 4]
// 00828c44  83ec08               sub esp, 8
// 00828c47  53                   push ebx
// 00828c48  8bd9                 mov ebx, ecx
// 00828c4a  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00828c4e  8b4324               mov eax, dword ptr [ebx + 0x24]
// 00828c51  51                   push ecx
// 00828c52  83c070               add eax, 0x70
// 00828c55  52                   push edx
// 00828c56  50                   push eax
// 00828c57  ff155cca9800         call dword ptr [0x98ca5c]
// 00828c5d  85c0                 test eax, eax
// 00828c5f  750a                 jne 0x828c6b
// 00828c61  83c8ff               or eax, 0xffffffff
// 00828c64  5b                   pop ebx
// 00828c65  83c408               add esp, 8
// 00828c68  c20800               ret 8
// 00828c6b  8b4360               mov eax, dword ptr [ebx + 0x60]
// 00828c6e  8b5320               mov edx, dword ptr [ebx + 0x20]
// 00828c71  8b4b24               mov ecx, dword ptr [ebx + 0x24]
// 00828c74  55                   push ebp
// 00828c75  8ba910010000         mov ebp, dword ptr [ecx + 0x110]
// 00828c7b  56                   push esi
// 00828c7c  8944240c             mov dword ptr [esp + 0xc], eax
// 00828c80  8b4230               mov eax, dword ptr [edx + 0x30]
// 00828c83  33f6                 xor esi, esi
// 00828c85  57                   push edi
// 00828c86  89442414             mov dword ptr [esp + 0x14], eax
// 00828c8a  85c0                 test eax, eax
// 00828c8c  7e4d                 jle 0x828cdb
// 00828c8e  8bff                 mov edi, edi
// 00828c90  8b4320               mov eax, dword ptr [ebx + 0x20]
// 00828c93  85f6                 test esi, esi
// 00828c95  7c3d                 jl 0x828cd4
// 00828c97  3b7030               cmp esi, dword ptr [eax + 0x30]
// 00828c9a  7d38                 jge 0x828cd4
// 00828c9c  8b402c               mov eax, dword ptr [eax + 0x2c]
// 00828c9f  8b3cb0               mov edi, dword ptr [eax + esi*4]
// 00828ca2  85ff                 test edi, edi
// 00828ca4  742e                 je 0x828cd4
// 00828ca6  8bcf                 mov ecx, edi
// 00828ca8  e813ae0800           call 0x8b3ac0
// 00828cad  85c0                 test eax, eax
// 00828caf  7423                 je 0x828cd4
// 00828cb1  8bcf                 mov ecx, edi
// 00828cb3  e8c8f4ffff           call 0x828180
// 00828cb8  01442410             add dword ptr [esp + 0x10], eax
// 00828cbc  85ed                 test ebp, ebp
// 00828cbe  7e05                 jle 0x828cc5
// 00828cc0  8b4360               mov eax, dword ptr [ebx + 0x60]
// 00828cc3  eb02                 jmp 0x828cc7
// 00828cc5  33c0                 xor eax, eax
// 00828cc7  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00828ccb  2bc8                 sub ecx, eax
// 00828ccd  394c241c             cmp dword ptr [esp + 0x1c], ecx
// 00828cd1  7c15                 jl 0x828ce8
// 00828cd3  4d                   dec ebp
// 00828cd4  46                   inc esi
// 00828cd5  3b742414             cmp esi, dword ptr [esp + 0x14]
// 00828cd9  7cb5                 jl 0x828c90
// 00828cdb  5f                   pop edi
// 00828cdc  5e                   pop esi
// 00828cdd  5d                   pop ebp
// 00828cde  83c8ff               or eax, 0xffffffff
// 00828ce1  5b                   pop ebx
// 00828ce2  83c408               add esp, 8
// 00828ce5  c20800               ret 8
// 00828ce8  5f                   pop edi
// 00828ce9  8bc6                 mov eax, esi
// 00828ceb  5e                   pop esi
// 00828cec  5d                   pop ebp
// 00828ced  5b                   pop ebx
// 00828cee  83c408               add esp, 8
// 00828cf1  c20800               ret 8
// library xtp-11.2.2/Source\ReportControl\XTPReportHeader.cpp (function ?HitTestHeaderColumnIndex@CXTPReportHeader@@UBEHVCPoint@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/ReportControl/XTPReportHeader.cpp
