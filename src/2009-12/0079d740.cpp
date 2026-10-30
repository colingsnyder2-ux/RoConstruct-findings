// roc 2009-12 0079d740  unit: seg_00790000  size: 710 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0079d740
//
// 0079d740  53                   push ebx
// 0079d741  55                   push ebp
// 0079d742  8b6c2414             mov ebp, dword ptr [esp + 0x14]
// 0079d746  56                   push esi
// 0079d747  8b742414             mov esi, dword ptr [esp + 0x14]
// 0079d74b  57                   push edi
// 0079d74c  8d642400             lea esp, [esp]
// 0079d750  0fbe4500             movsx eax, byte ptr [ebp]
// 0079d754  83f829               cmp eax, 0x29
// 0079d757  0f87e6000000         ja 0x79d843
// 0079d75d  0fb680b0d97900       movzx eax, byte ptr [eax + 0x79d9b0]
// 0079d764  ff248598d97900       jmp dword ptr [eax*4 + 0x79d998]
// 0079d76b  8a4501               mov al, byte ptr [ebp + 1]
// 0079d76e  3c62                 cmp al, 0x62
// 0079d770  0f84a3000000         je 0x79d819
// 0079d776  3c66                 cmp al, 0x66
// 0079d778  7435                 je 0x79d7af
// 0079d77a  0fb6c8               movzx ecx, al
// 0079d77d  51                   push ecx
// 0079d77e  ff15dcb89800         call dword ptr [0x98b8dc]
// 0079d784  83c404               add esp, 4
// 0079d787  85c0                 test eax, eax
// 0079d789  0f84b4000000         je 0x79d843
// 0079d78f  0fb64501             movzx eax, byte ptr [ebp + 1]
// 0079d793  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0079d797  56                   push esi
// 0079d798  e813ffffff           call 0x79d6b0
// 0079d79d  8bf0                 mov esi, eax
// 0079d79f  83c404               add esp, 4
// 0079d7a2  85f6                 test esi, esi
// 0079d7a4  0f84e5010000         je 0x79d98f
// 0079d7aa  83c502               add ebp, 2
// 0079d7ad  eba1                 jmp 0x79d750
// 0079d7af  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 0079d7b3  83c502               add ebp, 2
// 0079d7b6  807d005b             cmp byte ptr [ebp], 0x5b
// 0079d7ba  7411                 je 0x79d7cd
// 0079d7bc  8b5708               mov edx, dword ptr [edi + 8]
// 0079d7bf  6854b19e00           push 0x9eb154
// 0079d7c4  52                   push edx
// 0079d7c5  e826c5feff           call 0x789cf0
// 0079d7ca  83c408               add esp, 8
// 0079d7cd  8bc5                 mov eax, ebp
// 0079d7cf  e85cfaffff           call 0x79d230
// 0079d7d4  8bd8                 mov ebx, eax
// 0079d7d6  3b37                 cmp esi, dword ptr [edi]
// 0079d7d8  7504                 jne 0x79d7de
// 0079d7da  32c0                 xor al, al
// 0079d7dc  eb03                 jmp 0x79d7e1
// 0079d7de  8a46ff               mov al, byte ptr [esi - 1]
// 0079d7e1  0fb6c0               movzx eax, al
// 0079d7e4  8d7bff               lea edi, [ebx - 1]
// 0079d7e7  57                   push edi
// 0079d7e8  50                   push eax
// 0079d7e9  8bc5                 mov eax, ebp
// 0079d7eb  e8d0fbffff           call 0x79d3c0
// 0079d7f0  83c408               add esp, 8
// 0079d7f3  85c0                 test eax, eax
// 0079d7f5  0f8594010000         jne 0x79d98f
// 0079d7fb  0fb60e               movzx ecx, byte ptr [esi]
// 0079d7fe  57                   push edi
// 0079d7ff  51                   push ecx
// 0079d800  8bc5                 mov eax, ebp
// 0079d802  e8b9fbffff           call 0x79d3c0
// 0079d807  83c408               add esp, 8
// 0079d80a  85c0                 test eax, eax
// 0079d80c  0f847d010000         je 0x79d98f
// 0079d812  8beb                 mov ebp, ebx
// 0079d814  e937ffffff           jmp 0x79d750
// 0079d819  8b5c2414             mov ebx, dword ptr [esp + 0x14]
// 0079d81d  8d4502               lea eax, [ebp + 2]
// 0079d820  8bce                 mov ecx, esi
// 0079d822  e839fcffff           call 0x79d460
// 0079d827  8bf0                 mov esi, eax
// 0079d829  85f6                 test esi, esi
// 0079d82b  0f845e010000         je 0x79d98f
// 0079d831  83c504               add ebp, 4
// 0079d834  e917ffffff           jmp 0x79d750
// 0079d839  807d0100             cmp byte ptr [ebp + 1], 0
// 0079d83d  0f84fe000000         je 0x79d941
// 0079d843  8b5c2414             mov ebx, dword ptr [esp + 0x14]
// 0079d847  8bc5                 mov eax, ebp
// 0079d849  8bfb                 mov edi, ebx
// 0079d84b  e8e0f9ffff           call 0x79d230
// 0079d850  8bf8                 mov edi, eax
// 0079d852  3b7304               cmp esi, dword ptr [ebx + 4]
// 0079d855  734c                 jae 0x79d8a3
// 0079d857  8a4d00               mov cl, byte ptr [ebp]
// 0079d85a  0fb606               movzx eax, byte ptr [esi]
// 0079d85d  80f925               cmp cl, 0x25
// 0079d860  7429                 je 0x79d88b
// 0079d862  80f92e               cmp cl, 0x2e
// 0079d865  7435                 je 0x79d89c
// 0079d867  80f95b               cmp cl, 0x5b
// 0079d86a  740e                 je 0x79d87a
// 0079d86c  0fb6d1               movzx edx, cl
// 0079d86f  33c9                 xor ecx, ecx
// 0079d871  3bd0                 cmp edx, eax
// 0079d873  0f94c1               sete cl
// 0079d876  8bc1                 mov eax, ecx
// 0079d878  eb1e                 jmp 0x79d898
// 0079d87a  8d57ff               lea edx, [edi - 1]
// 0079d87d  52                   push edx
// 0079d87e  50                   push eax
// 0079d87f  8bc5                 mov eax, ebp
// 0079d881  e83afbffff           call 0x79d3c0
// 0079d886  83c408               add esp, 8
// 0079d889  eb0d                 jmp 0x79d898
// 0079d88b  0fb65d01             movzx ebx, byte ptr [ebp + 1]
// 0079d88f  e80cfaffff           call 0x79d2a0
// 0079d894  8b5c2414             mov ebx, dword ptr [esp + 0x14]
// 0079d898  85c0                 test eax, eax
// 0079d89a  7407                 je 0x79d8a3
// 0079d89c  b901000000           mov ecx, 1
// 0079d8a1  eb02                 jmp 0x79d8a5
// 0079d8a3  33c9                 xor ecx, ecx
// 0079d8a5  0fbe07               movsx eax, byte ptr [edi]
// 0079d8a8  83c0d6               add eax, -0x2a
// 0079d8ab  83f815               cmp eax, 0x15
// 0079d8ae  7733                 ja 0x79d8e3
// 0079d8b0  0fb680f0d97900       movzx eax, byte ptr [eax + 0x79d9f0]
// 0079d8b7  ff2485dcd97900       jmp dword ptr [eax*4 + 0x79d9dc]
// 0079d8be  85c9                 test ecx, ecx
// 0079d8c0  7419                 je 0x79d8db
// 0079d8c2  8d4f01               lea ecx, [edi + 1]
// 0079d8c5  51                   push ecx
// 0079d8c6  8d5601               lea edx, [esi + 1]
// 0079d8c9  52                   push edx
// 0079d8ca  53                   push ebx
// 0079d8cb  e870feffff           call 0x79d740
// 0079d8d0  83c40c               add esp, 0xc
// 0079d8d3  85c0                 test eax, eax
// 0079d8d5  0f85b6000000         jne 0x79d991
// 0079d8db  8d6f01               lea ebp, [edi + 1]
// 0079d8de  e96dfeffff           jmp 0x79d750
// 0079d8e3  85c9                 test ecx, ecx
// 0079d8e5  0f84a4000000         je 0x79d98f
// 0079d8eb  46                   inc esi
// 0079d8ec  8bef                 mov ebp, edi
// 0079d8ee  e95dfeffff           jmp 0x79d750
// 0079d8f3  807d0129             cmp byte ptr [ebp + 1], 0x29
// 0079d8f7  8d4501               lea eax, [ebp + 1]
// 0079d8fa  8bde                 mov ebx, esi
// 0079d8fc  8b742414             mov esi, dword ptr [esp + 0x14]
// 0079d900  7513                 jne 0x79d915
// 0079d902  6afe                 push -2
// 0079d904  83c502               add ebp, 2
// 0079d907  55                   push ebp
// 0079d908  e8f3fcffff           call 0x79d600
// 0079d90d  83c408               add esp, 8
// 0079d910  5f                   pop edi
// 0079d911  5e                   pop esi
// 0079d912  5d                   pop ebp
// 0079d913  5b                   pop ebx
// 0079d914  c3                   ret 
// 0079d915  6aff                 push -1
// 0079d917  50                   push eax
// 0079d918  e8e3fcffff           call 0x79d600
// 0079d91d  83c408               add esp, 8
// 0079d920  5f                   pop edi
// 0079d921  5e                   pop esi
// 0079d922  5d                   pop ebp
// 0079d923  5b                   pop ebx
// 0079d924  c3                   ret 
// 0079d925  45                   inc ebp
// 0079d926  8bde                 mov ebx, esi
// 0079d928  8b742414             mov esi, dword ptr [esp + 0x14]
// 0079d92c  55                   push ebp
// 0079d92d  e81efdffff           call 0x79d650
// 0079d932  83c404               add esp, 4
// 0079d935  5f                   pop edi
// 0079d936  5e                   pop esi
// 0079d937  5d                   pop ebp
// 0079d938  5b                   pop ebx
// 0079d939  c3                   ret 
// 0079d93a  5f                   pop edi
// 0079d93b  8bc6                 mov eax, esi
// 0079d93d  5e                   pop esi
// 0079d93e  5d                   pop ebp
// 0079d93f  5b                   pop ebx
// 0079d940  c3                   ret 
// 0079d941  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0079d945  33c0                 xor eax, eax
// 0079d947  3b7104               cmp esi, dword ptr [ecx + 4]
// 0079d94a  5f                   pop edi
// 0079d94b  0f95c0               setne al
// 0079d94e  48                   dec eax
// 0079d94f  23c6                 and eax, esi
// 0079d951  5e                   pop esi
// 0079d952  5d                   pop ebp
// 0079d953  5b                   pop ebx
// 0079d954  c3                   ret 
// 0079d955  57                   push edi
// 0079d956  55                   push ebp
// 0079d957  56                   push esi
// 0079d958  53                   push ebx
// 0079d959  e872fbffff           call 0x79d4d0
// 0079d95e  83c410               add esp, 0x10
// 0079d961  5f                   pop edi
// 0079d962  5e                   pop esi
// 0079d963  5d                   pop ebp
// 0079d964  5b                   pop ebx
// 0079d965  c3                   ret 
// 0079d966  85c9                 test ecx, ecx
// 0079d968  7425                 je 0x79d98f
// 0079d96a  57                   push edi
// 0079d96b  55                   push ebp
// 0079d96c  46                   inc esi
// 0079d96d  56                   push esi
// 0079d96e  53                   push ebx
// 0079d96f  e85cfbffff           call 0x79d4d0
// 0079d974  83c410               add esp, 0x10
// 0079d977  5f                   pop edi
// 0079d978  5e                   pop esi
// 0079d979  5d                   pop ebp
// 0079d97a  5b                   pop ebx
// 0079d97b  c3                   ret 
// 0079d97c  57                   push edi
// 0079d97d  53                   push ebx
// 0079d97e  8bfd                 mov edi, ebp
// 0079d980  8bc6                 mov eax, esi
// 0079d982  e8e9fbffff           call 0x79d570
// 0079d987  83c408               add esp, 8
// 0079d98a  5f                   pop edi
// 0079d98b  5e                   pop esi
// 0079d98c  5d                   pop ebp
// 0079d98d  5b                   pop ebx
// 0079d98e  c3                   ret 
// 0079d98f  33c0                 xor eax, eax
// 0079d991  5f                   pop edi
// 0079d992  5e                   pop esi
// 0079d993  5d                   pop ebp
// 0079d994  5b                   pop ebx
// 0079d995  c3                   ret 
// 0079d996  8bff                 mov edi, edi
// 0079d998  3ad9                 cmp bl, cl
// 0079d99a  7900                 jns 0x79d99c
// 0079d99c  39d8                 cmp eax, ebx
// 0079d99e  7900                 jns 0x79d9a0
// 0079d9a0  6bd779               imul edx, edi, 0x79
// 0079d9a3  00f3                 add bl, dh
// 0079d9a5  d87900               fdivr dword ptr [ecx]
// 0079d9a8  25d9790043           and eax, 0x430079d9
// 0079d9ad  d87900               fdivr dword ptr [ecx]
// 0079d9b0  000505050505         add byte ptr [0x5050505], al
// 0079d9b6  0505050505           add eax, 0x5050505
// 0079d9bb  0505050505           add eax, 0x5050505
// 0079d9c0  0505050505           add eax, 0x5050505
// 0079d9c5  0505050505           add eax, 0x5050505
// 0079d9ca  0505050505           add eax, 0x5050505
// 0079d9cf  0505050505           add eax, 0x5050505
// 0079d9d4  0102                 add dword ptr [edx], eax
// 0079d9d6  050503048b           add eax, 0x8b040305
// 0079d9db  ff55d9               call dword ptr [ebp - 0x27]
// 0079d9de  7900                 jns 0x79d9e0
// 0079d9e0  66d97900             fnstcw word ptr [ecx]
// 0079d9e4  7cd9                 jl 0x79d9bf
// 0079d9e6  7900                 jns 0x79d9e8
// 0079d9e8  bed87900e3           mov esi, 0xe30079d8
// 0079d9ed  d87900               fdivr dword ptr [ecx]
// 0079d9f0  0001                 add byte ptr [ecx], al
// 0079d9f2  0402                 add al, 2
// 0079d9f4  0404                 add al, 4
// 0079d9f6  0404                 add al, 4
// 0079d9f8  0404                 add al, 4
// 0079d9fa  0404                 add al, 4
// 0079d9fc  0404                 add al, 4
// 0079d9fe  0404                 add al, 4
// 0079da00  0404                 add al, 4
// 0079da02  0404                 add al, 4
// 0079da04  0403                 add al, 3
// copied from an identical function in another client (function _match)

// from server: 100% by tester
// roc-lang: c
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4-dll lstrlib.c