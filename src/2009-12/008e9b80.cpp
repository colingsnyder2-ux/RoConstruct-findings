// roc 2009-12 008e9b80  unit: CXTPRibbonGroup  size: 339 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008e9b80
//
// 008e9b80  83ec28               sub esp, 0x28
// 008e9b83  53                   push ebx
// 008e9b84  55                   push ebp
// 008e9b85  56                   push esi
// 008e9b86  8bf1                 mov esi, ecx
// 008e9b88  8b4e5c               mov ecx, dword ptr [esi + 0x5c]
// 008e9b8b  57                   push edi
// 008e9b8c  e8dfb0faff           call 0x894c70
// 008e9b91  8b10                 mov edx, dword ptr [eax]
// 008e9b93  8b6c243c             mov ebp, dword ptr [esp + 0x3c]
// 008e9b97  56                   push esi
// 008e9b98  8bc8                 mov ecx, eax
// 008e9b9a  8b8240010000         mov eax, dword ptr [edx + 0x140]
// 008e9ba0  55                   push ebp
// 008e9ba1  ffd0                 call eax
// 008e9ba3  8b464c               mov eax, dword ptr [esi + 0x4c]
// 008e9ba6  33db                 xor ebx, ebx
// 008e9ba8  c744243c01000000     mov dword ptr [esp + 0x3c], 1
// 008e9bb0  85c0                 test eax, eax
// 008e9bb2  0f8eca000000         jle 0x8e9c82
// 008e9bb8  85db                 test ebx, ebx
// 008e9bba  7c15                 jl 0x8e9bd1
// 008e9bbc  3bd8                 cmp ebx, eax
// 008e9bbe  7d11                 jge 0x8e9bd1
// 008e9bc0  3b5e4c               cmp ebx, dword ptr [esi + 0x4c]
// 008e9bc3  0f8d05010000         jge 0x8e9cce
// 008e9bc9  8b4e48               mov ecx, dword ptr [esi + 0x48]
// 008e9bcc  8b3c99               mov edi, dword ptr [ecx + ebx*4]
// 008e9bcf  eb02                 jmp 0x8e9bd3
// 008e9bd1  33ff                 xor edi, edi
// 008e9bd3  8b17                 mov edx, dword ptr [edi]
// 008e9bd5  8b8280000000         mov eax, dword ptr [edx + 0x80]
// 008e9bdb  6a00                 push 0
// 008e9bdd  8bcf                 mov ecx, edi
// 008e9bdf  ffd0                 call eax
// 008e9be1  85c0                 test eax, eax
// 008e9be3  0f848d000000         je 0x8e9c76
// 008e9be9  837e2400             cmp dword ptr [esi + 0x24], 0
// 008e9bed  7531                 jne 0x8e9c20
// 008e9bef  83bf9800000000       cmp dword ptr [edi + 0x98], 0
// 008e9bf6  7428                 je 0x8e9c20
// 008e9bf8  837c243c00           cmp dword ptr [esp + 0x3c], 0
// 008e9bfd  7521                 jne 0x8e9c20
// 008e9bff  8b4e5c               mov ecx, dword ptr [esi + 0x5c]
// 008e9c02  e889a9f1ff           call 0x804590
// 008e9c07  8b4e5c               mov ecx, dword ptr [esi + 0x5c]
// 008e9c0a  8b10                 mov edx, dword ptr [eax]
// 008e9c0c  8b928c000000         mov edx, dword ptr [edx + 0x8c]
// 008e9c12  6a01                 push 1
// 008e9c14  57                   push edi
// 008e9c15  51                   push ecx
// 008e9c16  55                   push ebp
// 008e9c17  8d4c2420             lea ecx, [esp + 0x20]
// 008e9c1b  51                   push ecx
// 008e9c1c  8bc8                 mov ecx, eax
// 008e9c1e  ffd2                 call edx
// 008e9c20  8b8fc4000000         mov ecx, dword ptr [edi + 0xc4]
// 008e9c26  8b87c0000000         mov eax, dword ptr [edi + 0xc0]
// 008e9c2c  8b97c8000000         mov edx, dword ptr [edi + 0xc8]
// 008e9c32  89442418             mov dword ptr [esp + 0x18], eax
// 008e9c36  8b87cc000000         mov eax, dword ptr [edi + 0xcc]
// 008e9c3c  894c241c             mov dword ptr [esp + 0x1c], ecx
// 008e9c40  8d4c2418             lea ecx, [esp + 0x18]
// 008e9c44  89542420             mov dword ptr [esp + 0x20], edx
// 008e9c48  51                   push ecx
// 008e9c49  8d542444             lea edx, [esp + 0x44]
// 008e9c4d  89442428             mov dword ptr [esp + 0x28], eax
// 008e9c51  52                   push edx
// 008e9c52  8d442430             lea eax, [esp + 0x30]
// 008e9c56  50                   push eax
// 008e9c57  ff15dcca9800         call dword ptr [0x98cadc]
// 008e9c5d  85c0                 test eax, eax
// 008e9c5f  740d                 je 0x8e9c6e
// 008e9c61  8b17                 mov edx, dword ptr [edi]
// 008e9c63  8b82a0000000         mov eax, dword ptr [edx + 0xa0]
// 008e9c69  55                   push ebp
// 008e9c6a  8bcf                 mov ecx, edi
// 008e9c6c  ffd0                 call eax
// 008e9c6e  c744243c00000000     mov dword ptr [esp + 0x3c], 0
// 008e9c76  8b464c               mov eax, dword ptr [esi + 0x4c]
// 008e9c79  43                   inc ebx
// 008e9c7a  3bd8                 cmp ebx, eax
// 008e9c7c  0f8c36ffffff         jl 0x8e9bb8
// 008e9c82  8b4e6c               mov ecx, dword ptr [esi + 0x6c]
// 008e9c85  8b11                 mov edx, dword ptr [ecx]
// 008e9c87  8b8280000000         mov eax, dword ptr [edx + 0x80]
// 008e9c8d  6a00                 push 0
// 008e9c8f  ffd0                 call eax
// 008e9c91  85c0                 test eax, eax
// 008e9c93  740e                 je 0x8e9ca3
// 008e9c95  8b4e6c               mov ecx, dword ptr [esi + 0x6c]
// 008e9c98  8b11                 mov edx, dword ptr [ecx]
// 008e9c9a  8b82a0000000         mov eax, dword ptr [edx + 0xa0]
// 008e9ca0  55                   push ebp
// 008e9ca1  ffd0                 call eax
// 008e9ca3  8b4e68               mov ecx, dword ptr [esi + 0x68]
// 008e9ca6  8b11                 mov edx, dword ptr [ecx]
// 008e9ca8  8b8280000000         mov eax, dword ptr [edx + 0x80]
// 008e9cae  6a00                 push 0
// 008e9cb0  ffd0                 call eax
// 008e9cb2  85c0                 test eax, eax
// 008e9cb4  740e                 je 0x8e9cc4
// 008e9cb6  8b4e68               mov ecx, dword ptr [esi + 0x68]
// 008e9cb9  8b11                 mov edx, dword ptr [ecx]
// 008e9cbb  8b82a0000000         mov eax, dword ptr [edx + 0xa0]
// 008e9cc1  55                   push ebp
// 008e9cc2  ffd0                 call eax
// 008e9cc4  5f                   pop edi
// 008e9cc5  5e                   pop esi
// 008e9cc6  5d                   pop ebp
// 008e9cc7  5b                   pop ebx
// 008e9cc8  83c428               add esp, 0x28
// 008e9ccb  c21400               ret 0x14
// 008e9cce  e8399ef0ff           call 0x7f3b0c
// copied from an identical function in another client (function ?Draw@CXTPRibbonGroup@@UAEXPAVCDC@@VCRect@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/Ribbon/XTPRibbonGroup.cpp