// roc 2012-06 009b4c20  unit: CXTPReportHeader  size: 262 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009b4c20
//
// 009b4c20  83ec10               sub esp, 0x10
// 009b4c23  8b542424             mov edx, dword ptr [esp + 0x24]
// 009b4c27  53                   push ebx
// 009b4c28  8bd9                 mov ebx, ecx
// 009b4c2a  8b4360               mov eax, dword ptr [ebx + 0x60]
// 009b4c2d  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 009b4c31  55                   push ebp
// 009b4c32  c701ffffffff         mov dword ptr [ecx], 0xffffffff
// 009b4c38  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 009b4c3c  56                   push esi
// 009b4c3d  89442410             mov dword ptr [esp + 0x10], eax
// 009b4c41  8b442428             mov eax, dword ptr [esp + 0x28]
// 009b4c45  57                   push edi
// 009b4c46  33ff                 xor edi, edi
// 009b4c48  893a                 mov dword ptr [edx], edi
// 009b4c4a  8b542424             mov edx, dword ptr [esp + 0x24]
// 009b4c4e  8938                 mov dword ptr [eax], edi
// 009b4c50  8939                 mov dword ptr [ecx], edi
// 009b4c52  893a                 mov dword ptr [edx], edi
// 009b4c54  8b4324               mov eax, dword ptr [ebx + 0x24]
// 009b4c57  8b4b20               mov ecx, dword ptr [ebx + 0x20]
// 009b4c5a  8ba810010000         mov ebp, dword ptr [eax + 0x110]
// 009b4c60  8b4130               mov eax, dword ptr [ecx + 0x30]
// 009b4c63  3bc7                 cmp eax, edi
// 009b4c65  897c2410             mov dword ptr [esp + 0x10], edi
// 009b4c69  897c2418             mov dword ptr [esp + 0x18], edi
// 009b4c6d  8944241c             mov dword ptr [esp + 0x1c], eax
// 009b4c71  0f8ea1000000         jle 0x9b4d18
// 009b4c77  eb07                 jmp 0x9b4c80
// 009b4c79  8da42400000000       lea esp, [esp]
// 009b4c80  8b4320               mov eax, dword ptr [ebx + 0x20]
// 009b4c83  85ff                 test edi, edi
// 009b4c85  0f8c82000000         jl 0x9b4d0d
// 009b4c8b  3b7830               cmp edi, dword ptr [eax + 0x30]
// 009b4c8e  7d7d                 jge 0x9b4d0d
// 009b4c90  8b502c               mov edx, dword ptr [eax + 0x2c]
// 009b4c93  8b34ba               mov esi, dword ptr [edx + edi*4]
// 009b4c96  85f6                 test esi, esi
// 009b4c98  7473                 je 0x9b4d0d
// 009b4c9a  8bce                 mov ecx, esi
// 009b4c9c  e88f870800           call 0xa3d430
// 009b4ca1  85c0                 test eax, eax
// 009b4ca3  7468                 je 0x9b4d0d
// 009b4ca5  85ed                 test ebp, ebp
// 009b4ca7  7f06                 jg 0x9b4caf
// 009b4ca9  8b442434             mov eax, dword ptr [esp + 0x34]
// 009b4cad  ff00                 inc dword ptr [eax]
// 009b4caf  837c241800           cmp dword ptr [esp + 0x18], 0
// 009b4cb4  754a                 jne 0x9b4d00
// 009b4cb6  85ed                 test ebp, ebp
// 009b4cb8  7f06                 jg 0x9b4cc0
// 009b4cba  8b442430             mov eax, dword ptr [esp + 0x30]
// 009b4cbe  ff00                 inc dword ptr [eax]
// 009b4cc0  8b442428             mov eax, dword ptr [esp + 0x28]
// 009b4cc4  8b08                 mov ecx, dword ptr [eax]
// 009b4cc6  8b542424             mov edx, dword ptr [esp + 0x24]
// 009b4cca  890a                 mov dword ptr [edx], ecx
// 009b4ccc  8bce                 mov ecx, esi
// 009b4cce  8930                 mov dword ptr [eax], esi
// 009b4cd0  e8eb3bffff           call 0x9a88c0
// 009b4cd5  01442414             add dword ptr [esp + 0x14], eax
// 009b4cd9  85ed                 test ebp, ebp
// 009b4cdb  7e0e                 jle 0x9b4ceb
// 009b4cdd  8bce                 mov ecx, esi
// 009b4cdf  e8dc3bffff           call 0x9a88c0
// 009b4ce4  01442410             add dword ptr [esp + 0x10], eax
// 009b4ce8  4d                   dec ebp
// 009b4ce9  eb22                 jmp 0x9b4d0d
// 009b4ceb  8b442410             mov eax, dword ptr [esp + 0x10]
// 009b4cef  40                   inc eax
// 009b4cf0  3b442414             cmp eax, dword ptr [esp + 0x14]
// 009b4cf4  7d17                 jge 0x9b4d0d
// 009b4cf6  c744241801000000     mov dword ptr [esp + 0x18], 1
// 009b4cfe  eb0d                 jmp 0x9b4d0d
// 009b4d00  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 009b4d04  833900               cmp dword ptr [ecx], 0
// 009b4d07  7504                 jne 0x9b4d0d
// 009b4d09  8bd1                 mov edx, ecx
// 009b4d0b  8932                 mov dword ptr [edx], esi
// 009b4d0d  47                   inc edi
// 009b4d0e  3b7c241c             cmp edi, dword ptr [esp + 0x1c]
// 009b4d12  0f8c68ffffff         jl 0x9b4c80
// 009b4d18  8b442410             mov eax, dword ptr [esp + 0x10]
// 009b4d1c  5f                   pop edi
// 009b4d1d  5e                   pop esi
// 009b4d1e  5d                   pop ebp
// 009b4d1f  5b                   pop ebx
// 009b4d20  83c410               add esp, 0x10
// 009b4d23  c21400               ret 0x14
// library xtp-11.2.2/Source\ReportControl\XTPReportHeader.cpp (function ?GetFulColScrollInfo@CXTPReportHeader@@QBEHAAPAVCXTPReportColumn@@00AAH1@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/ReportControl/XTPReportHeader.cpp
