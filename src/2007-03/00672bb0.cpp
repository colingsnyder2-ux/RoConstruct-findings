// roc 2007-03 00672bb0  unit: seg_00670000  size: 404 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00672bb0
//
// 00672bb0  83ec18               sub esp, 0x18
// 00672bb3  53                   push ebx
// 00672bb4  55                   push ebp
// 00672bb5  8b6c2424             mov ebp, dword ptr [esp + 0x24]
// 00672bb9  56                   push esi
// 00672bba  33f6                 xor esi, esi
// 00672bbc  33db                 xor ebx, ebx
// 00672bbe  39712c               cmp dword ptr [ecx + 0x2c], esi
// 00672bc1  894c2418             mov dword ptr [esp + 0x18], ecx
// 00672bc5  897500               mov dword ptr [ebp], esi
// 00672bc8  897504               mov dword ptr [ebp + 4], esi
// 00672bcb  8974240c             mov dword ptr [esp + 0xc], esi
// 00672bcf  c744241001000000     mov dword ptr [esp + 0x10], 1
// 00672bd7  89742414             mov dword ptr [esp + 0x14], esi
// 00672bdb  0f8e58010000         jle 0x672d39
// 00672be1  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 00672be5  83c02c               add eax, 0x2c
// 00672be8  8944242c             mov dword ptr [esp + 0x2c], eax
// 00672bec  57                   push edi
// 00672bed  8d4900               lea ecx, [ecx]
// 00672bf0  8378fc00             cmp dword ptr [eax - 4], 0
// 00672bf4  0f8423010000         je 0x672d1d
// 00672bfa  83780400             cmp dword ptr [eax + 4], 0
// 00672bfe  0f8519010000         jne 0x672d1d
// 00672c04  837c243800           cmp dword ptr [esp + 0x38], 0
// 00672c09  8b50f4               mov edx, dword ptr [eax - 0xc]
// 00672c0c  8b78f8               mov edi, dword ptr [eax - 8]
// 00672c0f  8b4808               mov ecx, dword ptr [eax + 8]
// 00672c12  89542420             mov dword ptr [esp + 0x20], edx
// 00672c16  0f847c000000         je 0x672c98
// 00672c1c  85c9                 test ecx, ecx
// 00672c1e  7416                 je 0x672c36
// 00672c20  833800               cmp dword ptr [eax], 0
// 00672c23  7516                 jne 0x672c3b
// 00672c25  837c241400           cmp dword ptr [esp + 0x14], 0
// 00672c2a  7506                 jne 0x672c32
// 00672c2c  8b542434             mov edx, dword ptr [esp + 0x34]
// 00672c30  031a                 add ebx, dword ptr [edx]
// 00672c32  8b542420             mov edx, dword ptr [esp + 0x20]
// 00672c36  833800               cmp dword ptr [eax], 0
// 00672c39  741d                 je 0x672c58
// 00672c3b  85c9                 test ecx, ecx
// 00672c3d  7409                 je 0x672c48
// 00672c3f  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 00672c43  8b4904               mov ecx, dword ptr [ecx + 4]
// 00672c46  eb02                 jmp 0x672c4a
// 00672c48  33c9                 xor ecx, ecx
// 00672c4a  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 00672c4e  03cb                 add ecx, ebx
// 00672c50  2bf1                 sub esi, ecx
// 00672c52  33db                 xor ebx, ebx
// 00672c54  895c2410             mov dword ptr [esp + 0x10], ebx
// 00672c58  39542410             cmp dword ptr [esp + 0x10], edx
// 00672c5c  7f04                 jg 0x672c62
// 00672c5e  89542410             mov dword ptr [esp + 0x10], edx
// 00672c62  03fb                 add edi, ebx
// 00672c64  57                   push edi
// 00672c65  56                   push esi
// 00672c66  53                   push ebx
// 00672c67  8bce                 mov ecx, esi
// 00672c69  2bca                 sub ecx, edx
// 00672c6b  51                   push ecx
// 00672c6c  83c0d4               add eax, -0x2c
// 00672c6f  50                   push eax
// 00672c70  ff15b4ed7700         call dword ptr [0x77edb4]
// 00672c76  8b442420             mov eax, dword ptr [esp + 0x20]
// 00672c7a  8b4d00               mov ecx, dword ptr [ebp]
// 00672c7d  2bc6                 sub eax, esi
// 00672c7f  3bc1                 cmp eax, ecx
// 00672c81  7f02                 jg 0x672c85
// 00672c83  8bc1                 mov eax, ecx
// 00672c85  894500               mov dword ptr [ebp], eax
// 00672c88  8b4504               mov eax, dword ptr [ebp + 4]
// 00672c8b  3bf8                 cmp edi, eax
// 00672c8d  7e02                 jle 0x672c91
// 00672c8f  8bc7                 mov eax, edi
// 00672c91  894504               mov dword ptr [ebp + 4], eax
// 00672c94  8bdf                 mov ebx, edi
// 00672c96  eb75                 jmp 0x672d0d
// 00672c98  85c9                 test ecx, ecx
// 00672c9a  7413                 je 0x672caf
// 00672c9c  833800               cmp dword ptr [eax], 0
// 00672c9f  7513                 jne 0x672cb4
// 00672ca1  837c241400           cmp dword ptr [esp + 0x14], 0
// 00672ca6  7507                 jne 0x672caf
// 00672ca8  8b6c2434             mov ebp, dword ptr [esp + 0x34]
// 00672cac  037500               add esi, dword ptr [ebp]
// 00672caf  833800               cmp dword ptr [eax], 0
// 00672cb2  741d                 je 0x672cd1
// 00672cb4  85c9                 test ecx, ecx
// 00672cb6  7409                 je 0x672cc1
// 00672cb8  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 00672cbc  8b4904               mov ecx, dword ptr [ecx + 4]
// 00672cbf  eb02                 jmp 0x672cc3
// 00672cc1  33c9                 xor ecx, ecx
// 00672cc3  8b742410             mov esi, dword ptr [esp + 0x10]
// 00672cc7  03ce                 add ecx, esi
// 00672cc9  03d9                 add ebx, ecx
// 00672ccb  33f6                 xor esi, esi
// 00672ccd  89742410             mov dword ptr [esp + 0x10], esi
// 00672cd1  397c2410             cmp dword ptr [esp + 0x10], edi
// 00672cd5  7f04                 jg 0x672cdb
// 00672cd7  897c2410             mov dword ptr [esp + 0x10], edi
// 00672cdb  8d2c1f               lea ebp, [edi + ebx]
// 00672cde  55                   push ebp
// 00672cdf  8d3c32               lea edi, [edx + esi]
// 00672ce2  57                   push edi
// 00672ce3  53                   push ebx
// 00672ce4  56                   push esi
// 00672ce5  83c0d4               add eax, -0x2c
// 00672ce8  50                   push eax
// 00672ce9  ff15b4ed7700         call dword ptr [0x77edb4]
// 00672cef  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 00672cf3  8b08                 mov ecx, dword ptr [eax]
// 00672cf5  3bf9                 cmp edi, ecx
// 00672cf7  7e02                 jle 0x672cfb
// 00672cf9  8bcf                 mov ecx, edi
// 00672cfb  8908                 mov dword ptr [eax], ecx
// 00672cfd  8b4804               mov ecx, dword ptr [eax + 4]
// 00672d00  3be9                 cmp ebp, ecx
// 00672d02  7f02                 jg 0x672d06
// 00672d04  8be9                 mov ebp, ecx
// 00672d06  896804               mov dword ptr [eax + 4], ebp
// 00672d09  8bf7                 mov esi, edi
// 00672d0b  8be8                 mov ebp, eax
// 00672d0d  8b442430             mov eax, dword ptr [esp + 0x30]
// 00672d11  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00672d15  c744241400000000     mov dword ptr [esp + 0x14], 0
// 00672d1d  8b542418             mov edx, dword ptr [esp + 0x18]
// 00672d21  83c201               add edx, 1
// 00672d24  83c040               add eax, 0x40
// 00672d27  3b512c               cmp edx, dword ptr [ecx + 0x2c]
// 00672d2a  89542418             mov dword ptr [esp + 0x18], edx
// 00672d2e  89442430             mov dword ptr [esp + 0x30], eax
// 00672d32  0f8cb8feffff         jl 0x672bf0
// 00672d38  5f                   pop edi
// 00672d39  5e                   pop esi
// 00672d3a  8bc5                 mov eax, ebp
// 00672d3c  5d                   pop ebp
// 00672d3d  5b                   pop ebx
// 00672d3e  83c418               add esp, 0x18
// 00672d41  c21000               ret 0x10
// library xtp-11.2.2-vc8/Source\CommandBars\XTPControls.cpp (function ?_CalcSize@CXTPControls@@IAE?AVCSize@@PAUXTPBUTTONINFO@1@ABV2@H@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/CommandBars/XTPControls.cpp
