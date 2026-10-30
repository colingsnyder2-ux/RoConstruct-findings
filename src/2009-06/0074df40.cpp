// roc 2009-06 0074df40  unit: CXTPReportHeader  size: 262 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0074df40
//
// 0074df40  83ec10               sub esp, 0x10
// 0074df43  8b542424             mov edx, dword ptr [esp + 0x24]
// 0074df47  53                   push ebx
// 0074df48  8bd9                 mov ebx, ecx
// 0074df4a  8b4360               mov eax, dword ptr [ebx + 0x60]
// 0074df4d  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 0074df51  55                   push ebp
// 0074df52  c701ffffffff         mov dword ptr [ecx], 0xffffffff
// 0074df58  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0074df5c  56                   push esi
// 0074df5d  89442410             mov dword ptr [esp + 0x10], eax
// 0074df61  8b442428             mov eax, dword ptr [esp + 0x28]
// 0074df65  57                   push edi
// 0074df66  33ff                 xor edi, edi
// 0074df68  893a                 mov dword ptr [edx], edi
// 0074df6a  8b542424             mov edx, dword ptr [esp + 0x24]
// 0074df6e  8938                 mov dword ptr [eax], edi
// 0074df70  8939                 mov dword ptr [ecx], edi
// 0074df72  893a                 mov dword ptr [edx], edi
// 0074df74  8b4324               mov eax, dword ptr [ebx + 0x24]
// 0074df77  8b4b20               mov ecx, dword ptr [ebx + 0x20]
// 0074df7a  8ba810010000         mov ebp, dword ptr [eax + 0x110]
// 0074df80  8b4130               mov eax, dword ptr [ecx + 0x30]
// 0074df83  3bc7                 cmp eax, edi
// 0074df85  897c2410             mov dword ptr [esp + 0x10], edi
// 0074df89  897c2418             mov dword ptr [esp + 0x18], edi
// 0074df8d  8944241c             mov dword ptr [esp + 0x1c], eax
// 0074df91  0f8ea1000000         jle 0x74e038
// 0074df97  eb07                 jmp 0x74dfa0
// 0074df99  8da42400000000       lea esp, [esp]
// 0074dfa0  8b4320               mov eax, dword ptr [ebx + 0x20]
// 0074dfa3  85ff                 test edi, edi
// 0074dfa5  0f8c82000000         jl 0x74e02d
// 0074dfab  3b7830               cmp edi, dword ptr [eax + 0x30]
// 0074dfae  7d7d                 jge 0x74e02d
// 0074dfb0  8b502c               mov edx, dword ptr [eax + 0x2c]
// 0074dfb3  8b34ba               mov esi, dword ptr [edx + edi*4]
// 0074dfb6  85f6                 test esi, esi
// 0074dfb8  7473                 je 0x74e02d
// 0074dfba  8bce                 mov ecx, esi
// 0074dfbc  e88fedffff           call 0x74cd50
// 0074dfc1  85c0                 test eax, eax
// 0074dfc3  7468                 je 0x74e02d
// 0074dfc5  85ed                 test ebp, ebp
// 0074dfc7  7f06                 jg 0x74dfcf
// 0074dfc9  8b442434             mov eax, dword ptr [esp + 0x34]
// 0074dfcd  ff00                 inc dword ptr [eax]
// 0074dfcf  837c241800           cmp dword ptr [esp + 0x18], 0
// 0074dfd4  754a                 jne 0x74e020
// 0074dfd6  85ed                 test ebp, ebp
// 0074dfd8  7f06                 jg 0x74dfe0
// 0074dfda  8b442430             mov eax, dword ptr [esp + 0x30]
// 0074dfde  ff00                 inc dword ptr [eax]
// 0074dfe0  8b442428             mov eax, dword ptr [esp + 0x28]
// 0074dfe4  8b08                 mov ecx, dword ptr [eax]
// 0074dfe6  8b542424             mov edx, dword ptr [esp + 0x24]
// 0074dfea  890a                 mov dword ptr [edx], ecx
// 0074dfec  8bce                 mov ecx, esi
// 0074dfee  8930                 mov dword ptr [eax], esi
// 0074dff0  e8cbf3ffff           call 0x74d3c0
// 0074dff5  01442414             add dword ptr [esp + 0x14], eax
// 0074dff9  85ed                 test ebp, ebp
// 0074dffb  7e0e                 jle 0x74e00b
// 0074dffd  8bce                 mov ecx, esi
// 0074dfff  e8bcf3ffff           call 0x74d3c0
// 0074e004  01442410             add dword ptr [esp + 0x10], eax
// 0074e008  4d                   dec ebp
// 0074e009  eb22                 jmp 0x74e02d
// 0074e00b  8b442410             mov eax, dword ptr [esp + 0x10]
// 0074e00f  40                   inc eax
// 0074e010  3b442414             cmp eax, dword ptr [esp + 0x14]
// 0074e014  7d17                 jge 0x74e02d
// 0074e016  c744241801000000     mov dword ptr [esp + 0x18], 1
// 0074e01e  eb0d                 jmp 0x74e02d
// 0074e020  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 0074e024  833900               cmp dword ptr [ecx], 0
// 0074e027  7504                 jne 0x74e02d
// 0074e029  8bd1                 mov edx, ecx
// 0074e02b  8932                 mov dword ptr [edx], esi
// 0074e02d  47                   inc edi
// 0074e02e  3b7c241c             cmp edi, dword ptr [esp + 0x1c]
// 0074e032  0f8c68ffffff         jl 0x74dfa0
// 0074e038  8b442410             mov eax, dword ptr [esp + 0x10]
// 0074e03c  5f                   pop edi
// 0074e03d  5e                   pop esi
// 0074e03e  5d                   pop ebp
// 0074e03f  5b                   pop ebx
// 0074e040  83c410               add esp, 0x10
// 0074e043  c21400               ret 0x14
// library xtp-11.2.2/Source\ReportControl\XTPReportHeader.cpp (function ?GetFulColScrollInfo@CXTPReportHeader@@QBEHAAPAVCXTPReportColumn@@00AAH1@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/ReportControl/XTPReportHeader.cpp
