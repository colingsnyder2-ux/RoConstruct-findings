// roc 2011-06 00833f10  unit: CXTPReportControl  size: 317 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00833f10
//
// 00833f10  83ec24               sub esp, 0x24
// 00833f13  53                   push ebx
// 00833f14  56                   push esi
// 00833f15  8b742430             mov esi, dword ptr [esp + 0x30]
// 00833f19  57                   push edi
// 00833f1a  33ff                 xor edi, edi
// 00833f1c  8bd9                 mov ebx, ecx
// 00833f1e  3bf7                 cmp esi, edi
// 00833f20  0f841e010000         je 0x834044
// 00833f26  8bce                 mov ecx, esi
// 00833f28  e8a3beffff           call 0x82fdd0
// 00833f2d  83f8ff               cmp eax, -1
// 00833f30  0f840e010000         je 0x834044
// 00833f36  397e60               cmp dword ptr [esi + 0x60], edi
// 00833f39  0f8405010000         je 0x834044
// 00833f3f  8b8bec000000         mov ecx, dword ptr [ebx + 0xec]
// 00833f45  3b4130               cmp eax, dword ptr [ecx + 0x30]
// 00833f48  0f8df6000000         jge 0x834044
// 00833f4e  8d542410             lea edx, [esp + 0x10]
// 00833f52  52                   push edx
// 00833f53  8bce                 mov ecx, esi
// 00833f55  e8a6bcffff           call 0x82fc00
// 00833f5a  8b8398000000         mov eax, dword ptr [ebx + 0x98]
// 00833f60  2b8390000000         sub eax, dword ptr [ebx + 0x90]
// 00833f66  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00833f6a  3bc8                 cmp ecx, eax
// 00833f6c  7c3d                 jl 0x833fab
// 00833f6e  8b9390000000         mov edx, dword ptr [ebx + 0x90]
// 00833f74  2b9398000000         sub edx, dword ptr [ebx + 0x98]
// 00833f7a  8b442410             mov eax, dword ptr [esp + 0x10]
// 00833f7e  03d1                 add edx, ecx
// 00833f80  3bc2                 cmp eax, edx
// 00833f82  7c0e                 jl 0x833f92
// 00833f84  8b8390000000         mov eax, dword ptr [ebx + 0x90]
// 00833f8a  2b8398000000         sub eax, dword ptr [ebx + 0x98]
// 00833f90  03c1                 add eax, ecx
// 00833f92  8b8b0c010000         mov ecx, dword ptr [ebx + 0x10c]
// 00833f98  03c8                 add ecx, eax
// 00833f9a  51                   push ecx
// 00833f9b  8bcb                 mov ecx, ebx
// 00833f9d  e85ed7ffff           call 0x831700
// 00833fa2  5f                   pop edi
// 00833fa3  5e                   pop esi
// 00833fa4  5b                   pop ebx
// 00833fa5  83c424               add esp, 0x24
// 00833fa8  c20400               ret 4
// 00833fab  8b8310010000         mov eax, dword ptr [ebx + 0x110]
// 00833fb1  3bc7                 cmp eax, edi
// 00833fb3  55                   push ebp
// 00833fb4  897c2410             mov dword ptr [esp + 0x10], edi
// 00833fb8  7e63                 jle 0x83401d
// 00833fba  8be8                 mov ebp, eax
// 00833fbc  8b83ec000000         mov eax, dword ptr [ebx + 0xec]
// 00833fc2  397830               cmp dword ptr [eax + 0x30], edi
// 00833fc5  7e56                 jle 0x83401d
// 00833fc7  85ed                 test ebp, ebp
// 00833fc9  7e52                 jle 0x83401d
// 00833fcb  85ff                 test edi, edi
// 00833fcd  7c0d                 jl 0x833fdc
// 00833fcf  3b7830               cmp edi, dword ptr [eax + 0x30]
// 00833fd2  7d08                 jge 0x833fdc
// 00833fd4  8b502c               mov edx, dword ptr [eax + 0x2c]
// 00833fd7  8b34ba               mov esi, dword ptr [edx + edi*4]
// 00833fda  eb02                 jmp 0x833fde
// 00833fdc  33f6                 xor esi, esi
// 00833fde  3b742438             cmp esi, dword ptr [esp + 0x38]
// 00833fe2  7431                 je 0x834015
// 00833fe4  85f6                 test esi, esi
// 00833fe6  741f                 je 0x834007
// 00833fe8  8bce                 mov ecx, esi
// 00833fea  e881bcffff           call 0x82fc70
// 00833fef  85c0                 test eax, eax
// 00833ff1  7414                 je 0x834007
// 00833ff3  8d442424             lea eax, [esp + 0x24]
// 00833ff7  50                   push eax
// 00833ff8  8bce                 mov ecx, esi
// 00833ffa  4d                   dec ebp
// 00833ffb  e800bcffff           call 0x82fc00
// 00834000  8b4808               mov ecx, dword ptr [eax + 8]
// 00834003  894c2410             mov dword ptr [esp + 0x10], ecx
// 00834007  8b83ec000000         mov eax, dword ptr [ebx + 0xec]
// 0083400d  47                   inc edi
// 0083400e  3b7830               cmp edi, dword ptr [eax + 0x30]
// 00834011  7cb4                 jl 0x833fc7
// 00834013  eb08                 jmp 0x83401d
// 00834015  c744241000000000     mov dword ptr [esp + 0x10], 0
// 0083401d  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00834021  8b542410             mov edx, dword ptr [esp + 0x10]
// 00834025  8bc1                 mov eax, ecx
// 00834027  2bc2                 sub eax, edx
// 00834029  85c0                 test eax, eax
// 0083402b  7f16                 jg 0x834043
// 0083402d  8b830c010000         mov eax, dword ptr [ebx + 0x10c]
// 00834033  85c0                 test eax, eax
// 00834035  740c                 je 0x834043
// 00834037  2bc2                 sub eax, edx
// 00834039  03c1                 add eax, ecx
// 0083403b  50                   push eax
// 0083403c  8bcb                 mov ecx, ebx
// 0083403e  e8bdd6ffff           call 0x831700
// 00834043  5d                   pop ebp
// 00834044  5f                   pop edi
// 00834045  5e                   pop esi
// 00834046  5b                   pop ebx
// 00834047  83c424               add esp, 0x24
// 0083404a  c20400               ret 4
// library xtp-11.2.2/Source\ReportControl\XTPReportControl.cpp (function ?EnsureVisible@CXTPReportControl@@QAEXPAVCXTPReportColumn@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/ReportControl/XTPReportControl.cpp
