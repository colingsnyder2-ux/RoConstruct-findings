// from server: 100% by tester
// roc 2007-03 0046e010  unit: seg_00460000  size: 409 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0046e010
//
// 0046e010  6aff                 push -1
// 0046e012  6836697400           push 0x746936
// 0046e017  64a100000000         mov eax, dword ptr fs:[0]
// 0046e01d  50                   push eax
// 0046e01e  51                   push ecx
// 0046e01f  53                   push ebx
// 0046e020  55                   push ebp
// 0046e021  56                   push esi
// 0046e022  57                   push edi
// 0046e023  a1b4f58a00           mov eax, dword ptr [0x8af5b4]
// 0046e028  33c4                 xor eax, esp
// 0046e02a  50                   push eax
// 0046e02b  8d442418             lea eax, [esp + 0x18]
// 0046e02f  64a300000000         mov dword ptr fs:[0], eax
// 0046e035  8bf9                 mov edi, ecx
// 0046e037  8b442428             mov eax, dword ptr [esp + 0x28]
// 0046e03b  83781810             cmp dword ptr [eax + 0x18], 0x10
// 0046e03f  8b4814               mov ecx, dword ptr [eax + 0x14]
// 0046e042  7205                 jb 0x46e049
// 0046e044  8b4004               mov eax, dword ptr [eax + 4]
// 0046e047  eb03                 jmp 0x46e04c
// 0046e049  83c004               add eax, 4
// 0046e04c  51                   push ecx
// 0046e04d  50                   push eax
// 0046e04e  e86dfa0800           call 0x4fdac0
// 0046e053  33d2                 xor edx, edx
// 0046e055  8be8                 mov ebp, eax
// 0046e057  f7770c               div dword ptr [edi + 0xc]
// 0046e05a  8b4708               mov eax, dword ptr [edi + 8]
// 0046e05d  83c408               add esp, 8
// 0046e060  8bda                 mov ebx, edx
// 0046e062  8b3498               mov esi, dword ptr [eax + ebx*4]
// 0046e065  85f6                 test esi, esi
// 0046e067  7548                 jne 0x46e0b1
// 0046e069  6a28                 push 0x28
// 0046e06b  e8105b0800           call 0x4f3b80
// 0046e070  8bf0                 mov esi, eax
// 0046e072  83c404               add esp, 4
// 0046e075  89742414             mov dword ptr [esp + 0x14], esi
// 0046e079  33c0                 xor eax, eax
// 0046e07b  3bf0                 cmp esi, eax
// 0046e07d  89442420             mov dword ptr [esp + 0x20], eax
// 0046e081  0f8402010000         je 0x46e189
// 0046e087  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 0046e08b  0fb611               movzx edx, byte ptr [ecx]
// 0046e08e  50                   push eax
// 0046e08f  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 0046e093  55                   push ebp
// 0046e094  52                   push edx
// 0046e095  83ec1c               sub esp, 0x1c
// 0046e098  8bcc                 mov ecx, esp
// 0046e09a  89642454             mov dword ptr [esp + 0x54], esp
// 0046e09e  50                   push eax
// 0046e09f  ff157ce77700         call dword ptr [0x77e77c]
// 0046e0a5  8bce                 mov ecx, esi
// 0046e0a7  e8c4f6ffff           call 0x46d770
// 0046e0ac  e9d8000000           jmp 0x46e189
// 0046e0b1  c744241401000000     mov dword ptr [esp + 0x14], 1
// 0046e0b9  b301                 mov bl, 1
// 0046e0bb  eb03                 jmp 0x46e0c0
// 0046e0bd  8d4900               lea ecx, [ecx]
// 0046e0c0  84db                 test bl, bl
// 0046e0c2  7408                 je 0x46e0cc
// 0046e0c4  3b2e                 cmp ebp, dword ptr [esi]
// 0046e0c6  7504                 jne 0x46e0cc
// 0046e0c8  b301                 mov bl, 1
// 0046e0ca  eb02                 jmp 0x46e0ce
// 0046e0cc  32db                 xor bl, bl
// 0046e0ce  3b2e                 cmp ebp, dword ptr [esi]
// 0046e0d0  751a                 jne 0x46e0ec
// 0046e0d2  8b542428             mov edx, dword ptr [esp + 0x28]
// 0046e0d6  52                   push edx
// 0046e0d7  8d4604               lea eax, [esi + 4]
// 0046e0da  50                   push eax
// 0046e0db  ff15ece67700         call dword ptr [0x77e6ec]
// 0046e0e1  83c408               add esp, 8
// 0046e0e4  84c0                 test al, al
// 0046e0e6  0f8590000000         jne 0x46e17c
// 0046e0ec  8b7624               mov esi, dword ptr [esi + 0x24]
// 0046e0ef  8344241401           add dword ptr [esp + 0x14], 1
// 0046e0f4  85f6                 test esi, esi
// 0046e0f6  75c8                 jne 0x46e0c0
// 0046e0f8  33c0                 xor eax, eax
// 0046e0fa  84db                 test bl, bl
// 0046e0fc  0f94c0               sete al
// 0046e0ff  33c9                 xor ecx, ecx
// 0046e101  837c241405           cmp dword ptr [esp + 0x14], 5
// 0046e106  0f9fc1               setg cl
// 0046e109  85c1                 test ecx, eax
// 0046e10b  741d                 je 0x46e12a
// 0046e10d  8b4704               mov eax, dword ptr [edi + 4]
// 0046e110  8b4f0c               mov ecx, dword ptr [edi + 0xc]
// 0046e113  8d1480               lea edx, [eax + eax*4]
// 0046e116  03d2                 add edx, edx
// 0046e118  03d2                 add edx, edx
// 0046e11a  3bca                 cmp ecx, edx
// 0046e11c  7d0c                 jge 0x46e12a
// 0046e11e  8d440901             lea eax, [ecx + ecx + 1]
// 0046e122  50                   push eax
// 0046e123  8bcf                 mov ecx, edi
// 0046e125  e816f1ffff           call 0x46d240
// 0046e12a  33d2                 xor edx, edx
// 0046e12c  8bc5                 mov eax, ebp
// 0046e12e  f7770c               div dword ptr [edi + 0xc]
// 0046e131  6a28                 push 0x28
// 0046e133  8bda                 mov ebx, edx
// 0046e135  e8465a0800           call 0x4f3b80
// 0046e13a  8bf0                 mov esi, eax
// 0046e13c  83c404               add esp, 4
// 0046e13f  89742414             mov dword ptr [esp + 0x14], esi
// 0046e143  85f6                 test esi, esi
// 0046e145  c744242001000000     mov dword ptr [esp + 0x20], 1
// 0046e14d  7438                 je 0x46e187
// 0046e14f  8b4f08               mov ecx, dword ptr [edi + 8]
// 0046e152  8b1499               mov edx, dword ptr [ecx + ebx*4]
// 0046e155  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 0046e159  0fb608               movzx ecx, byte ptr [eax]
// 0046e15c  52                   push edx
// 0046e15d  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 0046e161  55                   push ebp
// 0046e162  51                   push ecx
// 0046e163  83ec1c               sub esp, 0x1c
// 0046e166  8bcc                 mov ecx, esp
// 0046e168  89642454             mov dword ptr [esp + 0x54], esp
// 0046e16c  52                   push edx
// 0046e16d  ff157ce77700         call dword ptr [0x77e77c]
// 0046e173  8bce                 mov ecx, esi
// 0046e175  e8f6f5ffff           call 0x46d770
// 0046e17a  eb0d                 jmp 0x46e189
// 0046e17c  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 0046e180  8a11                 mov dl, byte ptr [ecx]
// 0046e182  885620               mov byte ptr [esi + 0x20], dl
// 0046e185  eb0c                 jmp 0x46e193
// 0046e187  33c0                 xor eax, eax
// 0046e189  8b4f08               mov ecx, dword ptr [edi + 8]
// 0046e18c  890499               mov dword ptr [ecx + ebx*4], eax
// 0046e18f  83470401             add dword ptr [edi + 4], 1
// 0046e193  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0046e197  64890d00000000       mov dword ptr fs:[0], ecx
// 0046e19e  59                   pop ecx
// 0046e19f  5f                   pop edi
// 0046e1a0  5e                   pop esi
// 0046e1a1  5d                   pop ebp
// 0046e1a2  5b                   pop ebx
// 0046e1a3  83c410               add esp, 0x10
// 0046e1a6  c20800               ret 8
// library g3d-6.09/GLG3Dcpp\GLCaps.cpp (function ?set@?$Table@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@_N@G3D@@QAEXABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AB_N@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/GLCaps.cpp
