// roc 2009-12 008a8e50  unit: CXTPDockingPaneLayout  size: 753 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008a8e50
//
// 008a8e50  6aff                 push -1
// 008a8e52  6827299600           push 0x962927
// 008a8e57  64a100000000         mov eax, dword ptr fs:[0]
// 008a8e5d  50                   push eax
// 008a8e5e  81ec1c010000         sub esp, 0x11c
// 008a8e64  a10052b600           mov eax, dword ptr [0xb65200]
// 008a8e69  33c4                 xor eax, esp
// 008a8e6b  89842418010000       mov dword ptr [esp + 0x118], eax
// 008a8e72  53                   push ebx
// 008a8e73  55                   push ebp
// 008a8e74  56                   push esi
// 008a8e75  57                   push edi
// 008a8e76  a10052b600           mov eax, dword ptr [0xb65200]
// 008a8e7b  33c4                 xor eax, esp
// 008a8e7d  50                   push eax
// 008a8e7e  8d842430010000       lea eax, [esp + 0x130]
// 008a8e85  64a300000000         mov dword ptr fs:[0], eax
// 008a8e8b  8bb42440010000       mov esi, dword ptr [esp + 0x140]
// 008a8e92  8b06                 mov eax, dword ptr [esi]
// 008a8e94  8b5074               mov edx, dword ptr [eax + 0x74]
// 008a8e97  8be9                 mov ebp, ecx
// 008a8e99  8bce                 mov ecx, esi
// 008a8e9b  896c2414             mov dword ptr [esp + 0x14], ebp
// 008a8e9f  ffd2                 call edx
// 008a8ea1  8bcd                 mov ecx, ebp
// 008a8ea3  e898faffff           call 0x8a8940
// 008a8ea8  8b06                 mov eax, dword ptr [esi]
// 008a8eaa  8b5070               mov edx, dword ptr [eax + 0x70]
// 008a8ead  68d862a000           push 0xa062d8
// 008a8eb2  8bce                 mov ecx, esi
// 008a8eb4  ffd2                 call edx
// 008a8eb6  8bf8                 mov edi, eax
// 008a8eb8  897c2424             mov dword ptr [esp + 0x24], edi
// 008a8ebc  8b4550               mov eax, dword ptr [ebp + 0x50]
// 008a8ebf  8d4c2428             lea ecx, [esp + 0x28]
// 008a8ec3  51                   push ecx
// 008a8ec4  68d062a000           push 0xa062d0
// 008a8ec9  57                   push edi
// 008a8eca  c784244401000000000000 mov dword ptr [esp + 0x144], 0
// 008a8ed5  89442434             mov dword ptr [esp + 0x34], eax
// 008a8ed9  e8f27afaff           call 0x8509d0
// 008a8ede  83c40c               add esp, 0xc
// 008a8ee1  8bcf                 mov ecx, edi
// 008a8ee3  e8688bfaff           call 0x851a50
// 008a8ee8  8b7d2c               mov edi, dword ptr [ebp + 0x2c]
// 008a8eeb  bb01000000           mov ebx, 1
// 008a8ef0  85ff                 test edi, edi
// 008a8ef2  746f                 je 0x8a8f63
// 008a8ef4  8bc7                 mov eax, edi
// 008a8ef6  8b6808               mov ebp, dword ptr [eax + 8]
// 008a8ef9  8b3f                 mov edi, dword ptr [edi]
// 008a8efb  895d54               mov dword ptr [ebp + 0x54], ebx
// 008a8efe  8b5554               mov edx, dword ptr [ebp + 0x54]
// 008a8f01  52                   push edx
// 008a8f02  8d442430             lea eax, [esp + 0x30]
// 008a8f06  68c862a000           push 0xa062c8
// 008a8f0b  50                   push eax
// 008a8f0c  43                   inc ebx
// 008a8f0d  ff1520cb9800         call dword ptr [0x98cb20]
// 008a8f13  8b16                 mov edx, dword ptr [esi]
// 008a8f15  8b5270               mov edx, dword ptr [edx + 0x70]
// 008a8f18  83c40c               add esp, 0xc
// 008a8f1b  8d44242c             lea eax, [esp + 0x2c]
// 008a8f1f  50                   push eax
// 008a8f20  8bce                 mov ecx, esi
// 008a8f22  ffd2                 call edx
// 008a8f24  8944241c             mov dword ptr [esp + 0x1c], eax
// 008a8f28  8b4d38               mov ecx, dword ptr [ebp + 0x38]
// 008a8f2b  8d542418             lea edx, [esp + 0x18]
// 008a8f2f  52                   push edx
// 008a8f30  68d02c9a00           push 0x9a2cd0
// 008a8f35  50                   push eax
// 008a8f36  c684244401000001     mov byte ptr [esp + 0x144], 1
// 008a8f3e  894c2424             mov dword ptr [esp + 0x24], ecx
// 008a8f42  e8897afaff           call 0x8509d0
// 008a8f47  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 008a8f4b  83c40c               add esp, 0xc
// 008a8f4e  c684243801000000     mov byte ptr [esp + 0x138], 0
// 008a8f56  85c9                 test ecx, ecx
// 008a8f58  7405                 je 0x8a8f5f
// 008a8f5a  e87daef4ff           call 0x7f3ddc
// 008a8f5f  85ff                 test edi, edi
// 008a8f61  7591                 jne 0x8a8ef4
// 008a8f63  8b442414             mov eax, dword ptr [esp + 0x14]
// 008a8f67  8b4048               mov eax, dword ptr [eax + 0x48]
// 008a8f6a  85c0                 test eax, eax
// 008a8f6c  0f8480000000         je 0x8a8ff2
// 008a8f72  eb04                 jmp 0x8a8f78
// 008a8f74  8b442418             mov eax, dword ptr [esp + 0x18]
// 008a8f78  8b7808               mov edi, dword ptr [eax + 8]
// 008a8f7b  837f1800             cmp dword ptr [edi + 0x18], 0
// 008a8f7f  8b08                 mov ecx, dword ptr [eax]
// 008a8f81  894c2418             mov dword ptr [esp + 0x18], ecx
// 008a8f85  7464                 je 0x8a8feb
// 008a8f87  895f34               mov dword ptr [edi + 0x34], ebx
// 008a8f8a  8b5734               mov edx, dword ptr [edi + 0x34]
// 008a8f8d  52                   push edx
// 008a8f8e  8d442430             lea eax, [esp + 0x30]
// 008a8f92  68c862a000           push 0xa062c8
// 008a8f97  50                   push eax
// 008a8f98  43                   inc ebx
// 008a8f99  ff1520cb9800         call dword ptr [0x98cb20]
// 008a8f9f  8b16                 mov edx, dword ptr [esi]
// 008a8fa1  8b5270               mov edx, dword ptr [edx + 0x70]
// 008a8fa4  83c40c               add esp, 0xc
// 008a8fa7  8d44242c             lea eax, [esp + 0x2c]
// 008a8fab  50                   push eax
// 008a8fac  8bce                 mov ecx, esi
// 008a8fae  ffd2                 call edx
// 008a8fb0  8be8                 mov ebp, eax
// 008a8fb2  896c2420             mov dword ptr [esp + 0x20], ebp
// 008a8fb6  8b4718               mov eax, dword ptr [edi + 0x18]
// 008a8fb9  8d4c241c             lea ecx, [esp + 0x1c]
// 008a8fbd  51                   push ecx
// 008a8fbe  68d02c9a00           push 0x9a2cd0
// 008a8fc3  55                   push ebp
// 008a8fc4  c684244401000002     mov byte ptr [esp + 0x144], 2
// 008a8fcc  89442428             mov dword ptr [esp + 0x28], eax
// 008a8fd0  e8fb79faff           call 0x8509d0
// 008a8fd5  83c40c               add esp, 0xc
// 008a8fd8  c684243801000000     mov byte ptr [esp + 0x138], 0
// 008a8fe0  85ed                 test ebp, ebp
// 008a8fe2  7407                 je 0x8a8feb
// 008a8fe4  8bcd                 mov ecx, ebp
// 008a8fe6  e8f1adf4ff           call 0x7f3ddc
// 008a8feb  837c241800           cmp dword ptr [esp + 0x18], 0
// 008a8ff0  7582                 jne 0x8a8f74
// 008a8ff2  8b542414             mov edx, dword ptr [esp + 0x14]
// 008a8ff6  8b7a2c               mov edi, dword ptr [edx + 0x2c]
// 008a8ff9  85ff                 test edi, edi
// 008a8ffb  7460                 je 0x8a905d
// 008a8ffd  8d4900               lea ecx, [ecx]
// 008a9000  8bc7                 mov eax, edi
// 008a9002  8b6808               mov ebp, dword ptr [eax + 8]
// 008a9005  8b4554               mov eax, dword ptr [ebp + 0x54]
// 008a9008  8b3f                 mov edi, dword ptr [edi]
// 008a900a  50                   push eax
// 008a900b  8d4c2430             lea ecx, [esp + 0x30]
// 008a900f  68c862a000           push 0xa062c8
// 008a9014  51                   push ecx
// 008a9015  ff1520cb9800         call dword ptr [0x98cb20]
// 008a901b  8b16                 mov edx, dword ptr [esi]
// 008a901d  8b5270               mov edx, dword ptr [edx + 0x70]
// 008a9020  83c40c               add esp, 0xc
// 008a9023  8d44242c             lea eax, [esp + 0x2c]
// 008a9027  50                   push eax
// 008a9028  8bce                 mov ecx, esi
// 008a902a  ffd2                 call edx
// 008a902c  8bd8                 mov ebx, eax
// 008a902e  895c2420             mov dword ptr [esp + 0x20], ebx
// 008a9032  8b4520               mov eax, dword ptr [ebp + 0x20]
// 008a9035  8b5040               mov edx, dword ptr [eax + 0x40]
// 008a9038  8d4d20               lea ecx, [ebp + 0x20]
// 008a903b  53                   push ebx
// 008a903c  c684243c01000003     mov byte ptr [esp + 0x13c], 3
// 008a9044  ffd2                 call edx
// 008a9046  c684243801000000     mov byte ptr [esp + 0x138], 0
// 008a904e  85db                 test ebx, ebx
// 008a9050  7407                 je 0x8a9059
// 008a9052  8bcb                 mov ecx, ebx
// 008a9054  e883adf4ff           call 0x7f3ddc
// 008a9059  85ff                 test edi, edi
// 008a905b  75a3                 jne 0x8a9000
// 008a905d  8b442414             mov eax, dword ptr [esp + 0x14]
// 008a9061  8b6848               mov ebp, dword ptr [eax + 0x48]
// 008a9064  85ed                 test ebp, ebp
// 008a9066  746a                 je 0x8a90d2
// 008a9068  eb06                 jmp 0x8a9070
// 008a906a  8d9b00000000         lea ebx, [ebx]
// 008a9070  8bc5                 mov eax, ebp
// 008a9072  8b7808               mov edi, dword ptr [eax + 8]
// 008a9075  837f1800             cmp dword ptr [edi + 0x18], 0
// 008a9079  8b6d00               mov ebp, dword ptr [ebp]
// 008a907c  7450                 je 0x8a90ce
// 008a907e  8b4f34               mov ecx, dword ptr [edi + 0x34]
// 008a9081  51                   push ecx
// 008a9082  8d542430             lea edx, [esp + 0x30]
// 008a9086  68c862a000           push 0xa062c8
// 008a908b  52                   push edx
// 008a908c  ff1520cb9800         call dword ptr [0x98cb20]
// 008a9092  8b06                 mov eax, dword ptr [esi]
// 008a9094  8b5070               mov edx, dword ptr [eax + 0x70]
// 008a9097  83c40c               add esp, 0xc
// 008a909a  8d4c242c             lea ecx, [esp + 0x2c]
// 008a909e  51                   push ecx
// 008a909f  8bce                 mov ecx, esi
// 008a90a1  ffd2                 call edx
// 008a90a3  8bd8                 mov ebx, eax
// 008a90a5  895c2420             mov dword ptr [esp + 0x20], ebx
// 008a90a9  8b07                 mov eax, dword ptr [edi]
// 008a90ab  8b5040               mov edx, dword ptr [eax + 0x40]
// 008a90ae  53                   push ebx
// 008a90af  8bcf                 mov ecx, edi
// 008a90b1  c684243c01000004     mov byte ptr [esp + 0x13c], 4
// 008a90b9  ffd2                 call edx
// 008a90bb  c684243801000000     mov byte ptr [esp + 0x138], 0
// 008a90c3  85db                 test ebx, ebx
// 008a90c5  7407                 je 0x8a90ce
// 008a90c7  8bcb                 mov ecx, ebx
// 008a90c9  e80eadf4ff           call 0x7f3ddc
// 008a90ce  85ed                 test ebp, ebp
// 008a90d0  759e                 jne 0x8a9070
// 008a90d2  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 008a90d6  8b4720               mov eax, dword ptr [edi + 0x20]
// 008a90d9  8b742424             mov esi, dword ptr [esp + 0x24]
// 008a90dd  83c054               add eax, 0x54
// 008a90e0  50                   push eax
// 008a90e1  68a463a000           push 0xa063a4
// 008a90e6  56                   push esi
// 008a90e7  e8e478faff           call 0x8509d0
// 008a90ec  8b4f24               mov ecx, dword ptr [edi + 0x24]
// 008a90ef  83c134               add ecx, 0x34
// 008a90f2  51                   push ecx
// 008a90f3  689c63a000           push 0xa0639c
// 008a90f8  56                   push esi
// 008a90f9  e8d278faff           call 0x8509d0
// 008a90fe  83c418               add esp, 0x18
// 008a9101  c7842438010000ffffffff mov dword ptr [esp + 0x138], 0xffffffff
// 008a910c  85f6                 test esi, esi
// 008a910e  7407                 je 0x8a9117
// 008a9110  8bce                 mov ecx, esi
// 008a9112  e8c5acf4ff           call 0x7f3ddc
// 008a9117  8b8c2430010000       mov ecx, dword ptr [esp + 0x130]
// 008a911e  64890d00000000       mov dword ptr fs:[0], ecx
// 008a9125  59                   pop ecx
// 008a9126  5f                   pop edi
// 008a9127  5e                   pop esi
// 008a9128  5d                   pop ebp
// 008a9129  5b                   pop ebx
// 008a912a  8b8c2418010000       mov ecx, dword ptr [esp + 0x118]
// 008a9131  33cc                 xor ecx, esp
// 008a9133  e862c2f4ff           call 0x7f539a
// 008a9138  81c428010000         add esp, 0x128
// 008a913e  c20400               ret 4
// copied from an identical function in another client (function ?_Save@CXTPDockingPaneLayout@@AAEXPAVCXTPPropExchange@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\DockingPane\XTPDockingPaneLayout.cpp