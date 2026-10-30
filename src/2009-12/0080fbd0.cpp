// roc 2009-12 0080fbd0  unit: CXTPImageManagerIcon  size: 773 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0080fbd0
//
// 0080fbd0  6aff                 push -1
// 0080fbd2  68459f9500           push 0x959f45
// 0080fbd7  64a100000000         mov eax, dword ptr fs:[0]
// 0080fbdd  50                   push eax
// 0080fbde  83ec18               sub esp, 0x18
// 0080fbe1  53                   push ebx
// 0080fbe2  55                   push ebp
// 0080fbe3  56                   push esi
// 0080fbe4  57                   push edi
// 0080fbe5  a10052b600           mov eax, dword ptr [0xb65200]
// 0080fbea  33c4                 xor eax, esp
// 0080fbec  50                   push eax
// 0080fbed  8d44242c             lea eax, [esp + 0x2c]
// 0080fbf1  64a300000000         mov dword ptr fs:[0], eax
// 0080fbf7  8bf9                 mov edi, ecx
// 0080fbf9  8b5c243c             mov ebx, dword ptr [esp + 0x3c]
// 0080fbfd  3b5f74               cmp ebx, dword ptr [edi + 0x74]
// 0080fc00  7603                 jbe 0x80fc05
// 0080fc02  895f74               mov dword ptr [edi + 0x74], ebx
// 0080fc05  688c329f00           push 0x9f328c
// 0080fc0a  8d4c2418             lea ecx, [esp + 0x18]
// 0080fc0e  ff15b8de9800         call dword ptr [0x98deb8]
// 0080fc14  8b742440             mov esi, dword ptr [esp + 0x40]
// 0080fc18  837e2800             cmp dword ptr [esi + 0x28], 0
// 0080fc1c  c744243400000000     mov dword ptr [esp + 0x34], 0
// 0080fc24  688c329f00           push 0x9f328c
// 0080fc29  0f850d010000         jne 0x80fd3c
// 0080fc2f  8d442418             lea eax, [esp + 0x18]
// 0080fc33  50                   push eax
// 0080fc34  6880329f00           push 0x9f3280
// 0080fc39  56                   push esi
// 0080fc3a  e8810e0400           call 0x850ac0
// 0080fc3f  83c410               add esp, 0x10
// 0080fc42  53                   push ebx
// 0080fc43  8bcf                 mov ecx, edi
// 0080fc45  e826d8ffff           call 0x80d470
// 0080fc4a  8b16                 mov edx, dword ptr [esi]
// 0080fc4c  8be8                 mov ebp, eax
// 0080fc4e  8b8294000000         mov eax, dword ptr [edx + 0x94]
// 0080fc54  6814ce9d00           push 0x9dce14
// 0080fc59  8bce                 mov ecx, esi
// 0080fc5b  85ed                 test ebp, ebp
// 0080fc5d  752d                 jne 0x80fc8c
// 0080fc5f  ffd0                 call eax
// 0080fc61  8bf0                 mov esi, eax
// 0080fc63  8974243c             mov dword ptr [esp + 0x3c], esi
// 0080fc67  8b16                 mov edx, dword ptr [esi]
// 0080fc69  8b4204               mov eax, dword ptr [edx + 4]
// 0080fc6c  6a01                 push 1
// 0080fc6e  55                   push ebp
// 0080fc6f  8bce                 mov ecx, esi
// 0080fc71  c644243c01           mov byte ptr [esp + 0x3c], 1
// 0080fc76  ffd0                 call eax
// 0080fc78  8b16                 mov edx, dword ptr [esi]
// 0080fc7a  8b02                 mov eax, dword ptr [edx]
// 0080fc7c  6a01                 push 1
// 0080fc7e  8bce                 mov ecx, esi
// 0080fc80  c644243800           mov byte ptr [esp + 0x38], 0
// 0080fc85  ffd0                 call eax
// 0080fc87  e929020000           jmp 0x80feb5
// 0080fc8c  8b5d2c               mov ebx, dword ptr [ebp + 0x2c]
// 0080fc8f  ffd0                 call eax
// 0080fc91  8bf8                 mov edi, eax
// 0080fc93  897c2420             mov dword ptr [esp + 0x20], edi
// 0080fc97  8b17                 mov edx, dword ptr [edi]
// 0080fc99  8b4204               mov eax, dword ptr [edx + 4]
// 0080fc9c  6a01                 push 1
// 0080fc9e  53                   push ebx
// 0080fc9f  8bcf                 mov ecx, edi
// 0080fca1  c644243c02           mov byte ptr [esp + 0x3c], 2
// 0080fca6  ffd0                 call eax
// 0080fca8  89442440             mov dword ptr [esp + 0x40], eax
// 0080fcac  8b452c               mov eax, dword ptr [ebp + 0x2c]
// 0080fcaf  f7d8                 neg eax
// 0080fcb1  1bc0                 sbb eax, eax
// 0080fcb3  8944243c             mov dword ptr [esp + 0x3c], eax
// 0080fcb7  746f                 je 0x80fd28
// 0080fcb9  83c520               add ebp, 0x20
// 0080fcbc  b303                 mov bl, 3
// 0080fcbe  8bff                 mov edi, edi
// 0080fcc0  8d4c2418             lea ecx, [esp + 0x18]
// 0080fcc4  51                   push ecx
// 0080fcc5  8d542420             lea edx, [esp + 0x20]
// 0080fcc9  52                   push edx
// 0080fcca  8d442444             lea eax, [esp + 0x44]
// 0080fcce  50                   push eax
// 0080fccf  8bcd                 mov ecx, ebp
// 0080fcd1  e84a9bffff           call 0x809820
// 0080fcd6  8b17                 mov edx, dword ptr [edi]
// 0080fcd8  8b5208               mov edx, dword ptr [edx + 8]
// 0080fcdb  8d442440             lea eax, [esp + 0x40]
// 0080fcdf  50                   push eax
// 0080fce0  8bcf                 mov ecx, edi
// 0080fce2  ffd2                 call edx
// 0080fce4  8bf0                 mov esi, eax
// 0080fce6  89742424             mov dword ptr [esp + 0x24], esi
// 0080fcea  8d44241c             lea eax, [esp + 0x1c]
// 0080fcee  50                   push eax
// 0080fcef  689c589b00           push 0x9b589c
// 0080fcf4  56                   push esi
// 0080fcf5  885c2440             mov byte ptr [esp + 0x40], bl
// 0080fcf9  e8d20c0400           call 0x8509d0
// 0080fcfe  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 0080fd02  51                   push ecx
// 0080fd03  6884b09b00           push 0x9bb084
// 0080fd08  56                   push esi
// 0080fd09  e8020f0400           call 0x850c10
// 0080fd0e  83c418               add esp, 0x18
// 0080fd11  c644243402           mov byte ptr [esp + 0x34], 2
// 0080fd16  85f6                 test esi, esi
// 0080fd18  7407                 je 0x80fd21
// 0080fd1a  8bce                 mov ecx, esi
// 0080fd1c  e8bb40feff           call 0x7f3ddc
// 0080fd21  837c243c00           cmp dword ptr [esp + 0x3c], 0
// 0080fd26  7598                 jne 0x80fcc0
// 0080fd28  8b17                 mov edx, dword ptr [edi]
// 0080fd2a  8b02                 mov eax, dword ptr [edx]
// 0080fd2c  6a01                 push 1
// 0080fd2e  8bcf                 mov ecx, edi
// 0080fd30  c644243800           mov byte ptr [esp + 0x38], 0
// 0080fd35  ffd0                 call eax
// 0080fd37  e979010000           jmp 0x80feb5
// 0080fd3c  8d4c2418             lea ecx, [esp + 0x18]
// 0080fd40  51                   push ecx
// 0080fd41  6880329f00           push 0x9f3280
// 0080fd46  56                   push esi
// 0080fd47  e8740d0400           call 0x850ac0
// 0080fd4c  83c410               add esp, 0x10
// 0080fd4f  688c329f00           push 0x9f328c
// 0080fd54  8d4c2418             lea ecx, [esp + 0x18]
// 0080fd58  ff1584de9800         call dword ptr [0x98de84]
// 0080fd5e  85c0                 test eax, eax
// 0080fd60  7409                 je 0x80fd6b
// 0080fd62  6a00                 push 0
// 0080fd64  6a06                 push 6
// 0080fd66  e86546feff           call 0x7f43d0
// 0080fd6b  8d542440             lea edx, [esp + 0x40]
// 0080fd6f  52                   push edx
// 0080fd70  8d6f28               lea ebp, [edi + 0x28]
// 0080fd73  53                   push ebx
// 0080fd74  8bcd                 mov ecx, ebp
// 0080fd76  e805ccffff           call 0x80c980
// 0080fd7b  85c0                 test eax, eax
// 0080fd7d  740b                 je 0x80fd8a
// 0080fd7f  8b4c2440             mov ecx, dword ptr [esp + 0x40]
// 0080fd83  e8f8c9ffff           call 0x80c780
// 0080fd88  eb39                 jmp 0x80fdc3
// 0080fd8a  6a44                 push 0x44
// 0080fd8c  e8cf3afeff           call 0x7f3860
// 0080fd91  83c404               add esp, 4
// 0080fd94  89442440             mov dword ptr [esp + 0x40], eax
// 0080fd98  c644243404           mov byte ptr [esp + 0x34], 4
// 0080fd9d  85c0                 test eax, eax
// 0080fd9f  740d                 je 0x80fdae
// 0080fda1  57                   push edi
// 0080fda2  53                   push ebx
// 0080fda3  8bc8                 mov ecx, eax
// 0080fda5  e856c9ffff           call 0x80c700
// 0080fdaa  8bf8                 mov edi, eax
// 0080fdac  eb02                 jmp 0x80fdb0
// 0080fdae  33ff                 xor edi, edi
// 0080fdb0  53                   push ebx
// 0080fdb1  8bcd                 mov ecx, ebp
// 0080fdb3  c644243800           mov byte ptr [esp + 0x38], 0
// 0080fdb8  897c2444             mov dword ptr [esp + 0x44], edi
// 0080fdbc  e8bf430800           call 0x894180
// 0080fdc1  8938                 mov dword ptr [eax], edi
// 0080fdc3  8b06                 mov eax, dword ptr [esi]
// 0080fdc5  8b9094000000         mov edx, dword ptr [eax + 0x94]
// 0080fdcb  6814ce9d00           push 0x9dce14
// 0080fdd0  8bce                 mov ecx, esi
// 0080fdd2  ffd2                 call edx
// 0080fdd4  8be8                 mov ebp, eax
// 0080fdd6  896c2424             mov dword ptr [esp + 0x24], ebp
// 0080fdda  8b4500               mov eax, dword ptr [ebp]
// 0080fddd  8b5004               mov edx, dword ptr [eax + 4]
// 0080fde0  6a01                 push 1
// 0080fde2  6a00                 push 0
// 0080fde4  8bcd                 mov ecx, ebp
// 0080fde6  c644243c05           mov byte ptr [esp + 0x3c], 5
// 0080fdeb  ffd2                 call edx
// 0080fded  8944241c             mov dword ptr [esp + 0x1c], eax
// 0080fdf1  85c0                 test eax, eax
// 0080fdf3  0f84ac000000         je 0x80fea5
// 0080fdf9  b306                 mov bl, 6
// 0080fdfb  8b4500               mov eax, dword ptr [ebp]
// 0080fdfe  8b5008               mov edx, dword ptr [eax + 8]
// 0080fe01  8d4c241c             lea ecx, [esp + 0x1c]
// 0080fe05  51                   push ecx
// 0080fe06  8bcd                 mov ecx, ebp
// 0080fe08  ffd2                 call edx
// 0080fe0a  8bf0                 mov esi, eax
// 0080fe0c  89742420             mov dword ptr [esp + 0x20], esi
// 0080fe10  8d442418             lea eax, [esp + 0x18]
// 0080fe14  50                   push eax
// 0080fe15  689c589b00           push 0x9b589c
// 0080fe1a  56                   push esi
// 0080fe1b  885c2440             mov byte ptr [esp + 0x40], bl
// 0080fe1f  c744242410000000     mov dword ptr [esp + 0x24], 0x10
// 0080fe27  e8a40b0400           call 0x8509d0
// 0080fe2c  6858010000           push 0x158
// 0080fe31  e82a3afeff           call 0x7f3860
// 0080fe36  83c410               add esp, 0x10
// 0080fe39  89442428             mov dword ptr [esp + 0x28], eax
// 0080fe3d  c644243407           mov byte ptr [esp + 0x34], 7
// 0080fe42  85c0                 test eax, eax
// 0080fe44  741c                 je 0x80fe62
// 0080fe46  8b4c2440             mov ecx, dword ptr [esp + 0x40]
// 0080fe4a  8b542418             mov edx, dword ptr [esp + 0x18]
// 0080fe4e  51                   push ecx
// 0080fe4f  8b4c2440             mov ecx, dword ptr [esp + 0x40]
// 0080fe53  6a0f                 push 0xf
// 0080fe55  52                   push edx
// 0080fe56  51                   push ecx
// 0080fe57  8bc8                 mov ecx, eax
// 0080fe59  e862d2ffff           call 0x80d0c0
// 0080fe5e  8bf8                 mov edi, eax
// 0080fe60  eb02                 jmp 0x80fe64
// 0080fe62  33ff                 xor edi, edi
// 0080fe64  57                   push edi
// 0080fe65  6884b09b00           push 0x9bb084
// 0080fe6a  56                   push esi
// 0080fe6b  885c2440             mov byte ptr [esp + 0x40], bl
// 0080fe6f  e89c0d0400           call 0x850c10
// 0080fe74  8b542424             mov edx, dword ptr [esp + 0x24]
// 0080fe78  8b4c244c             mov ecx, dword ptr [esp + 0x4c]
// 0080fe7c  83c40c               add esp, 0xc
// 0080fe7f  52                   push edx
// 0080fe80  83c120               add ecx, 0x20
// 0080fe83  e8f8420800           call 0x894180
// 0080fe88  8938                 mov dword ptr [eax], edi
// 0080fe8a  c644243405           mov byte ptr [esp + 0x34], 5
// 0080fe8f  85f6                 test esi, esi
// 0080fe91  7407                 je 0x80fe9a
// 0080fe93  8bce                 mov ecx, esi
// 0080fe95  e8423ffeff           call 0x7f3ddc
// 0080fe9a  837c241c00           cmp dword ptr [esp + 0x1c], 0
// 0080fe9f  0f8556ffffff         jne 0x80fdfb
// 0080fea5  8b4500               mov eax, dword ptr [ebp]
// 0080fea8  8b10                 mov edx, dword ptr [eax]
// 0080feaa  6a01                 push 1
// 0080feac  8bcd                 mov ecx, ebp
// 0080feae  c644243800           mov byte ptr [esp + 0x38], 0
// 0080feb3  ffd2                 call edx
// 0080feb5  8d4c2414             lea ecx, [esp + 0x14]
// 0080feb9  ff15c0de9800         call dword ptr [0x98dec0]
// 0080febf  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 0080fec3  64890d00000000       mov dword ptr fs:[0], ecx
// 0080feca  59                   pop ecx
// 0080fecb  5f                   pop edi
// 0080fecc  5e                   pop esi
// 0080fecd  5d                   pop ebp
// 0080fece  5b                   pop ebx
// 0080fecf  83c424               add esp, 0x24
// 0080fed2  c20800               ret 8
// copied from an identical function in another client (function ?DoPropExchange@CXTPImageManager@@QAEXIPAVCXTPPropExchange@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc-string-calls Source\Common\XTPImageManager.cpp