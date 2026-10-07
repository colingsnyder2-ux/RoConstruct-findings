// roc 2008-06 006d5710  unit: CXTPReportHeader  size: 180 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006d5710
//
// 006d5710  8b542404             mov edx, dword ptr [esp + 4]
// 006d5714  83ec08               sub esp, 8
// 006d5717  53                   push ebx
// 006d5718  8bd9                 mov ebx, ecx
// 006d571a  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 006d571e  8b4324               mov eax, dword ptr [ebx + 0x24]
// 006d5721  51                   push ecx
// 006d5722  83c070               add eax, 0x70
// 006d5725  52                   push edx
// 006d5726  50                   push eax
// 006d5727  ff152c2d8000         call dword ptr [0x802d2c]
// 006d572d  85c0                 test eax, eax
// 006d572f  750a                 jne 0x6d573b
// 006d5731  83c8ff               or eax, 0xffffffff
// 006d5734  5b                   pop ebx
// 006d5735  83c408               add esp, 8
// 006d5738  c20800               ret 8
// 006d573b  8b4360               mov eax, dword ptr [ebx + 0x60]
// 006d573e  8b5320               mov edx, dword ptr [ebx + 0x20]
// 006d5741  8b4b24               mov ecx, dword ptr [ebx + 0x24]
// 006d5744  55                   push ebp
// 006d5745  8ba910010000         mov ebp, dword ptr [ecx + 0x110]
// 006d574b  56                   push esi
// 006d574c  8944240c             mov dword ptr [esp + 0xc], eax
// 006d5750  8b4230               mov eax, dword ptr [edx + 0x30]
// 006d5753  33f6                 xor esi, esi
// 006d5755  57                   push edi
// 006d5756  89442414             mov dword ptr [esp + 0x14], eax
// 006d575a  85c0                 test eax, eax
// 006d575c  7e4d                 jle 0x6d57ab
// 006d575e  8bff                 mov edi, edi
// 006d5760  8b4320               mov eax, dword ptr [ebx + 0x20]
// 006d5763  85f6                 test esi, esi
// 006d5765  7c3d                 jl 0x6d57a4
// 006d5767  3b7030               cmp esi, dword ptr [eax + 0x30]
// 006d576a  7d38                 jge 0x6d57a4
// 006d576c  8b402c               mov eax, dword ptr [eax + 0x2c]
// 006d576f  8b3cb0               mov edi, dword ptr [eax + esi*4]
// 006d5772  85ff                 test edi, edi
// 006d5774  742e                 je 0x6d57a4
// 006d5776  8bcf                 mov ecx, edi
// 006d5778  e863eeffff           call 0x6d45e0
// 006d577d  85c0                 test eax, eax
// 006d577f  7423                 je 0x6d57a4
// 006d5781  8bcf                 mov ecx, edi
// 006d5783  e8c8f4ffff           call 0x6d4c50
// 006d5788  01442410             add dword ptr [esp + 0x10], eax
// 006d578c  85ed                 test ebp, ebp
// 006d578e  7e05                 jle 0x6d5795
// 006d5790  8b4360               mov eax, dword ptr [ebx + 0x60]
// 006d5793  eb02                 jmp 0x6d5797
// 006d5795  33c0                 xor eax, eax
// 006d5797  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 006d579b  2bc8                 sub ecx, eax
// 006d579d  394c241c             cmp dword ptr [esp + 0x1c], ecx
// 006d57a1  7c15                 jl 0x6d57b8
// 006d57a3  4d                   dec ebp
// 006d57a4  46                   inc esi
// 006d57a5  3b742414             cmp esi, dword ptr [esp + 0x14]
// 006d57a9  7cb5                 jl 0x6d5760
// 006d57ab  5f                   pop edi
// 006d57ac  5e                   pop esi
// 006d57ad  5d                   pop ebp
// 006d57ae  83c8ff               or eax, 0xffffffff
// 006d57b1  5b                   pop ebx
// 006d57b2  83c408               add esp, 8
// 006d57b5  c20800               ret 8
// 006d57b8  5f                   pop edi
// 006d57b9  8bc6                 mov eax, esi
// 006d57bb  5e                   pop esi
// 006d57bc  5d                   pop ebp
// 006d57bd  5b                   pop ebx
// 006d57be  83c408               add esp, 8
// 006d57c1  c20800               ret 8
// library xtp-11.2.2/Source\ReportControl\XTPReportHeader.cpp (function ?HitTestHeaderColumnIndex@CXTPReportHeader@@UBEHVCPoint@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/ReportControl/XTPReportHeader.cpp
