// roc 2012-06 009ac510  unit: CXTPReportControl  size: 317 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009ac510
//
// 009ac510  83ec24               sub esp, 0x24
// 009ac513  53                   push ebx
// 009ac514  56                   push esi
// 009ac515  8b742430             mov esi, dword ptr [esp + 0x30]
// 009ac519  57                   push edi
// 009ac51a  33ff                 xor edi, edi
// 009ac51c  8bd9                 mov ebx, ecx
// 009ac51e  3bf7                 cmp esi, edi
// 009ac520  0f841e010000         je 0x9ac644
// 009ac526  8bce                 mov ecx, esi
// 009ac528  e893beffff           call 0x9a83c0
// 009ac52d  83f8ff               cmp eax, -1
// 009ac530  0f840e010000         je 0x9ac644
// 009ac536  397e60               cmp dword ptr [esi + 0x60], edi
// 009ac539  0f8405010000         je 0x9ac644
// 009ac53f  8b8bec000000         mov ecx, dword ptr [ebx + 0xec]
// 009ac545  3b4130               cmp eax, dword ptr [ecx + 0x30]
// 009ac548  0f8df6000000         jge 0x9ac644
// 009ac54e  8d542410             lea edx, [esp + 0x10]
// 009ac552  52                   push edx
// 009ac553  8bce                 mov ecx, esi
// 009ac555  e8a6bcffff           call 0x9a8200
// 009ac55a  8b8398000000         mov eax, dword ptr [ebx + 0x98]
// 009ac560  2b8390000000         sub eax, dword ptr [ebx + 0x90]
// 009ac566  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 009ac56a  3bc8                 cmp ecx, eax
// 009ac56c  7c3d                 jl 0x9ac5ab
// 009ac56e  8b9390000000         mov edx, dword ptr [ebx + 0x90]
// 009ac574  2b9398000000         sub edx, dword ptr [ebx + 0x98]
// 009ac57a  8b442410             mov eax, dword ptr [esp + 0x10]
// 009ac57e  03d1                 add edx, ecx
// 009ac580  3bc2                 cmp eax, edx
// 009ac582  7c0e                 jl 0x9ac592
// 009ac584  8b8390000000         mov eax, dword ptr [ebx + 0x90]
// 009ac58a  2b8398000000         sub eax, dword ptr [ebx + 0x98]
// 009ac590  03c1                 add eax, ecx
// 009ac592  8b8b0c010000         mov ecx, dword ptr [ebx + 0x10c]
// 009ac598  03c8                 add ecx, eax
// 009ac59a  51                   push ecx
// 009ac59b  8bcb                 mov ecx, ebx
// 009ac59d  e84ed7ffff           call 0x9a9cf0
// 009ac5a2  5f                   pop edi
// 009ac5a3  5e                   pop esi
// 009ac5a4  5b                   pop ebx
// 009ac5a5  83c424               add esp, 0x24
// 009ac5a8  c20400               ret 4
// 009ac5ab  8b8310010000         mov eax, dword ptr [ebx + 0x110]
// 009ac5b1  3bc7                 cmp eax, edi
// 009ac5b3  55                   push ebp
// 009ac5b4  897c2410             mov dword ptr [esp + 0x10], edi
// 009ac5b8  7e63                 jle 0x9ac61d
// 009ac5ba  8be8                 mov ebp, eax
// 009ac5bc  8b83ec000000         mov eax, dword ptr [ebx + 0xec]
// 009ac5c2  397830               cmp dword ptr [eax + 0x30], edi
// 009ac5c5  7e56                 jle 0x9ac61d
// 009ac5c7  85ed                 test ebp, ebp
// 009ac5c9  7e52                 jle 0x9ac61d
// 009ac5cb  85ff                 test edi, edi
// 009ac5cd  7c0d                 jl 0x9ac5dc
// 009ac5cf  3b7830               cmp edi, dword ptr [eax + 0x30]
// 009ac5d2  7d08                 jge 0x9ac5dc
// 009ac5d4  8b502c               mov edx, dword ptr [eax + 0x2c]
// 009ac5d7  8b34ba               mov esi, dword ptr [edx + edi*4]
// 009ac5da  eb02                 jmp 0x9ac5de
// 009ac5dc  33f6                 xor esi, esi
// 009ac5de  3b742438             cmp esi, dword ptr [esp + 0x38]
// 009ac5e2  7431                 je 0x9ac615
// 009ac5e4  85f6                 test esi, esi
// 009ac5e6  741f                 je 0x9ac607
// 009ac5e8  8bce                 mov ecx, esi
// 009ac5ea  e8410e0900           call 0xa3d430
// 009ac5ef  85c0                 test eax, eax
// 009ac5f1  7414                 je 0x9ac607
// 009ac5f3  8d442424             lea eax, [esp + 0x24]
// 009ac5f7  50                   push eax
// 009ac5f8  8bce                 mov ecx, esi
// 009ac5fa  4d                   dec ebp
// 009ac5fb  e800bcffff           call 0x9a8200
// 009ac600  8b4808               mov ecx, dword ptr [eax + 8]
// 009ac603  894c2410             mov dword ptr [esp + 0x10], ecx
// 009ac607  8b83ec000000         mov eax, dword ptr [ebx + 0xec]
// 009ac60d  47                   inc edi
// 009ac60e  3b7830               cmp edi, dword ptr [eax + 0x30]
// 009ac611  7cb4                 jl 0x9ac5c7
// 009ac613  eb08                 jmp 0x9ac61d
// 009ac615  c744241000000000     mov dword ptr [esp + 0x10], 0
// 009ac61d  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 009ac621  8b542410             mov edx, dword ptr [esp + 0x10]
// 009ac625  8bc1                 mov eax, ecx
// 009ac627  2bc2                 sub eax, edx
// 009ac629  85c0                 test eax, eax
// 009ac62b  7f16                 jg 0x9ac643
// 009ac62d  8b830c010000         mov eax, dword ptr [ebx + 0x10c]
// 009ac633  85c0                 test eax, eax
// 009ac635  740c                 je 0x9ac643
// 009ac637  2bc2                 sub eax, edx
// 009ac639  03c1                 add eax, ecx
// 009ac63b  50                   push eax
// 009ac63c  8bcb                 mov ecx, ebx
// 009ac63e  e8add6ffff           call 0x9a9cf0
// 009ac643  5d                   pop ebp
// 009ac644  5f                   pop edi
// 009ac645  5e                   pop esi
// 009ac646  5b                   pop ebx
// 009ac647  83c424               add esp, 0x24
// 009ac64a  c20400               ret 4
// library xtp-11.2.2/Source\ReportControl\XTPReportControl.cpp (function ?EnsureVisible@CXTPReportControl@@QAEXPAVCXTPReportColumn@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/ReportControl/XTPReportControl.cpp
