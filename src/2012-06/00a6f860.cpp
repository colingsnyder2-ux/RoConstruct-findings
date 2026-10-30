// roc 2012-06 00a6f860  unit: CXTPRibbonGroup  size: 339 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a6f860
//
// 00a6f860  83ec28               sub esp, 0x28
// 00a6f863  53                   push ebx
// 00a6f864  55                   push ebp
// 00a6f865  56                   push esi
// 00a6f866  8bf1                 mov esi, ecx
// 00a6f868  8b4e5c               mov ecx, dword ptr [esi + 0x5c]
// 00a6f86b  57                   push edi
// 00a6f86c  e87febfaff           call 0xa1e3f0
// 00a6f871  8b10                 mov edx, dword ptr [eax]
// 00a6f873  8b6c243c             mov ebp, dword ptr [esp + 0x3c]
// 00a6f877  56                   push esi
// 00a6f878  8bc8                 mov ecx, eax
// 00a6f87a  8b8240010000         mov eax, dword ptr [edx + 0x140]
// 00a6f880  55                   push ebp
// 00a6f881  ffd0                 call eax
// 00a6f883  8b464c               mov eax, dword ptr [esi + 0x4c]
// 00a6f886  33db                 xor ebx, ebx
// 00a6f888  c744243c01000000     mov dword ptr [esp + 0x3c], 1
// 00a6f890  85c0                 test eax, eax
// 00a6f892  0f8eca000000         jle 0xa6f962
// 00a6f898  85db                 test ebx, ebx
// 00a6f89a  7c15                 jl 0xa6f8b1
// 00a6f89c  3bd8                 cmp ebx, eax
// 00a6f89e  7d11                 jge 0xa6f8b1
// 00a6f8a0  3b5e4c               cmp ebx, dword ptr [esi + 0x4c]
// 00a6f8a3  0f8d05010000         jge 0xa6f9ae
// 00a6f8a9  8b4e48               mov ecx, dword ptr [esi + 0x48]
// 00a6f8ac  8b3c99               mov edi, dword ptr [ecx + ebx*4]
// 00a6f8af  eb02                 jmp 0xa6f8b3
// 00a6f8b1  33ff                 xor edi, edi
// 00a6f8b3  8b17                 mov edx, dword ptr [edi]
// 00a6f8b5  8b8280000000         mov eax, dword ptr [edx + 0x80]
// 00a6f8bb  6a00                 push 0
// 00a6f8bd  8bcf                 mov ecx, edi
// 00a6f8bf  ffd0                 call eax
// 00a6f8c1  85c0                 test eax, eax
// 00a6f8c3  0f848d000000         je 0xa6f956
// 00a6f8c9  837e2400             cmp dword ptr [esi + 0x24], 0
// 00a6f8cd  7531                 jne 0xa6f900
// 00a6f8cf  83bf9800000000       cmp dword ptr [edi + 0x98], 0
// 00a6f8d6  7428                 je 0xa6f900
// 00a6f8d8  837c243c00           cmp dword ptr [esp + 0x3c], 0
// 00a6f8dd  7521                 jne 0xa6f900
// 00a6f8df  8b4e5c               mov ecx, dword ptr [esi + 0x5c]
// 00a6f8e2  e8c934f2ff           call 0x992db0
// 00a6f8e7  8b4e5c               mov ecx, dword ptr [esi + 0x5c]
// 00a6f8ea  8b10                 mov edx, dword ptr [eax]
// 00a6f8ec  8b928c000000         mov edx, dword ptr [edx + 0x8c]
// 00a6f8f2  6a01                 push 1
// 00a6f8f4  57                   push edi
// 00a6f8f5  51                   push ecx
// 00a6f8f6  55                   push ebp
// 00a6f8f7  8d4c2420             lea ecx, [esp + 0x20]
// 00a6f8fb  51                   push ecx
// 00a6f8fc  8bc8                 mov ecx, eax
// 00a6f8fe  ffd2                 call edx
// 00a6f900  8b8fc4000000         mov ecx, dword ptr [edi + 0xc4]
// 00a6f906  8b87c0000000         mov eax, dword ptr [edi + 0xc0]
// 00a6f90c  8b97c8000000         mov edx, dword ptr [edi + 0xc8]
// 00a6f912  89442418             mov dword ptr [esp + 0x18], eax
// 00a6f916  8b87cc000000         mov eax, dword ptr [edi + 0xcc]
// 00a6f91c  894c241c             mov dword ptr [esp + 0x1c], ecx
// 00a6f920  8d4c2418             lea ecx, [esp + 0x18]
// 00a6f924  89542420             mov dword ptr [esp + 0x20], edx
// 00a6f928  51                   push ecx
// 00a6f929  8d542444             lea edx, [esp + 0x44]
// 00a6f92d  89442428             mov dword ptr [esp + 0x28], eax
// 00a6f931  52                   push edx
// 00a6f932  8d442430             lea eax, [esp + 0x30]
// 00a6f936  50                   push eax
// 00a6f937  ff15f83cb200         call dword ptr [0xb23cf8]
// 00a6f93d  85c0                 test eax, eax
// 00a6f93f  740d                 je 0xa6f94e
// 00a6f941  8b17                 mov edx, dword ptr [edi]
// 00a6f943  8b82a0000000         mov eax, dword ptr [edx + 0xa0]
// 00a6f949  55                   push ebp
// 00a6f94a  8bcf                 mov ecx, edi
// 00a6f94c  ffd0                 call eax
// 00a6f94e  c744243c00000000     mov dword ptr [esp + 0x3c], 0
// 00a6f956  8b464c               mov eax, dword ptr [esi + 0x4c]
// 00a6f959  43                   inc ebx
// 00a6f95a  3bd8                 cmp ebx, eax
// 00a6f95c  0f8c36ffffff         jl 0xa6f898
// 00a6f962  8b4e6c               mov ecx, dword ptr [esi + 0x6c]
// 00a6f965  8b11                 mov edx, dword ptr [ecx]
// 00a6f967  8b8280000000         mov eax, dword ptr [edx + 0x80]
// 00a6f96d  6a00                 push 0
// 00a6f96f  ffd0                 call eax
// 00a6f971  85c0                 test eax, eax
// 00a6f973  740e                 je 0xa6f983
// 00a6f975  8b4e6c               mov ecx, dword ptr [esi + 0x6c]
// 00a6f978  8b11                 mov edx, dword ptr [ecx]
// 00a6f97a  8b82a0000000         mov eax, dword ptr [edx + 0xa0]
// 00a6f980  55                   push ebp
// 00a6f981  ffd0                 call eax
// 00a6f983  8b4e68               mov ecx, dword ptr [esi + 0x68]
// 00a6f986  8b11                 mov edx, dword ptr [ecx]
// 00a6f988  8b8280000000         mov eax, dword ptr [edx + 0x80]
// 00a6f98e  6a00                 push 0
// 00a6f990  ffd0                 call eax
// 00a6f992  85c0                 test eax, eax
// 00a6f994  740e                 je 0xa6f9a4
// 00a6f996  8b4e68               mov ecx, dword ptr [esi + 0x68]
// 00a6f999  8b11                 mov edx, dword ptr [ecx]
// 00a6f99b  8b82a0000000         mov eax, dword ptr [edx + 0xa0]
// 00a6f9a1  55                   push ebp
// 00a6f9a2  ffd0                 call eax
// 00a6f9a4  5f                   pop edi
// 00a6f9a5  5e                   pop esi
// 00a6f9a6  5d                   pop ebp
// 00a6f9a7  5b                   pop ebx
// 00a6f9a8  83c428               add esp, 0x28
// 00a6f9ab  c21400               ret 0x14
// 00a6f9ae  e80d2af1ff           call 0x9823c0
// copied from an identical function in another client (function ?Draw@CXTPRibbonGroup@@UAEXPAVCDC@@VCRect@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\Ribbon\XTPRibbonGroup.cpp