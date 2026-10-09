// roc 2009-12 00843a90  unit: CXTPPopupBar  size: 518 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00843a90
//
// 00843a90  83ec38               sub esp, 0x38
// 00843a93  55                   push ebp
// 00843a94  56                   push esi
// 00843a95  57                   push edi
// 00843a96  8bf9                 mov edi, ecx
// 00843a98  8b8fb8010000         mov ecx, dword ptr [edi + 0x1b8]
// 00843a9e  8b87b4010000         mov eax, dword ptr [edi + 0x1b4]
// 00843aa4  8b97bc010000         mov edx, dword ptr [edi + 0x1bc]
// 00843aaa  894c241c             mov dword ptr [esp + 0x1c], ecx
// 00843aae  8d4c2418             lea ecx, [esp + 0x18]
// 00843ab2  89442418             mov dword ptr [esp + 0x18], eax
// 00843ab6  8b87c0010000         mov eax, dword ptr [edi + 0x1c0]
// 00843abc  51                   push ecx
// 00843abd  33ed                 xor ebp, ebp
// 00843abf  8bcf                 mov ecx, edi
// 00843ac1  89afec010000         mov dword ptr [edi + 0x1ec], ebp
// 00843ac7  89542424             mov dword ptr [esp + 0x24], edx
// 00843acb  89442428             mov dword ptr [esp + 0x28], eax
// 00843acf  e82603fbff           call 0x7f3dfa
// 00843ad4  8b3528cc9800         mov esi, dword ptr [0x98cc28]
// 00843ada  c744240c01000000     mov dword ptr [esp + 0xc], 1
// 00843ae2  ffd6                 call esi
// 00843ae4  85c0                 test eax, eax
// 00843ae6  0f85a3010000         jne 0x843c8f
// 00843aec  8b5720               mov edx, dword ptr [edi + 0x20]
// 00843aef  53                   push ebx
// 00843af0  52                   push edx
// 00843af1  ff152ccc9800         call dword ptr [0x98cc2c]
// 00843af7  50                   push eax
// 00843af8  e82d00fbff           call 0x7f3b2a
// 00843afd  33db                 xor ebx, ebx
// 00843aff  ffd6                 call esi
// 00843b01  50                   push eax
// 00843b02  e82300fbff           call 0x7f3b2a
// 00843b07  3bc7                 cmp eax, edi
// 00843b09  0f8562010000         jne 0x843c71
// 00843b0f  8b3524cc9800         mov esi, dword ptr [0x98cc24]
// 00843b15  6a00                 push 0
// 00843b17  6a0f                 push 0xf
// 00843b19  6a0f                 push 0xf
// 00843b1b  6a00                 push 0
// 00843b1d  8d44243c             lea eax, [esp + 0x3c]
// 00843b21  50                   push eax
// 00843b22  ffd6                 call esi
// 00843b24  85c0                 test eax, eax
// 00843b26  7433                 je 0x843b5b
// 00843b28  6a0f                 push 0xf
// 00843b2a  6a0f                 push 0xf
// 00843b2c  6a00                 push 0
// 00843b2e  8d4c2438             lea ecx, [esp + 0x38]
// 00843b32  51                   push ecx
// 00843b33  ff15b0ca9800         call dword ptr [0x98cab0]
// 00843b39  85c0                 test eax, eax
// 00843b3b  741e                 je 0x843b5b
// 00843b3d  8d54242c             lea edx, [esp + 0x2c]
// 00843b41  52                   push edx
// 00843b42  ff1594ca9800         call dword ptr [0x98ca94]
// 00843b48  6a00                 push 0
// 00843b4a  6a0f                 push 0xf
// 00843b4c  6a0f                 push 0xf
// 00843b4e  6a00                 push 0
// 00843b50  8d44243c             lea eax, [esp + 0x3c]
// 00843b54  50                   push eax
// 00843b55  ffd6                 call esi
// 00843b57  85c0                 test eax, eax
// 00843b59  75cd                 jne 0x843b28
// 00843b5b  6a00                 push 0
// 00843b5d  6a00                 push 0
// 00843b5f  6a00                 push 0
// 00843b61  8d4c2438             lea ecx, [esp + 0x38]
// 00843b65  51                   push ecx
// 00843b66  ff15b0ca9800         call dword ptr [0x98cab0]
// 00843b6c  85c0                 test eax, eax
// 00843b6e  0f84f3000000         je 0x843c67
// 00843b74  8b442430             mov eax, dword ptr [esp + 0x30]
// 00843b78  3d02020000           cmp eax, 0x202
// 00843b7d  0f84ee000000         je 0x843c71
// 00843b83  3d00020000           cmp eax, 0x200
// 00843b88  0f85a8000000         jne 0x843c36
// 00843b8e  8b4c2440             mov ecx, dword ptr [esp + 0x40]
// 00843b92  8b542444             mov edx, dword ptr [esp + 0x44]
// 00843b96  3bd9                 cmp ebx, ecx
// 00843b98  7508                 jne 0x843ba2
// 00843b9a  3bea                 cmp ebp, edx
// 00843b9c  0f84a4000000         je 0x843c46
// 00843ba2  8b442424             mov eax, dword ptr [esp + 0x24]
// 00843ba6  83c00a               add eax, 0xa
// 00843ba9  3bc8                 cmp ecx, eax
// 00843bab  8bea                 mov ebp, edx
// 00843bad  8bd9                 mov ebx, ecx
// 00843baf  896c2418             mov dword ptr [esp + 0x18], ebp
// 00843bb3  7f28                 jg 0x843bdd
// 00843bb5  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 00843bb9  83c0f6               add eax, -0xa
// 00843bbc  3bc8                 cmp ecx, eax
// 00843bbe  7c1d                 jl 0x843bdd
// 00843bc0  8b442428             mov eax, dword ptr [esp + 0x28]
// 00843bc4  83c00a               add eax, 0xa
// 00843bc7  3bd0                 cmp edx, eax
// 00843bc9  7f12                 jg 0x843bdd
// 00843bcb  8b442420             mov eax, dword ptr [esp + 0x20]
// 00843bcf  83c0f6               add eax, -0xa
// 00843bd2  3bd0                 cmp edx, eax
// 00843bd4  7c07                 jl 0x843bdd
// 00843bd6  b801000000           mov eax, 1
// 00843bdb  eb02                 jmp 0x843bdf
// 00843bdd  33c0                 xor eax, eax
// 00843bdf  3b442410             cmp eax, dword ptr [esp + 0x10]
// 00843be3  7414                 je 0x843bf9
// 00843be5  52                   push edx
// 00843be6  51                   push ecx
// 00843be7  50                   push eax
// 00843be8  8bcf                 mov ecx, edi
// 00843bea  8944241c             mov dword ptr [esp + 0x1c], eax
// 00843bee  e81dfaffff           call 0x843610
// 00843bf3  8b3524cc9800         mov esi, dword ptr [0x98cc24]
// 00843bf9  8b8fec010000         mov ecx, dword ptr [edi + 0x1ec]
// 00843bff  85c9                 test ecx, ecx
// 00843c01  744e                 je 0x843c51
// 00843c03  8bb7e4010000         mov esi, dword ptr [edi + 0x1e4]
// 00843c09  8bc6                 mov eax, esi
// 00843c0b  99                   cdq 
// 00843c0c  2bc2                 sub eax, edx
// 00843c0e  8bd0                 mov edx, eax
// 00843c10  d1fa                 sar edx, 1
// 00843c12  8bc3                 mov eax, ebx
// 00843c14  2bc2                 sub eax, edx
// 00843c16  6a01                 push 1
// 00843c18  8d55f6               lea edx, [ebp - 0xa]
// 00843c1b  8bafe8010000         mov ebp, dword ptr [edi + 0x1e8]
// 00843c21  55                   push ebp
// 00843c22  56                   push esi
// 00843c23  52                   push edx
// 00843c24  50                   push eax
// 00843c25  e80800fbff           call 0x7f3c32
// 00843c2a  8b6c2418             mov ebp, dword ptr [esp + 0x18]
// 00843c2e  8b3524cc9800         mov esi, dword ptr [0x98cc24]
// 00843c34  eb1b                 jmp 0x843c51
// 00843c36  3d00010000           cmp eax, 0x100
// 00843c3b  7509                 jne 0x843c46
// 00843c3d  837c24341b           cmp dword ptr [esp + 0x34], 0x1b
// 00843c42  742d                 je 0x843c71
// 00843c44  eb0b                 jmp 0x843c51
// 00843c46  8d44242c             lea eax, [esp + 0x2c]
// 00843c4a  50                   push eax
// 00843c4b  ff1594ca9800         call dword ptr [0x98ca94]
// 00843c51  ff1528cc9800         call dword ptr [0x98cc28]
// 00843c57  50                   push eax
// 00843c58  e8cdfefaff           call 0x7f3b2a
// 00843c5d  3bc7                 cmp eax, edi
// 00843c5f  0f84b0feffff         je 0x843b15
// 00843c65  eb0a                 jmp 0x843c71
// 00843c67  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 00843c6b  51                   push ecx
// 00843c6c  e8890afbff           call 0x7f46fa
// 00843c71  ff1520cc9800         call dword ptr [0x98cc20]
// 00843c77  83bfec01000000       cmp dword ptr [edi + 0x1ec], 0
// 00843c7e  5b                   pop ebx
// 00843c7f  740e                 je 0x843c8f
// 00843c81  8bcf                 mov ecx, edi
// 00843c83  e84808fcff           call 0x8044d0
// 00843c88  8bc8                 mov ecx, eax
// 00843c8a  e85122fdff           call 0x815ee0
// 00843c8f  5f                   pop edi
// 00843c90  5e                   pop esi
// 00843c91  5d                   pop ebp
// 00843c92  83c438               add esp, 0x38
// 00843c95  c3                   ret 
// library xtp-11.2.2/Source\CommandBars\XTPPopupBar.cpp (function ?TrackTearOff@CXTPPopupBar@@AAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPPopupBar.cpp
