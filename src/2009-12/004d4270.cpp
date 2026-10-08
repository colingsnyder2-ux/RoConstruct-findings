// roc 2009-12 004d4270  unit: G3D::TextureManager::TextureArgs  size: 409 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 004d4270
//
// 004d4270  6aff                 push -1
// 004d4272  68c6389300           push 0x9338c6
// 004d4277  64a100000000         mov eax, dword ptr fs:[0]
// 004d427d  50                   push eax
// 004d427e  64892500000000       mov dword ptr fs:[0], esp
// 004d4285  51                   push ecx
// 004d4286  8b442414             mov eax, dword ptr [esp + 0x14]
// 004d428a  83781810             cmp dword ptr [eax + 0x18], 0x10
// 004d428e  53                   push ebx
// 004d428f  55                   push ebp
// 004d4290  56                   push esi
// 004d4291  57                   push edi
// 004d4292  8bf9                 mov edi, ecx
// 004d4294  8b4814               mov ecx, dword ptr [eax + 0x14]
// 004d4297  7205                 jb 0x4d429e
// 004d4299  8b4004               mov eax, dword ptr [eax + 4]
// 004d429c  eb03                 jmp 0x4d42a1
// 004d429e  83c004               add eax, 4
// 004d42a1  51                   push ecx
// 004d42a2  50                   push eax
// 004d42a3  e808661200           call 0x5fa8b0
// 004d42a8  33d2                 xor edx, edx
// 004d42aa  8be8                 mov ebp, eax
// 004d42ac  f7770c               div dword ptr [edi + 0xc]
// 004d42af  8b4708               mov eax, dword ptr [edi + 8]
// 004d42b2  83c408               add esp, 8
// 004d42b5  8bda                 mov ebx, edx
// 004d42b7  8b3498               mov esi, dword ptr [eax + ebx*4]
// 004d42ba  85f6                 test esi, esi
// 004d42bc  7548                 jne 0x4d4306
// 004d42be  6a28                 push 0x28
// 004d42c0  e8db5f1100           call 0x5ea2a0
// 004d42c5  8bf0                 mov esi, eax
// 004d42c7  83c404               add esp, 4
// 004d42ca  89742410             mov dword ptr [esp + 0x10], esi
// 004d42ce  33c0                 xor eax, eax
// 004d42d0  8944241c             mov dword ptr [esp + 0x1c], eax
// 004d42d4  3bf0                 cmp esi, eax
// 004d42d6  0f840f010000         je 0x4d43eb
// 004d42dc  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 004d42e0  0fb611               movzx edx, byte ptr [ecx]
// 004d42e3  50                   push eax
// 004d42e4  8b442428             mov eax, dword ptr [esp + 0x28]
// 004d42e8  55                   push ebp
// 004d42e9  52                   push edx
// 004d42ea  83ec1c               sub esp, 0x1c
// 004d42ed  8bcc                 mov ecx, esp
// 004d42ef  89642450             mov dword ptr [esp + 0x50], esp
// 004d42f3  50                   push eax
// 004d42f4  ff15f0b69800         call dword ptr [0x98b6f0]
// 004d42fa  8bce                 mov ecx, esi
// 004d42fc  e82ff7ffff           call 0x4d3a30
// 004d4301  e9e5000000           jmp 0x4d43eb
// 004d4306  c744241001000000     mov dword ptr [esp + 0x10], 1
// 004d430e  b301                 mov bl, 1
// 004d4310  84db                 test bl, bl
// 004d4312  7408                 je 0x4d431c
// 004d4314  3b2e                 cmp ebp, dword ptr [esi]
// 004d4316  7504                 jne 0x4d431c
// 004d4318  b301                 mov bl, 1
// 004d431a  eb02                 jmp 0x4d431e
// 004d431c  32db                 xor bl, bl
// 004d431e  3b2e                 cmp ebp, dword ptr [esi]
// 004d4320  751a                 jne 0x4d433c
// 004d4322  8b542424             mov edx, dword ptr [esp + 0x24]
// 004d4326  52                   push edx
// 004d4327  8d4604               lea eax, [esi + 4]
// 004d432a  50                   push eax
// 004d432b  ff157cb69800         call dword ptr [0x98b67c]
// 004d4331  83c408               add esp, 8
// 004d4334  84c0                 test al, al
// 004d4336  0f858f000000         jne 0x4d43cb
// 004d433c  8b7624               mov esi, dword ptr [esi + 0x24]
// 004d433f  ff442410             inc dword ptr [esp + 0x10]
// 004d4343  85f6                 test esi, esi
// 004d4345  75c9                 jne 0x4d4310
// 004d4347  33c0                 xor eax, eax
// 004d4349  84db                 test bl, bl
// 004d434b  0f94c0               sete al
// 004d434e  33c9                 xor ecx, ecx
// 004d4350  837c241005           cmp dword ptr [esp + 0x10], 5
// 004d4355  0f9fc1               setg cl
// 004d4358  85c1                 test ecx, eax
// 004d435a  741d                 je 0x4d4379
// 004d435c  8b4704               mov eax, dword ptr [edi + 4]
// 004d435f  8b4f0c               mov ecx, dword ptr [edi + 0xc]
// 004d4362  8d1480               lea edx, [eax + eax*4]
// 004d4365  03d2                 add edx, edx
// 004d4367  03d2                 add edx, edx
// 004d4369  3bca                 cmp ecx, edx
// 004d436b  7d0c                 jge 0x4d4379
// 004d436d  8d440901             lea eax, [ecx + ecx + 1]
// 004d4371  50                   push eax
// 004d4372  8bcf                 mov ecx, edi
// 004d4374  e8c7f1ffff           call 0x4d3540
// 004d4379  33d2                 xor edx, edx
// 004d437b  8bc5                 mov eax, ebp
// 004d437d  f7770c               div dword ptr [edi + 0xc]
// 004d4380  6a28                 push 0x28
// 004d4382  8bda                 mov ebx, edx
// 004d4384  e8175f1100           call 0x5ea2a0
// 004d4389  8bf0                 mov esi, eax
// 004d438b  83c404               add esp, 4
// 004d438e  89742410             mov dword ptr [esp + 0x10], esi
// 004d4392  c744241c01000000     mov dword ptr [esp + 0x1c], 1
// 004d439a  85f6                 test esi, esi
// 004d439c  744b                 je 0x4d43e9
// 004d439e  8b4f08               mov ecx, dword ptr [edi + 8]
// 004d43a1  8b1499               mov edx, dword ptr [ecx + ebx*4]
// 004d43a4  8b442428             mov eax, dword ptr [esp + 0x28]
// 004d43a8  0fb608               movzx ecx, byte ptr [eax]
// 004d43ab  52                   push edx
// 004d43ac  8b542428             mov edx, dword ptr [esp + 0x28]
// 004d43b0  55                   push ebp
// 004d43b1  51                   push ecx
// 004d43b2  83ec1c               sub esp, 0x1c
// 004d43b5  8bcc                 mov ecx, esp
// 004d43b7  89642450             mov dword ptr [esp + 0x50], esp
// 004d43bb  52                   push edx
// 004d43bc  ff15f0b69800         call dword ptr [0x98b6f0]
// 004d43c2  8bce                 mov ecx, esi
// 004d43c4  e867f6ffff           call 0x4d3a30
// 004d43c9  eb20                 jmp 0x4d43eb
// 004d43cb  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 004d43cf  8a11                 mov dl, byte ptr [ecx]
// 004d43d1  885620               mov byte ptr [esi + 0x20], dl
// 004d43d4  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 004d43d8  64890d00000000       mov dword ptr fs:[0], ecx
// 004d43df  5f                   pop edi
// 004d43e0  5e                   pop esi
// 004d43e1  5d                   pop ebp
// 004d43e2  5b                   pop ebx
// 004d43e3  83c410               add esp, 0x10
// 004d43e6  c20800               ret 8
// 004d43e9  33c0                 xor eax, eax
// 004d43eb  8b4f08               mov ecx, dword ptr [edi + 8]
// 004d43ee  890499               mov dword ptr [ecx + ebx*4], eax
// 004d43f1  ff4704               inc dword ptr [edi + 4]
// 004d43f4  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 004d43f8  5f                   pop edi
// 004d43f9  5e                   pop esi
// 004d43fa  5d                   pop ebp
// 004d43fb  64890d00000000       mov dword ptr fs:[0], ecx
// 004d4402  5b                   pop ebx
// 004d4403  83c410               add esp, 0x10
// 004d4406  c20800               ret 8
// library g3d-6.09/GLG3Dcpp\GLCaps.cpp (function ?set@?$Table@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@_N@G3D@@QAEXABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AB_N@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: g3d-6.09 GLG3Dcpp/GLCaps.cpp
