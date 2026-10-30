// roc 2009-12 00828d00  unit: CXTPReportHeader  size: 262 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00828d00
//
// 00828d00  83ec10               sub esp, 0x10
// 00828d03  8b542424             mov edx, dword ptr [esp + 0x24]
// 00828d07  53                   push ebx
// 00828d08  8bd9                 mov ebx, ecx
// 00828d0a  8b4360               mov eax, dword ptr [ebx + 0x60]
// 00828d0d  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 00828d11  55                   push ebp
// 00828d12  c701ffffffff         mov dword ptr [ecx], 0xffffffff
// 00828d18  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 00828d1c  56                   push esi
// 00828d1d  89442410             mov dword ptr [esp + 0x10], eax
// 00828d21  8b442428             mov eax, dword ptr [esp + 0x28]
// 00828d25  57                   push edi
// 00828d26  33ff                 xor edi, edi
// 00828d28  893a                 mov dword ptr [edx], edi
// 00828d2a  8b542424             mov edx, dword ptr [esp + 0x24]
// 00828d2e  8938                 mov dword ptr [eax], edi
// 00828d30  8939                 mov dword ptr [ecx], edi
// 00828d32  893a                 mov dword ptr [edx], edi
// 00828d34  8b4324               mov eax, dword ptr [ebx + 0x24]
// 00828d37  8b4b20               mov ecx, dword ptr [ebx + 0x20]
// 00828d3a  8ba810010000         mov ebp, dword ptr [eax + 0x110]
// 00828d40  8b4130               mov eax, dword ptr [ecx + 0x30]
// 00828d43  3bc7                 cmp eax, edi
// 00828d45  897c2410             mov dword ptr [esp + 0x10], edi
// 00828d49  897c2418             mov dword ptr [esp + 0x18], edi
// 00828d4d  8944241c             mov dword ptr [esp + 0x1c], eax
// 00828d51  0f8ea1000000         jle 0x828df8
// 00828d57  eb07                 jmp 0x828d60
// 00828d59  8da42400000000       lea esp, [esp]
// 00828d60  8b4320               mov eax, dword ptr [ebx + 0x20]
// 00828d63  85ff                 test edi, edi
// 00828d65  0f8c82000000         jl 0x828ded
// 00828d6b  3b7830               cmp edi, dword ptr [eax + 0x30]
// 00828d6e  7d7d                 jge 0x828ded
// 00828d70  8b502c               mov edx, dword ptr [eax + 0x2c]
// 00828d73  8b34ba               mov esi, dword ptr [edx + edi*4]
// 00828d76  85f6                 test esi, esi
// 00828d78  7473                 je 0x828ded
// 00828d7a  8bce                 mov ecx, esi
// 00828d7c  e83fad0800           call 0x8b3ac0
// 00828d81  85c0                 test eax, eax
// 00828d83  7468                 je 0x828ded
// 00828d85  85ed                 test ebp, ebp
// 00828d87  7f06                 jg 0x828d8f
// 00828d89  8b442434             mov eax, dword ptr [esp + 0x34]
// 00828d8d  ff00                 inc dword ptr [eax]
// 00828d8f  837c241800           cmp dword ptr [esp + 0x18], 0
// 00828d94  754a                 jne 0x828de0
// 00828d96  85ed                 test ebp, ebp
// 00828d98  7f06                 jg 0x828da0
// 00828d9a  8b442430             mov eax, dword ptr [esp + 0x30]
// 00828d9e  ff00                 inc dword ptr [eax]
// 00828da0  8b442428             mov eax, dword ptr [esp + 0x28]
// 00828da4  8b08                 mov ecx, dword ptr [eax]
// 00828da6  8b542424             mov edx, dword ptr [esp + 0x24]
// 00828daa  890a                 mov dword ptr [edx], ecx
// 00828dac  8bce                 mov ecx, esi
// 00828dae  8930                 mov dword ptr [eax], esi
// 00828db0  e8cbf3ffff           call 0x828180
// 00828db5  01442414             add dword ptr [esp + 0x14], eax
// 00828db9  85ed                 test ebp, ebp
// 00828dbb  7e0e                 jle 0x828dcb
// 00828dbd  8bce                 mov ecx, esi
// 00828dbf  e8bcf3ffff           call 0x828180
// 00828dc4  01442410             add dword ptr [esp + 0x10], eax
// 00828dc8  4d                   dec ebp
// 00828dc9  eb22                 jmp 0x828ded
// 00828dcb  8b442410             mov eax, dword ptr [esp + 0x10]
// 00828dcf  40                   inc eax
// 00828dd0  3b442414             cmp eax, dword ptr [esp + 0x14]
// 00828dd4  7d17                 jge 0x828ded
// 00828dd6  c744241801000000     mov dword ptr [esp + 0x18], 1
// 00828dde  eb0d                 jmp 0x828ded
// 00828de0  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 00828de4  833900               cmp dword ptr [ecx], 0
// 00828de7  7504                 jne 0x828ded
// 00828de9  8bd1                 mov edx, ecx
// 00828deb  8932                 mov dword ptr [edx], esi
// 00828ded  47                   inc edi
// 00828dee  3b7c241c             cmp edi, dword ptr [esp + 0x1c]
// 00828df2  0f8c68ffffff         jl 0x828d60
// 00828df8  8b442410             mov eax, dword ptr [esp + 0x10]
// 00828dfc  5f                   pop edi
// 00828dfd  5e                   pop esi
// 00828dfe  5d                   pop ebp
// 00828dff  5b                   pop ebx
// 00828e00  83c410               add esp, 0x10
// 00828e03  c21400               ret 0x14
// library xtp-11.2.2/Source\ReportControl\XTPReportHeader.cpp (function ?GetFulColScrollInfo@CXTPReportHeader@@QBEHAAPAVCXTPReportColumn@@00AAH1@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/ReportControl/XTPReportHeader.cpp
