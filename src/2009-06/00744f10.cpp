// roc 2009-06 00744f10  unit: CXTPReportControl  size: 317 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00744f10
//
// 00744f10  83ec24               sub esp, 0x24
// 00744f13  53                   push ebx
// 00744f14  56                   push esi
// 00744f15  8b742430             mov esi, dword ptr [esp + 0x30]
// 00744f19  57                   push edi
// 00744f1a  33ff                 xor edi, edi
// 00744f1c  8bd9                 mov ebx, ecx
// 00744f1e  3bf7                 cmp esi, edi
// 00744f20  0f841e010000         je 0x745044
// 00744f26  8bce                 mov ecx, esi
// 00744f28  e8937f0000           call 0x74cec0
// 00744f2d  83f8ff               cmp eax, -1
// 00744f30  0f840e010000         je 0x745044
// 00744f36  397e60               cmp dword ptr [esi + 0x60], edi
// 00744f39  0f8405010000         je 0x745044
// 00744f3f  8b8bec000000         mov ecx, dword ptr [ebx + 0xec]
// 00744f45  3b4130               cmp eax, dword ptr [ecx + 0x30]
// 00744f48  0f8df6000000         jge 0x745044
// 00744f4e  8d542410             lea edx, [esp + 0x10]
// 00744f52  52                   push edx
// 00744f53  8bce                 mov ecx, esi
// 00744f55  e8867d0000           call 0x74cce0
// 00744f5a  8b8398000000         mov eax, dword ptr [ebx + 0x98]
// 00744f60  2b8390000000         sub eax, dword ptr [ebx + 0x90]
// 00744f66  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00744f6a  3bc8                 cmp ecx, eax
// 00744f6c  7c3d                 jl 0x744fab
// 00744f6e  8b9390000000         mov edx, dword ptr [ebx + 0x90]
// 00744f74  2b9398000000         sub edx, dword ptr [ebx + 0x98]
// 00744f7a  8b442410             mov eax, dword ptr [esp + 0x10]
// 00744f7e  03d1                 add edx, ecx
// 00744f80  3bc2                 cmp eax, edx
// 00744f82  7c0e                 jl 0x744f92
// 00744f84  8b8390000000         mov eax, dword ptr [ebx + 0x90]
// 00744f8a  2b8398000000         sub eax, dword ptr [ebx + 0x98]
// 00744f90  03c1                 add eax, ecx
// 00744f92  8b8b0c010000         mov ecx, dword ptr [ebx + 0x10c]
// 00744f98  03c8                 add ecx, eax
// 00744f9a  51                   push ecx
// 00744f9b  8bcb                 mov ecx, ebx
// 00744f9d  e80ed7ffff           call 0x7426b0
// 00744fa2  5f                   pop edi
// 00744fa3  5e                   pop esi
// 00744fa4  5b                   pop ebx
// 00744fa5  83c424               add esp, 0x24
// 00744fa8  c20400               ret 4
// 00744fab  8b8310010000         mov eax, dword ptr [ebx + 0x110]
// 00744fb1  3bc7                 cmp eax, edi
// 00744fb3  55                   push ebp
// 00744fb4  897c2410             mov dword ptr [esp + 0x10], edi
// 00744fb8  7e63                 jle 0x74501d
// 00744fba  8be8                 mov ebp, eax
// 00744fbc  8b83ec000000         mov eax, dword ptr [ebx + 0xec]
// 00744fc2  397830               cmp dword ptr [eax + 0x30], edi
// 00744fc5  7e56                 jle 0x74501d
// 00744fc7  85ed                 test ebp, ebp
// 00744fc9  7e52                 jle 0x74501d
// 00744fcb  85ff                 test edi, edi
// 00744fcd  7c0d                 jl 0x744fdc
// 00744fcf  3b7830               cmp edi, dword ptr [eax + 0x30]
// 00744fd2  7d08                 jge 0x744fdc
// 00744fd4  8b502c               mov edx, dword ptr [eax + 0x2c]
// 00744fd7  8b34ba               mov esi, dword ptr [edx + edi*4]
// 00744fda  eb02                 jmp 0x744fde
// 00744fdc  33f6                 xor esi, esi
// 00744fde  3b742438             cmp esi, dword ptr [esp + 0x38]
// 00744fe2  7431                 je 0x745015
// 00744fe4  85f6                 test esi, esi
// 00744fe6  741f                 je 0x745007
// 00744fe8  8bce                 mov ecx, esi
// 00744fea  e8617d0000           call 0x74cd50
// 00744fef  85c0                 test eax, eax
// 00744ff1  7414                 je 0x745007
// 00744ff3  8d442424             lea eax, [esp + 0x24]
// 00744ff7  50                   push eax
// 00744ff8  8bce                 mov ecx, esi
// 00744ffa  4d                   dec ebp
// 00744ffb  e8e07c0000           call 0x74cce0
// 00745000  8b4808               mov ecx, dword ptr [eax + 8]
// 00745003  894c2410             mov dword ptr [esp + 0x10], ecx
// 00745007  8b83ec000000         mov eax, dword ptr [ebx + 0xec]
// 0074500d  47                   inc edi
// 0074500e  3b7830               cmp edi, dword ptr [eax + 0x30]
// 00745011  7cb4                 jl 0x744fc7
// 00745013  eb08                 jmp 0x74501d
// 00745015  c744241000000000     mov dword ptr [esp + 0x10], 0
// 0074501d  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00745021  8b542410             mov edx, dword ptr [esp + 0x10]
// 00745025  8bc1                 mov eax, ecx
// 00745027  2bc2                 sub eax, edx
// 00745029  85c0                 test eax, eax
// 0074502b  7f16                 jg 0x745043
// 0074502d  8b830c010000         mov eax, dword ptr [ebx + 0x10c]
// 00745033  85c0                 test eax, eax
// 00745035  740c                 je 0x745043
// 00745037  2bc2                 sub eax, edx
// 00745039  03c1                 add eax, ecx
// 0074503b  50                   push eax
// 0074503c  8bcb                 mov ecx, ebx
// 0074503e  e86dd6ffff           call 0x7426b0
// 00745043  5d                   pop ebp
// 00745044  5f                   pop edi
// 00745045  5e                   pop esi
// 00745046  5b                   pop ebx
// 00745047  83c424               add esp, 0x24
// 0074504a  c20400               ret 4
// library xtp-11.2.2/Source\ReportControl\XTPReportControl.cpp (function ?EnsureVisible@CXTPReportControl@@QAEXPAVCXTPReportColumn@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/ReportControl/XTPReportControl.cpp
