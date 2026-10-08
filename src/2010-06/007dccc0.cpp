// roc 2010-06 007dccc0  unit: CXTPReportHeader  size: 180 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 007dccc0
//
// 007dccc0  8b542404             mov edx, dword ptr [esp + 4]
// 007dccc4  83ec08               sub esp, 8
// 007dccc7  53                   push ebx
// 007dccc8  8bd9                 mov ebx, ecx
// 007dccca  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 007dccce  8b4324               mov eax, dword ptr [ebx + 0x24]
// 007dccd1  51                   push ecx
// 007dccd2  83c070               add eax, 0x70
// 007dccd5  52                   push edx
// 007dccd6  50                   push eax
// 007dccd7  ff15e0bb9e00         call dword ptr [0x9ebbe0]
// 007dccdd  85c0                 test eax, eax
// 007dccdf  750a                 jne 0x7dcceb
// 007dcce1  83c8ff               or eax, 0xffffffff
// 007dcce4  5b                   pop ebx
// 007dcce5  83c408               add esp, 8
// 007dcce8  c20800               ret 8
// 007dcceb  8b4360               mov eax, dword ptr [ebx + 0x60]
// 007dccee  8b5320               mov edx, dword ptr [ebx + 0x20]
// 007dccf1  8b4b24               mov ecx, dword ptr [ebx + 0x24]
// 007dccf4  55                   push ebp
// 007dccf5  8ba910010000         mov ebp, dword ptr [ecx + 0x110]
// 007dccfb  56                   push esi
// 007dccfc  8944240c             mov dword ptr [esp + 0xc], eax
// 007dcd00  8b4230               mov eax, dword ptr [edx + 0x30]
// 007dcd03  33f6                 xor esi, esi
// 007dcd05  57                   push edi
// 007dcd06  89442414             mov dword ptr [esp + 0x14], eax
// 007dcd0a  85c0                 test eax, eax
// 007dcd0c  7e4d                 jle 0x7dcd5b
// 007dcd0e  8bff                 mov edi, edi
// 007dcd10  8b4320               mov eax, dword ptr [ebx + 0x20]
// 007dcd13  85f6                 test esi, esi
// 007dcd15  7c3d                 jl 0x7dcd54
// 007dcd17  3b7030               cmp esi, dword ptr [eax + 0x30]
// 007dcd1a  7d38                 jge 0x7dcd54
// 007dcd1c  8b402c               mov eax, dword ptr [eax + 0x2c]
// 007dcd1f  8b3cb0               mov edi, dword ptr [eax + esi*4]
// 007dcd22  85ff                 test edi, edi
// 007dcd24  742e                 je 0x7dcd54
// 007dcd26  8bcf                 mov ecx, edi
// 007dcd28  e873eeffff           call 0x7dbba0
// 007dcd2d  85c0                 test eax, eax
// 007dcd2f  7423                 je 0x7dcd54
// 007dcd31  8bcf                 mov ecx, edi
// 007dcd33  e8c8f4ffff           call 0x7dc200
// 007dcd38  01442410             add dword ptr [esp + 0x10], eax
// 007dcd3c  85ed                 test ebp, ebp
// 007dcd3e  7e05                 jle 0x7dcd45
// 007dcd40  8b4360               mov eax, dword ptr [ebx + 0x60]
// 007dcd43  eb02                 jmp 0x7dcd47
// 007dcd45  33c0                 xor eax, eax
// 007dcd47  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 007dcd4b  2bc8                 sub ecx, eax
// 007dcd4d  394c241c             cmp dword ptr [esp + 0x1c], ecx
// 007dcd51  7c15                 jl 0x7dcd68
// 007dcd53  4d                   dec ebp
// 007dcd54  46                   inc esi
// 007dcd55  3b742414             cmp esi, dword ptr [esp + 0x14]
// 007dcd59  7cb5                 jl 0x7dcd10
// 007dcd5b  5f                   pop edi
// 007dcd5c  5e                   pop esi
// 007dcd5d  5d                   pop ebp
// 007dcd5e  83c8ff               or eax, 0xffffffff
// 007dcd61  5b                   pop ebx
// 007dcd62  83c408               add esp, 8
// 007dcd65  c20800               ret 8
// 007dcd68  5f                   pop edi
// 007dcd69  8bc6                 mov eax, esi
// 007dcd6b  5e                   pop esi
// 007dcd6c  5d                   pop ebp
// 007dcd6d  5b                   pop ebx
// 007dcd6e  83c408               add esp, 8
// 007dcd71  c20800               ret 8
// library xtp-11.2.2/Source\ReportControl\XTPReportHeader.cpp (function ?HitTestHeaderColumnIndex@CXTPReportHeader@@UBEHVCPoint@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/ReportControl/XTPReportHeader.cpp
