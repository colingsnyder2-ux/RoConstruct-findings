// roc 2009-06 0074de80  unit: CXTPReportHeader  size: 180 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0074de80
//
// 0074de80  8b542404             mov edx, dword ptr [esp + 4]
// 0074de84  83ec08               sub esp, 8
// 0074de87  53                   push ebx
// 0074de88  8bd9                 mov ebx, ecx
// 0074de8a  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0074de8e  8b4324               mov eax, dword ptr [ebx + 0x24]
// 0074de91  51                   push ecx
// 0074de92  83c070               add eax, 0x70
// 0074de95  52                   push edx
// 0074de96  50                   push eax
// 0074de97  ff15c0ed8900         call dword ptr [0x89edc0]
// 0074de9d  85c0                 test eax, eax
// 0074de9f  750a                 jne 0x74deab
// 0074dea1  83c8ff               or eax, 0xffffffff
// 0074dea4  5b                   pop ebx
// 0074dea5  83c408               add esp, 8
// 0074dea8  c20800               ret 8
// 0074deab  8b4360               mov eax, dword ptr [ebx + 0x60]
// 0074deae  8b5320               mov edx, dword ptr [ebx + 0x20]
// 0074deb1  8b4b24               mov ecx, dword ptr [ebx + 0x24]
// 0074deb4  55                   push ebp
// 0074deb5  8ba910010000         mov ebp, dword ptr [ecx + 0x110]
// 0074debb  56                   push esi
// 0074debc  8944240c             mov dword ptr [esp + 0xc], eax
// 0074dec0  8b4230               mov eax, dword ptr [edx + 0x30]
// 0074dec3  33f6                 xor esi, esi
// 0074dec5  57                   push edi
// 0074dec6  89442414             mov dword ptr [esp + 0x14], eax
// 0074deca  85c0                 test eax, eax
// 0074decc  7e4d                 jle 0x74df1b
// 0074dece  8bff                 mov edi, edi
// 0074ded0  8b4320               mov eax, dword ptr [ebx + 0x20]
// 0074ded3  85f6                 test esi, esi
// 0074ded5  7c3d                 jl 0x74df14
// 0074ded7  3b7030               cmp esi, dword ptr [eax + 0x30]
// 0074deda  7d38                 jge 0x74df14
// 0074dedc  8b402c               mov eax, dword ptr [eax + 0x2c]
// 0074dedf  8b3cb0               mov edi, dword ptr [eax + esi*4]
// 0074dee2  85ff                 test edi, edi
// 0074dee4  742e                 je 0x74df14
// 0074dee6  8bcf                 mov ecx, edi
// 0074dee8  e863eeffff           call 0x74cd50
// 0074deed  85c0                 test eax, eax
// 0074deef  7423                 je 0x74df14
// 0074def1  8bcf                 mov ecx, edi
// 0074def3  e8c8f4ffff           call 0x74d3c0
// 0074def8  01442410             add dword ptr [esp + 0x10], eax
// 0074defc  85ed                 test ebp, ebp
// 0074defe  7e05                 jle 0x74df05
// 0074df00  8b4360               mov eax, dword ptr [ebx + 0x60]
// 0074df03  eb02                 jmp 0x74df07
// 0074df05  33c0                 xor eax, eax
// 0074df07  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0074df0b  2bc8                 sub ecx, eax
// 0074df0d  394c241c             cmp dword ptr [esp + 0x1c], ecx
// 0074df11  7c15                 jl 0x74df28
// 0074df13  4d                   dec ebp
// 0074df14  46                   inc esi
// 0074df15  3b742414             cmp esi, dword ptr [esp + 0x14]
// 0074df19  7cb5                 jl 0x74ded0
// 0074df1b  5f                   pop edi
// 0074df1c  5e                   pop esi
// 0074df1d  5d                   pop ebp
// 0074df1e  83c8ff               or eax, 0xffffffff
// 0074df21  5b                   pop ebx
// 0074df22  83c408               add esp, 8
// 0074df25  c20800               ret 8
// 0074df28  5f                   pop edi
// 0074df29  8bc6                 mov eax, esi
// 0074df2b  5e                   pop esi
// 0074df2c  5d                   pop ebp
// 0074df2d  5b                   pop ebx
// 0074df2e  83c408               add esp, 8
// 0074df31  c20800               ret 8
// library xtp-11.2.2/Source\ReportControl\XTPReportHeader.cpp (function ?HitTestHeaderColumnIndex@CXTPReportHeader@@UBEHVCPoint@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/ReportControl/XTPReportHeader.cpp
