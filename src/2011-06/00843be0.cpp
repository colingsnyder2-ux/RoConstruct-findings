// roc 2011-06 00843be0  unit: VCXTPReportRows::?$CXTPHeapObjectT  size: 722 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00843be0
//
// 00843be0  6aff                 push -1
// 00843be2  68a353a000           push 0xa053a3
// 00843be7  64a100000000         mov eax, dword ptr fs:[0]
// 00843bed  50                   push eax
// 00843bee  83ec3c               sub esp, 0x3c
// 00843bf1  53                   push ebx
// 00843bf2  55                   push ebp
// 00843bf3  56                   push esi
// 00843bf4  57                   push edi
// 00843bf5  a12058c900           mov eax, dword ptr [0xc95820]
// 00843bfa  33c4                 xor eax, esp
// 00843bfc  50                   push eax
// 00843bfd  8d442450             lea eax, [esp + 0x50]
// 00843c01  64a300000000         mov dword ptr fs:[0], eax
// 00843c07  8be9                 mov ebp, ecx
// 00843c09  896c2420             mov dword ptr [esp + 0x20], ebp
// 00843c0d  8b442464             mov eax, dword ptr [esp + 0x64]
// 00843c11  33db                 xor ebx, ebx
// 00843c13  895c2414             mov dword ptr [esp + 0x14], ebx
// 00843c17  33ff                 xor edi, edi
// 00843c19  8918                 mov dword ptr [eax], ebx
// 00843c1b  395d28               cmp dword ptr [ebp + 0x28], ebx
// 00843c1e  895c2418             mov dword ptr [esp + 0x18], ebx
// 00843c22  897c241c             mov dword ptr [esp + 0x1c], edi
// 00843c26  0f8e91010000         jle 0x843dbd
// 00843c2c  8d642400             lea esp, [esp]
// 00843c30  3bfb                 cmp edi, ebx
// 00843c32  0f8c75020000         jl 0x843ead
// 00843c38  3b7d28               cmp edi, dword ptr [ebp + 0x28]
// 00843c3b  0f8d6c020000         jge 0x843ead
// 00843c41  8b4d24               mov ecx, dword ptr [ebp + 0x24]
// 00843c44  8b34b9               mov esi, dword ptr [ecx + edi*4]
// 00843c47  8b16                 mov edx, dword ptr [esi]
// 00843c49  8d04b9               lea eax, [ecx + edi*4]
// 00843c4c  8b8288000000         mov eax, dword ptr [edx + 0x88]
// 00843c52  8bce                 mov ecx, esi
// 00843c54  8974242c             mov dword ptr [esp + 0x2c], esi
// 00843c58  ffd0                 call eax
// 00843c5a  85c0                 test eax, eax
// 00843c5c  0f84a1010000         je 0x843e03
// 00843c62  8b6c2460             mov ebp, dword ptr [esp + 0x60]
// 00843c66  8b5500               mov edx, dword ptr [ebp]
// 00843c69  8b4260               mov eax, dword ptr [edx + 0x60]
// 00843c6c  8bcd                 mov ecx, ebp
// 00843c6e  ffd0                 call eax
// 00843c70  8bf8                 mov edi, eax
// 00843c72  8b4524               mov eax, dword ptr [ebp + 0x24]
// 00843c75  8b80ec000000         mov eax, dword ptr [eax + 0xec]
// 00843c7b  3bfb                 cmp edi, ebx
// 00843c7d  0f8424010000         je 0x843da7
// 00843c83  3bc3                 cmp eax, ebx
// 00843c85  0f841c010000         je 0x843da7
// 00843c8b  8b16                 mov edx, dword ptr [esi]
// 00843c8d  8b6820               mov ebp, dword ptr [eax + 0x20]
// 00843c90  8b82dc000000         mov eax, dword ptr [edx + 0xdc]
// 00843c96  8bce                 mov ecx, esi
// 00843c98  ffd0                 call eax
// 00843c9a  50                   push eax
// 00843c9b  8bcd                 mov ecx, ebp
// 00843c9d  e8ae9d0300           call 0x87da50
// 00843ca2  8be8                 mov ebp, eax
// 00843ca4  55                   push ebp
// 00843ca5  8bcf                 mov ecx, edi
// 00843ca7  e8b4ccffff           call 0x840960
// 00843cac  3bc3                 cmp eax, ebx
// 00843cae  7422                 je 0x843cd2
// 00843cb0  8b10                 mov edx, dword ptr [eax]
// 00843cb2  8b5274               mov edx, dword ptr [edx + 0x74]
// 00843cb5  55                   push ebp
// 00843cb6  8d4c2428             lea ecx, [esp + 0x28]
// 00843cba  51                   push ecx
// 00843cbb  8bc8                 mov ecx, eax
// 00843cbd  ffd2                 call edx
// 00843cbf  834c241401           or dword ptr [esp + 0x14], 1
// 00843cc4  8bc8                 mov ecx, eax
// 00843cc6  895c2458             mov dword ptr [esp + 0x58], ebx
// 00843cca  ff15c82da400         call dword ptr [0xa42dc8]
// 00843cd0  eb05                 jmp 0x843cd7
// 00843cd2  b8cabea500           mov eax, 0xa5beca
// 00843cd7  33c9                 xor ecx, ecx
// 00843cd9  66894c2440           mov word ptr [esp + 0x40], cx
// 00843cde  50                   push eax
// 00843cdf  8d4c2444             lea ecx, [esp + 0x44]
// 00843ce3  e8f88a1800           call 0x9cc7e0
// 00843ce8  f644241401           test byte ptr [esp + 0x14], 1
// 00843ced  c744245802000000     mov dword ptr [esp + 0x58], 2
// 00843cf5  740f                 je 0x843d06
// 00843cf7  83642414fe           and dword ptr [esp + 0x14], 0xfffffffe
// 00843cfc  8d4c2424             lea ecx, [esp + 0x24]
// 00843d00  ff15082ea400         call dword ptr [0xa42e08]
// 00843d06  8b16                 mov edx, dword ptr [esi]
// 00843d08  8b92fc000000         mov edx, dword ptr [edx + 0xfc]
// 00843d0e  8d442428             lea eax, [esp + 0x28]
// 00843d12  50                   push eax
// 00843d13  8bce                 mov ecx, esi
// 00843d15  ffd2                 call edx
// 00843d17  8bc8                 mov ecx, eax
// 00843d19  c644245803           mov byte ptr [esp + 0x58], 3
// 00843d1e  ff15c82da400         call dword ptr [0xa42dc8]
// 00843d24  33c9                 xor ecx, ecx
// 00843d26  66894c2430           mov word ptr [esp + 0x30], cx
// 00843d2b  50                   push eax
// 00843d2c  8d4c2434             lea ecx, [esp + 0x34]
// 00843d30  e8ab8a1800           call 0x9cc7e0
// 00843d35  8d4c2428             lea ecx, [esp + 0x28]
// 00843d39  c644245805           mov byte ptr [esp + 0x58], 5
// 00843d3e  ff15082ea400         call dword ptr [0xa42e08]
// 00843d44  8b4750               mov eax, dword ptr [edi + 0x50]
// 00843d47  8b4040               mov eax, dword ptr [eax + 0x40]
// 00843d4a  33d2                 xor edx, edx
// 00843d4c  3bc3                 cmp eax, ebx
// 00843d4e  a1f86ac900           mov eax, dword ptr [0xc96af8]
// 00843d53  0f94c2               sete dl
// 00843d56  8bfa                 mov edi, edx
// 00843d58  3d00040000           cmp eax, 0x400
// 00843d5d  7505                 jne 0x843d64
// 00843d5f  e80cc7feff           call 0x830470
// 00843d64  57                   push edi
// 00843d65  50                   push eax
// 00843d66  8d442438             lea eax, [esp + 0x38]
// 00843d6a  50                   push eax
// 00843d6b  8d4c244c             lea ecx, [esp + 0x4c]
// 00843d6f  51                   push ecx
// 00843d70  e887911800           call 0x9ccefc
// 00843d75  8b6d40               mov ebp, dword ptr [ebp + 0x40]
// 00843d78  8bf8                 mov edi, eax
// 00843d7a  4f                   dec edi
// 00843d7b  3beb                 cmp ebp, ebx
// 00843d7d  7408                 je 0x843d87
// 00843d7f  3bfb                 cmp edi, ebx
// 00843d81  7f08                 jg 0x843d8b
// 00843d83  3beb                 cmp ebp, ebx
// 00843d85  7550                 jne 0x843dd7
// 00843d87  3bfb                 cmp edi, ebx
// 00843d89  7d4c                 jge 0x843dd7
// 00843d8b  8b35d80aa400         mov esi, dword ptr [0xa40ad8]
// 00843d91  8d542430             lea edx, [esp + 0x30]
// 00843d95  52                   push edx
// 00843d96  ffd6                 call esi
// 00843d98  8d442440             lea eax, [esp + 0x40]
// 00843d9c  c7442458ffffffff     mov dword ptr [esp + 0x58], 0xffffffff
// 00843da4  50                   push eax
// 00843da5  ffd6                 call esi
// 00843da7  8b6c2420             mov ebp, dword ptr [esp + 0x20]
// 00843dab  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 00843daf  47                   inc edi
// 00843db0  3b7d28               cmp edi, dword ptr [ebp + 0x28]
// 00843db3  897c241c             mov dword ptr [esp + 0x1c], edi
// 00843db7  0f8c73feffff         jl 0x843c30
// 00843dbd  8b442418             mov eax, dword ptr [esp + 0x18]
// 00843dc1  8b4c2450             mov ecx, dword ptr [esp + 0x50]
// 00843dc5  64890d00000000       mov dword ptr fs:[0], ecx
// 00843dcc  59                   pop ecx
// 00843dcd  5f                   pop edi
// 00843dce  5e                   pop esi
// 00843dcf  5d                   pop ebp
// 00843dd0  5b                   pop ebx
// 00843dd1  83c448               add esp, 0x48
// 00843dd4  c20800               ret 8
// 00843dd7  8b16                 mov edx, dword ptr [esi]
// 00843dd9  8b82b8000000         mov eax, dword ptr [edx + 0xb8]
// 00843ddf  8bce                 mov ecx, esi
// 00843de1  ffd0                 call eax
// 00843de3  85c0                 test eax, eax
// 00843de5  7538                 jne 0x843e1f
// 00843de7  8b35d80aa400         mov esi, dword ptr [0xa40ad8]
// 00843ded  8d4c2430             lea ecx, [esp + 0x30]
// 00843df1  51                   push ecx
// 00843df2  ffd6                 call esi
// 00843df4  8d542440             lea edx, [esp + 0x40]
// 00843df8  c7442458ffffffff     mov dword ptr [esp + 0x58], 0xffffffff
// 00843e00  52                   push edx
// 00843e01  eba2                 jmp 0x843da5
// 00843e03  8d44242c             lea eax, [esp + 0x2c]
// 00843e07  50                   push eax
// 00843e08  8d4c2464             lea ecx, [esp + 0x64]
// 00843e0c  51                   push ecx
// 00843e0d  e87efbffff           call 0x843990
// 00843e12  83c408               add esp, 8
// 00843e15  85c0                 test eax, eax
// 00843e17  7f96                 jg 0x843daf
// 00843e19  89742418             mov dword ptr [esp + 0x18], esi
// 00843e1d  eb9e                 jmp 0x843dbd
// 00843e1f  3bfb                 cmp edi, ebx
// 00843e21  0f8580000000         jne 0x843ea7
// 00843e27  8b16                 mov edx, dword ptr [esi]
// 00843e29  8b82b8000000         mov eax, dword ptr [edx + 0xb8]
// 00843e2f  8bce                 mov ecx, esi
// 00843e31  ffd0                 call eax
// 00843e33  8b4c2464             mov ecx, dword ptr [esp + 0x64]
// 00843e37  8b10                 mov edx, dword ptr [eax]
// 00843e39  8b9284000000         mov edx, dword ptr [edx + 0x84]
// 00843e3f  51                   push ecx
// 00843e40  8b4c2464             mov ecx, dword ptr [esp + 0x64]
// 00843e44  51                   push ecx
// 00843e45  8bc8                 mov ecx, eax
// 00843e47  ffd2                 call edx
// 00843e49  89442418             mov dword ptr [esp + 0x18], eax
// 00843e4d  3bc3                 cmp eax, ebx
// 00843e4f  753d                 jne 0x843e8e
// 00843e51  8b06                 mov eax, dword ptr [esi]
// 00843e53  8b90b8000000         mov edx, dword ptr [eax + 0xb8]
// 00843e59  8bce                 mov ecx, esi
// 00843e5b  ffd2                 call edx
// 00843e5d  8be8                 mov ebp, eax
// 00843e5f  8b06                 mov eax, dword ptr [esi]
// 00843e61  8b7d00               mov edi, dword ptr [ebp]
// 00843e64  8b90b8000000         mov edx, dword ptr [eax + 0xb8]
// 00843e6a  8bce                 mov ecx, esi
// 00843e6c  83c75c               add edi, 0x5c
// 00843e6f  ffd2                 call edx
// 00843e71  8bc8                 mov ecx, eax
// 00843e73  e868f2ffff           call 0x8430e0
// 00843e78  48                   dec eax
// 00843e79  50                   push eax
// 00843e7a  8b07                 mov eax, dword ptr [edi]
// 00843e7c  8bcd                 mov ecx, ebp
// 00843e7e  ffd0                 call eax
// 00843e80  8b4c2464             mov ecx, dword ptr [esp + 0x64]
// 00843e84  89442418             mov dword ptr [esp + 0x18], eax
// 00843e88  c70101000000         mov dword ptr [ecx], 1
// 00843e8e  8b35d80aa400         mov esi, dword ptr [0xa40ad8]
// 00843e94  8d542430             lea edx, [esp + 0x30]
// 00843e98  52                   push edx
// 00843e99  ffd6                 call esi
// 00843e9b  8d442440             lea eax, [esp + 0x40]
// 00843e9f  50                   push eax
// 00843ea0  ffd6                 call esi
// 00843ea2  e916ffffff           jmp 0x843dbd
// 00843ea7  89742418             mov dword ptr [esp + 0x18], esi
// 00843eab  ebe1                 jmp 0x843e8e
// 00843ead  e85864fcff           call 0x80a30a
// copied from an identical function in another client (function ?FindInsertionPos@CXTPReportRows@@UAEPAVCXTPReportRow@@PAV2@AAH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib Source\ReportControl\XTPReportRows.cpp