// roc 2010-06 007dcd80  unit: CXTPReportHeader  size: 262 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 007dcd80
//
// 007dcd80  83ec10               sub esp, 0x10
// 007dcd83  8b542424             mov edx, dword ptr [esp + 0x24]
// 007dcd87  53                   push ebx
// 007dcd88  8bd9                 mov ebx, ecx
// 007dcd8a  8b4360               mov eax, dword ptr [ebx + 0x60]
// 007dcd8d  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 007dcd91  55                   push ebp
// 007dcd92  c701ffffffff         mov dword ptr [ecx], 0xffffffff
// 007dcd98  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 007dcd9c  56                   push esi
// 007dcd9d  89442410             mov dword ptr [esp + 0x10], eax
// 007dcda1  8b442428             mov eax, dword ptr [esp + 0x28]
// 007dcda5  57                   push edi
// 007dcda6  33ff                 xor edi, edi
// 007dcda8  893a                 mov dword ptr [edx], edi
// 007dcdaa  8b542424             mov edx, dword ptr [esp + 0x24]
// 007dcdae  8938                 mov dword ptr [eax], edi
// 007dcdb0  8939                 mov dword ptr [ecx], edi
// 007dcdb2  893a                 mov dword ptr [edx], edi
// 007dcdb4  8b4324               mov eax, dword ptr [ebx + 0x24]
// 007dcdb7  8b4b20               mov ecx, dword ptr [ebx + 0x20]
// 007dcdba  8ba810010000         mov ebp, dword ptr [eax + 0x110]
// 007dcdc0  8b4130               mov eax, dword ptr [ecx + 0x30]
// 007dcdc3  3bc7                 cmp eax, edi
// 007dcdc5  897c2410             mov dword ptr [esp + 0x10], edi
// 007dcdc9  897c2418             mov dword ptr [esp + 0x18], edi
// 007dcdcd  8944241c             mov dword ptr [esp + 0x1c], eax
// 007dcdd1  0f8ea1000000         jle 0x7dce78
// 007dcdd7  eb07                 jmp 0x7dcde0
// 007dcdd9  8da42400000000       lea esp, [esp]
// 007dcde0  8b4320               mov eax, dword ptr [ebx + 0x20]
// 007dcde3  85ff                 test edi, edi
// 007dcde5  0f8c82000000         jl 0x7dce6d
// 007dcdeb  3b7830               cmp edi, dword ptr [eax + 0x30]
// 007dcdee  7d7d                 jge 0x7dce6d
// 007dcdf0  8b502c               mov edx, dword ptr [eax + 0x2c]
// 007dcdf3  8b34ba               mov esi, dword ptr [edx + edi*4]
// 007dcdf6  85f6                 test esi, esi
// 007dcdf8  7473                 je 0x7dce6d
// 007dcdfa  8bce                 mov ecx, esi
// 007dcdfc  e89fedffff           call 0x7dbba0
// 007dce01  85c0                 test eax, eax
// 007dce03  7468                 je 0x7dce6d
// 007dce05  85ed                 test ebp, ebp
// 007dce07  7f06                 jg 0x7dce0f
// 007dce09  8b442434             mov eax, dword ptr [esp + 0x34]
// 007dce0d  ff00                 inc dword ptr [eax]
// 007dce0f  837c241800           cmp dword ptr [esp + 0x18], 0
// 007dce14  754a                 jne 0x7dce60
// 007dce16  85ed                 test ebp, ebp
// 007dce18  7f06                 jg 0x7dce20
// 007dce1a  8b442430             mov eax, dword ptr [esp + 0x30]
// 007dce1e  ff00                 inc dword ptr [eax]
// 007dce20  8b442428             mov eax, dword ptr [esp + 0x28]
// 007dce24  8b08                 mov ecx, dword ptr [eax]
// 007dce26  8b542424             mov edx, dword ptr [esp + 0x24]
// 007dce2a  890a                 mov dword ptr [edx], ecx
// 007dce2c  8bce                 mov ecx, esi
// 007dce2e  8930                 mov dword ptr [eax], esi
// 007dce30  e8cbf3ffff           call 0x7dc200
// 007dce35  01442414             add dword ptr [esp + 0x14], eax
// 007dce39  85ed                 test ebp, ebp
// 007dce3b  7e0e                 jle 0x7dce4b
// 007dce3d  8bce                 mov ecx, esi
// 007dce3f  e8bcf3ffff           call 0x7dc200
// 007dce44  01442410             add dword ptr [esp + 0x10], eax
// 007dce48  4d                   dec ebp
// 007dce49  eb22                 jmp 0x7dce6d
// 007dce4b  8b442410             mov eax, dword ptr [esp + 0x10]
// 007dce4f  40                   inc eax
// 007dce50  3b442414             cmp eax, dword ptr [esp + 0x14]
// 007dce54  7d17                 jge 0x7dce6d
// 007dce56  c744241801000000     mov dword ptr [esp + 0x18], 1
// 007dce5e  eb0d                 jmp 0x7dce6d
// 007dce60  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 007dce64  833900               cmp dword ptr [ecx], 0
// 007dce67  7504                 jne 0x7dce6d
// 007dce69  8bd1                 mov edx, ecx
// 007dce6b  8932                 mov dword ptr [edx], esi
// 007dce6d  47                   inc edi
// 007dce6e  3b7c241c             cmp edi, dword ptr [esp + 0x1c]
// 007dce72  0f8c68ffffff         jl 0x7dcde0
// 007dce78  8b442410             mov eax, dword ptr [esp + 0x10]
// 007dce7c  5f                   pop edi
// 007dce7d  5e                   pop esi
// 007dce7e  5d                   pop ebp
// 007dce7f  5b                   pop ebx
// 007dce80  83c410               add esp, 0x10
// 007dce83  c21400               ret 0x14
// library xtp-11.2.2/Source\ReportControl\XTPReportHeader.cpp (function ?GetFulColScrollInfo@CXTPReportHeader@@QBEHAAPAVCXTPReportColumn@@00AAH1@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/ReportControl/XTPReportHeader.cpp
