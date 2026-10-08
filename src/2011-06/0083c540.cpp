// roc 2011-06 0083c540  unit: CXTPReportHeader  size: 180 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0083c540
//
// 0083c540  8b542404             mov edx, dword ptr [esp + 4]
// 0083c544  83ec08               sub esp, 8
// 0083c547  53                   push ebx
// 0083c548  8bd9                 mov ebx, ecx
// 0083c54a  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0083c54e  8b4324               mov eax, dword ptr [ebx + 0x24]
// 0083c551  51                   push ecx
// 0083c552  83c070               add eax, 0x70
// 0083c555  52                   push edx
// 0083c556  50                   push eax
// 0083c557  ff15101ca400         call dword ptr [0xa41c10]
// 0083c55d  85c0                 test eax, eax
// 0083c55f  750a                 jne 0x83c56b
// 0083c561  83c8ff               or eax, 0xffffffff
// 0083c564  5b                   pop ebx
// 0083c565  83c408               add esp, 8
// 0083c568  c20800               ret 8
// 0083c56b  8b4360               mov eax, dword ptr [ebx + 0x60]
// 0083c56e  8b5320               mov edx, dword ptr [ebx + 0x20]
// 0083c571  8b4b24               mov ecx, dword ptr [ebx + 0x24]
// 0083c574  55                   push ebp
// 0083c575  8ba910010000         mov ebp, dword ptr [ecx + 0x110]
// 0083c57b  56                   push esi
// 0083c57c  8944240c             mov dword ptr [esp + 0xc], eax
// 0083c580  8b4230               mov eax, dword ptr [edx + 0x30]
// 0083c583  33f6                 xor esi, esi
// 0083c585  57                   push edi
// 0083c586  89442414             mov dword ptr [esp + 0x14], eax
// 0083c58a  85c0                 test eax, eax
// 0083c58c  7e4d                 jle 0x83c5db
// 0083c58e  8bff                 mov edi, edi
// 0083c590  8b4320               mov eax, dword ptr [ebx + 0x20]
// 0083c593  85f6                 test esi, esi
// 0083c595  7c3d                 jl 0x83c5d4
// 0083c597  3b7030               cmp esi, dword ptr [eax + 0x30]
// 0083c59a  7d38                 jge 0x83c5d4
// 0083c59c  8b402c               mov eax, dword ptr [eax + 0x2c]
// 0083c59f  8b3cb0               mov edi, dword ptr [eax + esi*4]
// 0083c5a2  85ff                 test edi, edi
// 0083c5a4  742e                 je 0x83c5d4
// 0083c5a6  8bcf                 mov ecx, edi
// 0083c5a8  e8c336ffff           call 0x82fc70
// 0083c5ad  85c0                 test eax, eax
// 0083c5af  7423                 je 0x83c5d4
// 0083c5b1  8bcf                 mov ecx, edi
// 0083c5b3  e8183dffff           call 0x8302d0
// 0083c5b8  01442410             add dword ptr [esp + 0x10], eax
// 0083c5bc  85ed                 test ebp, ebp
// 0083c5be  7e05                 jle 0x83c5c5
// 0083c5c0  8b4360               mov eax, dword ptr [ebx + 0x60]
// 0083c5c3  eb02                 jmp 0x83c5c7
// 0083c5c5  33c0                 xor eax, eax
// 0083c5c7  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0083c5cb  2bc8                 sub ecx, eax
// 0083c5cd  394c241c             cmp dword ptr [esp + 0x1c], ecx
// 0083c5d1  7c15                 jl 0x83c5e8
// 0083c5d3  4d                   dec ebp
// 0083c5d4  46                   inc esi
// 0083c5d5  3b742414             cmp esi, dword ptr [esp + 0x14]
// 0083c5d9  7cb5                 jl 0x83c590
// 0083c5db  5f                   pop edi
// 0083c5dc  5e                   pop esi
// 0083c5dd  5d                   pop ebp
// 0083c5de  83c8ff               or eax, 0xffffffff
// 0083c5e1  5b                   pop ebx
// 0083c5e2  83c408               add esp, 8
// 0083c5e5  c20800               ret 8
// 0083c5e8  5f                   pop edi
// 0083c5e9  8bc6                 mov eax, esi
// 0083c5eb  5e                   pop esi
// 0083c5ec  5d                   pop ebp
// 0083c5ed  5b                   pop ebx
// 0083c5ee  83c408               add esp, 8
// 0083c5f1  c20800               ret 8
// library xtp-11.2.2/Source\ReportControl\XTPReportHeader.cpp (function ?HitTestHeaderColumnIndex@CXTPReportHeader@@UBEHVCPoint@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/ReportControl/XTPReportHeader.cpp
