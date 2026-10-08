// roc 2011-06 0083c600  unit: CXTPReportHeader  size: 262 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0083c600
//
// 0083c600  83ec10               sub esp, 0x10
// 0083c603  8b542424             mov edx, dword ptr [esp + 0x24]
// 0083c607  53                   push ebx
// 0083c608  8bd9                 mov ebx, ecx
// 0083c60a  8b4360               mov eax, dword ptr [ebx + 0x60]
// 0083c60d  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 0083c611  55                   push ebp
// 0083c612  c701ffffffff         mov dword ptr [ecx], 0xffffffff
// 0083c618  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0083c61c  56                   push esi
// 0083c61d  89442410             mov dword ptr [esp + 0x10], eax
// 0083c621  8b442428             mov eax, dword ptr [esp + 0x28]
// 0083c625  57                   push edi
// 0083c626  33ff                 xor edi, edi
// 0083c628  893a                 mov dword ptr [edx], edi
// 0083c62a  8b542424             mov edx, dword ptr [esp + 0x24]
// 0083c62e  8938                 mov dword ptr [eax], edi
// 0083c630  8939                 mov dword ptr [ecx], edi
// 0083c632  893a                 mov dword ptr [edx], edi
// 0083c634  8b4324               mov eax, dword ptr [ebx + 0x24]
// 0083c637  8b4b20               mov ecx, dword ptr [ebx + 0x20]
// 0083c63a  8ba810010000         mov ebp, dword ptr [eax + 0x110]
// 0083c640  8b4130               mov eax, dword ptr [ecx + 0x30]
// 0083c643  3bc7                 cmp eax, edi
// 0083c645  897c2410             mov dword ptr [esp + 0x10], edi
// 0083c649  897c2418             mov dword ptr [esp + 0x18], edi
// 0083c64d  8944241c             mov dword ptr [esp + 0x1c], eax
// 0083c651  0f8ea1000000         jle 0x83c6f8
// 0083c657  eb07                 jmp 0x83c660
// 0083c659  8da42400000000       lea esp, [esp]
// 0083c660  8b4320               mov eax, dword ptr [ebx + 0x20]
// 0083c663  85ff                 test edi, edi
// 0083c665  0f8c82000000         jl 0x83c6ed
// 0083c66b  3b7830               cmp edi, dword ptr [eax + 0x30]
// 0083c66e  7d7d                 jge 0x83c6ed
// 0083c670  8b502c               mov edx, dword ptr [eax + 0x2c]
// 0083c673  8b34ba               mov esi, dword ptr [edx + edi*4]
// 0083c676  85f6                 test esi, esi
// 0083c678  7473                 je 0x83c6ed
// 0083c67a  8bce                 mov ecx, esi
// 0083c67c  e8ef35ffff           call 0x82fc70
// 0083c681  85c0                 test eax, eax
// 0083c683  7468                 je 0x83c6ed
// 0083c685  85ed                 test ebp, ebp
// 0083c687  7f06                 jg 0x83c68f
// 0083c689  8b442434             mov eax, dword ptr [esp + 0x34]
// 0083c68d  ff00                 inc dword ptr [eax]
// 0083c68f  837c241800           cmp dword ptr [esp + 0x18], 0
// 0083c694  754a                 jne 0x83c6e0
// 0083c696  85ed                 test ebp, ebp
// 0083c698  7f06                 jg 0x83c6a0
// 0083c69a  8b442430             mov eax, dword ptr [esp + 0x30]
// 0083c69e  ff00                 inc dword ptr [eax]
// 0083c6a0  8b442428             mov eax, dword ptr [esp + 0x28]
// 0083c6a4  8b08                 mov ecx, dword ptr [eax]
// 0083c6a6  8b542424             mov edx, dword ptr [esp + 0x24]
// 0083c6aa  890a                 mov dword ptr [edx], ecx
// 0083c6ac  8bce                 mov ecx, esi
// 0083c6ae  8930                 mov dword ptr [eax], esi
// 0083c6b0  e81b3cffff           call 0x8302d0
// 0083c6b5  01442414             add dword ptr [esp + 0x14], eax
// 0083c6b9  85ed                 test ebp, ebp
// 0083c6bb  7e0e                 jle 0x83c6cb
// 0083c6bd  8bce                 mov ecx, esi
// 0083c6bf  e80c3cffff           call 0x8302d0
// 0083c6c4  01442410             add dword ptr [esp + 0x10], eax
// 0083c6c8  4d                   dec ebp
// 0083c6c9  eb22                 jmp 0x83c6ed
// 0083c6cb  8b442410             mov eax, dword ptr [esp + 0x10]
// 0083c6cf  40                   inc eax
// 0083c6d0  3b442414             cmp eax, dword ptr [esp + 0x14]
// 0083c6d4  7d17                 jge 0x83c6ed
// 0083c6d6  c744241801000000     mov dword ptr [esp + 0x18], 1
// 0083c6de  eb0d                 jmp 0x83c6ed
// 0083c6e0  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 0083c6e4  833900               cmp dword ptr [ecx], 0
// 0083c6e7  7504                 jne 0x83c6ed
// 0083c6e9  8bd1                 mov edx, ecx
// 0083c6eb  8932                 mov dword ptr [edx], esi
// 0083c6ed  47                   inc edi
// 0083c6ee  3b7c241c             cmp edi, dword ptr [esp + 0x1c]
// 0083c6f2  0f8c68ffffff         jl 0x83c660
// 0083c6f8  8b442410             mov eax, dword ptr [esp + 0x10]
// 0083c6fc  5f                   pop edi
// 0083c6fd  5e                   pop esi
// 0083c6fe  5d                   pop ebp
// 0083c6ff  5b                   pop ebx
// 0083c700  83c410               add esp, 0x10
// 0083c703  c21400               ret 0x14
// library xtp-11.2.2/Source\ReportControl\XTPReportHeader.cpp (function ?GetFulColScrollInfo@CXTPReportHeader@@QBEHAAPAVCXTPReportColumn@@00AAH1@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/ReportControl/XTPReportHeader.cpp
