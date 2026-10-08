// roc 2007-03 004b8b90  unit: seg_004b0000  size: 345 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004b8b90
//
// 004b8b90  6aff                 push -1
// 004b8b92  6808cc7400           push 0x74cc08
// 004b8b97  64a100000000         mov eax, dword ptr fs:[0]
// 004b8b9d  50                   push eax
// 004b8b9e  64892500000000       mov dword ptr fs:[0], esp
// 004b8ba5  83ec14               sub esp, 0x14
// 004b8ba8  56                   push esi
// 004b8ba9  57                   push edi
// 004b8baa  8bf9                 mov edi, ecx
// 004b8bac  33f6                 xor esi, esi
// 004b8bae  3937                 cmp dword ptr [edi], esi
// 004b8bb0  897c2408             mov dword ptr [esp + 8], edi
// 004b8bb4  0f841e010000         je 0x4b8cd8
// 004b8bba  33c9                 xor ecx, ecx
// 004b8bbc  b810000000           mov eax, 0x10
// 004b8bc1  89442418             mov dword ptr [esp + 0x18], eax
// 004b8bc5  ba04000000           mov edx, 4
// 004b8bca  f7e2                 mul edx
// 004b8bcc  0f90c1               seto cl
// 004b8bcf  53                   push ebx
// 004b8bd0  55                   push ebp
// 004b8bd1  f7d9                 neg ecx
// 004b8bd3  0bc8                 or ecx, eax
// 004b8bd5  51                   push ecx
// 004b8bd6  e82d551600           call 0x61e108
// 004b8bdb  83c404               add esp, 4
// 004b8bde  89442414             mov dword ptr [esp + 0x14], eax
// 004b8be2  89742418             mov dword ptr [esp + 0x18], esi
// 004b8be6  8974241c             mov dword ptr [esp + 0x1c], esi
// 004b8bea  57                   push edi
// 004b8beb  8d4c2418             lea ecx, [esp + 0x18]
// 004b8bef  89742430             mov dword ptr [esp + 0x30], esi
// 004b8bf3  e8d80f0000           call 0x4b9bd0
// 004b8bf8  8b6c2420             mov ebp, dword ptr [esp + 0x20]
// 004b8bfc  8b5c241c             mov ebx, dword ptr [esp + 0x1c]
// 004b8c00  8b742418             mov esi, dword ptr [esp + 0x18]
// 004b8c04  8bc3                 mov eax, ebx
// 004b8c06  2bc6                 sub eax, esi
// 004b8c08  3bf3                 cmp esi, ebx
// 004b8c0a  7602                 jbe 0x4b8c0e
// 004b8c0c  03c5                 add eax, ebp
// 004b8c0e  85c0                 test eax, eax
// 004b8c10  0f8681000000         jbe 0x4b8c97
// 004b8c16  83c601               add esi, 1
// 004b8c19  3bf5                 cmp esi, ebp
// 004b8c1b  89742418             mov dword ptr [esp + 0x18], esi
// 004b8c1f  7510                 jne 0x4b8c31
// 004b8c21  8b442414             mov eax, dword ptr [esp + 0x14]
// 004b8c25  8b7ca8fc             mov edi, dword ptr [eax + ebp*4 - 4]
// 004b8c29  33f6                 xor esi, esi
// 004b8c2b  89742418             mov dword ptr [esp + 0x18], esi
// 004b8c2f  eb16                 jmp 0x4b8c47
// 004b8c31  85f6                 test esi, esi
// 004b8c33  750a                 jne 0x4b8c3f
// 004b8c35  8b442414             mov eax, dword ptr [esp + 0x14]
// 004b8c39  8b7ca8fc             mov edi, dword ptr [eax + ebp*4 - 4]
// 004b8c3d  eb08                 jmp 0x4b8c47
// 004b8c3f  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 004b8c43  8b7cb1fc             mov edi, dword ptr [ecx + esi*4 - 4]
// 004b8c47  837f0800             cmp dword ptr [edi + 8], 0
// 004b8c4b  8d4708               lea eax, [edi + 8]
// 004b8c4e  7416                 je 0x4b8c66
// 004b8c50  50                   push eax
// 004b8c51  8d4c2418             lea ecx, [esp + 0x18]
// 004b8c55  e8760f0000           call 0x4b9bd0
// 004b8c5a  8b6c2420             mov ebp, dword ptr [esp + 0x20]
// 004b8c5e  8b5c241c             mov ebx, dword ptr [esp + 0x1c]
// 004b8c62  8b742418             mov esi, dword ptr [esp + 0x18]
// 004b8c66  837f0c00             cmp dword ptr [edi + 0xc], 0
// 004b8c6a  8d470c               lea eax, [edi + 0xc]
// 004b8c6d  7416                 je 0x4b8c85
// 004b8c6f  50                   push eax
// 004b8c70  8d4c2418             lea ecx, [esp + 0x18]
// 004b8c74  e8570f0000           call 0x4b9bd0
// 004b8c79  8b6c2420             mov ebp, dword ptr [esp + 0x20]
// 004b8c7d  8b5c241c             mov ebx, dword ptr [esp + 0x1c]
// 004b8c81  8b742418             mov esi, dword ptr [esp + 0x18]
// 004b8c85  57                   push edi
// 004b8c86  e865541600           call 0x61e0f0
// 004b8c8b  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 004b8c8f  83c404               add esp, 4
// 004b8c92  e96dffffff           jmp 0x4b8c04
// 004b8c97  8d7704               lea esi, [edi + 4]
// 004b8c9a  bf00010000           mov edi, 0x100
// 004b8c9f  90                   nop 
// 004b8ca0  8b06                 mov eax, dword ptr [esi]
// 004b8ca2  50                   push eax
// 004b8ca3  e848541600           call 0x61e0f0
// 004b8ca8  83c404               add esp, 4
// 004b8cab  83c608               add esi, 8
// 004b8cae  83ef01               sub edi, 1
// 004b8cb1  75ed                 jne 0x4b8ca0
// 004b8cb3  8b542410             mov edx, dword ptr [esp + 0x10]
// 004b8cb7  85ed                 test ebp, ebp
// 004b8cb9  5d                   pop ebp
// 004b8cba  c70200000000         mov dword ptr [edx], 0
// 004b8cc0  c7442428ffffffff     mov dword ptr [esp + 0x28], 0xffffffff
// 004b8cc8  5b                   pop ebx
// 004b8cc9  760d                 jbe 0x4b8cd8
// 004b8ccb  8b44240c             mov eax, dword ptr [esp + 0xc]
// 004b8ccf  50                   push eax
// 004b8cd0  e81b541600           call 0x61e0f0
// 004b8cd5  83c404               add esp, 4
// 004b8cd8  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 004b8cdc  5f                   pop edi
// 004b8cdd  5e                   pop esi
// 004b8cde  64890d00000000       mov dword ptr fs:[0], ecx
// 004b8ce5  83c420               add esp, 0x20
// 004b8ce8  c3                   ret 
// library rbxgs-raknet/DS_HuffmanEncodingTree.cpp (function ?FreeMemory@HuffmanEncodingTree@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-raknet DS_HuffmanEncodingTree.cpp
