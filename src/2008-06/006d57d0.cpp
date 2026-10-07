// roc 2008-06 006d57d0  unit: CXTPReportHeader  size: 262 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006d57d0
//
// 006d57d0  83ec10               sub esp, 0x10
// 006d57d3  8b542424             mov edx, dword ptr [esp + 0x24]
// 006d57d7  53                   push ebx
// 006d57d8  8bd9                 mov ebx, ecx
// 006d57da  8b4360               mov eax, dword ptr [ebx + 0x60]
// 006d57dd  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 006d57e1  55                   push ebp
// 006d57e2  c701ffffffff         mov dword ptr [ecx], 0xffffffff
// 006d57e8  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 006d57ec  56                   push esi
// 006d57ed  89442410             mov dword ptr [esp + 0x10], eax
// 006d57f1  8b442428             mov eax, dword ptr [esp + 0x28]
// 006d57f5  57                   push edi
// 006d57f6  33ff                 xor edi, edi
// 006d57f8  893a                 mov dword ptr [edx], edi
// 006d57fa  8b542424             mov edx, dword ptr [esp + 0x24]
// 006d57fe  8938                 mov dword ptr [eax], edi
// 006d5800  8939                 mov dword ptr [ecx], edi
// 006d5802  893a                 mov dword ptr [edx], edi
// 006d5804  8b4324               mov eax, dword ptr [ebx + 0x24]
// 006d5807  8b4b20               mov ecx, dword ptr [ebx + 0x20]
// 006d580a  8ba810010000         mov ebp, dword ptr [eax + 0x110]
// 006d5810  8b4130               mov eax, dword ptr [ecx + 0x30]
// 006d5813  3bc7                 cmp eax, edi
// 006d5815  897c2410             mov dword ptr [esp + 0x10], edi
// 006d5819  897c2418             mov dword ptr [esp + 0x18], edi
// 006d581d  8944241c             mov dword ptr [esp + 0x1c], eax
// 006d5821  0f8ea1000000         jle 0x6d58c8
// 006d5827  eb07                 jmp 0x6d5830
// 006d5829  8da42400000000       lea esp, [esp]
// 006d5830  8b4320               mov eax, dword ptr [ebx + 0x20]
// 006d5833  85ff                 test edi, edi
// 006d5835  0f8c82000000         jl 0x6d58bd
// 006d583b  3b7830               cmp edi, dword ptr [eax + 0x30]
// 006d583e  7d7d                 jge 0x6d58bd
// 006d5840  8b502c               mov edx, dword ptr [eax + 0x2c]
// 006d5843  8b34ba               mov esi, dword ptr [edx + edi*4]
// 006d5846  85f6                 test esi, esi
// 006d5848  7473                 je 0x6d58bd
// 006d584a  8bce                 mov ecx, esi
// 006d584c  e88fedffff           call 0x6d45e0
// 006d5851  85c0                 test eax, eax
// 006d5853  7468                 je 0x6d58bd
// 006d5855  85ed                 test ebp, ebp
// 006d5857  7f06                 jg 0x6d585f
// 006d5859  8b442434             mov eax, dword ptr [esp + 0x34]
// 006d585d  ff00                 inc dword ptr [eax]
// 006d585f  837c241800           cmp dword ptr [esp + 0x18], 0
// 006d5864  754a                 jne 0x6d58b0
// 006d5866  85ed                 test ebp, ebp
// 006d5868  7f06                 jg 0x6d5870
// 006d586a  8b442430             mov eax, dword ptr [esp + 0x30]
// 006d586e  ff00                 inc dword ptr [eax]
// 006d5870  8b442428             mov eax, dword ptr [esp + 0x28]
// 006d5874  8b08                 mov ecx, dword ptr [eax]
// 006d5876  8b542424             mov edx, dword ptr [esp + 0x24]
// 006d587a  890a                 mov dword ptr [edx], ecx
// 006d587c  8bce                 mov ecx, esi
// 006d587e  8930                 mov dword ptr [eax], esi
// 006d5880  e8cbf3ffff           call 0x6d4c50
// 006d5885  01442414             add dword ptr [esp + 0x14], eax
// 006d5889  85ed                 test ebp, ebp
// 006d588b  7e0e                 jle 0x6d589b
// 006d588d  8bce                 mov ecx, esi
// 006d588f  e8bcf3ffff           call 0x6d4c50
// 006d5894  01442410             add dword ptr [esp + 0x10], eax
// 006d5898  4d                   dec ebp
// 006d5899  eb22                 jmp 0x6d58bd
// 006d589b  8b442410             mov eax, dword ptr [esp + 0x10]
// 006d589f  40                   inc eax
// 006d58a0  3b442414             cmp eax, dword ptr [esp + 0x14]
// 006d58a4  7d17                 jge 0x6d58bd
// 006d58a6  c744241801000000     mov dword ptr [esp + 0x18], 1
// 006d58ae  eb0d                 jmp 0x6d58bd
// 006d58b0  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 006d58b4  833900               cmp dword ptr [ecx], 0
// 006d58b7  7504                 jne 0x6d58bd
// 006d58b9  8bd1                 mov edx, ecx
// 006d58bb  8932                 mov dword ptr [edx], esi
// 006d58bd  47                   inc edi
// 006d58be  3b7c241c             cmp edi, dword ptr [esp + 0x1c]
// 006d58c2  0f8c68ffffff         jl 0x6d5830
// 006d58c8  8b442410             mov eax, dword ptr [esp + 0x10]
// 006d58cc  5f                   pop edi
// 006d58cd  5e                   pop esi
// 006d58ce  5d                   pop ebp
// 006d58cf  5b                   pop ebx
// 006d58d0  83c410               add esp, 0x10
// 006d58d3  c21400               ret 0x14
// library xtp-11.2.2/Source\ReportControl\XTPReportHeader.cpp (function ?GetFulColScrollInfo@CXTPReportHeader@@QBEHAAPAVCXTPReportColumn@@00AAH1@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/ReportControl/XTPReportHeader.cpp
