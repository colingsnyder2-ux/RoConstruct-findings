// roc 2009-12 008f4b40  unit: CXTCaptionButtonTheme  size: 614 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008f4b40
//
// 008f4b40  6aff                 push -1
// 008f4b42  68096d9600           push 0x966d09
// 008f4b47  64a100000000         mov eax, dword ptr fs:[0]
// 008f4b4d  50                   push eax
// 008f4b4e  83ec1c               sub esp, 0x1c
// 008f4b51  53                   push ebx
// 008f4b52  55                   push ebp
// 008f4b53  56                   push esi
// 008f4b54  57                   push edi
// 008f4b55  a10052b600           mov eax, dword ptr [0xb65200]
// 008f4b5a  33c4                 xor eax, esp
// 008f4b5c  50                   push eax
// 008f4b5d  8d442430             lea eax, [esp + 0x30]
// 008f4b61  64a300000000         mov dword ptr fs:[0], eax
// 008f4b67  8be9                 mov ebp, ecx
// 008f4b69  8d4c2414             lea ecx, [esp + 0x14]
// 008f4b6d  ff1574de9800         call dword ptr [0x98de74]
// 008f4b73  8b742454             mov esi, dword ptr [esp + 0x54]
// 008f4b77  8d442414             lea eax, [esp + 0x14]
// 008f4b7b  50                   push eax
// 008f4b7c  8bce                 mov ecx, esi
// 008f4b7e  c744243c00000000     mov dword ptr [esp + 0x3c], 0
// 008f4b86  e8bdf2efff           call 0x7f3e48
// 008f4b8b  e81087f5ff           call 0x84d2a0
// 008f4b90  8d4c2414             lea ecx, [esp + 0x14]
// 008f4b94  51                   push ecx
// 008f4b95  e89657f5ff           call 0x84a330
// 008f4b9a  83c404               add esp, 4
// 008f4b9d  8d542418             lea edx, [esp + 0x18]
// 008f4ba1  52                   push edx
// 008f4ba2  8d4c2418             lea ecx, [esp + 0x18]
// 008f4ba6  ff15b4dd9800         call dword ptr [0x98ddb4]
// 008f4bac  50                   push eax
// 008f4bad  8d4c241c             lea ecx, [esp + 0x1c]
// 008f4bb1  ff1580de9800         call dword ptr [0x98de80]
// 008f4bb7  50                   push eax
// 008f4bb8  8b442450             mov eax, dword ptr [esp + 0x50]
// 008f4bbc  8b4808               mov ecx, dword ptr [eax + 8]
// 008f4bbf  51                   push ecx
// 008f4bc0  ff156cb19800         call dword ptr [0x98b16c]
// 008f4bc6  8b7c244c             mov edi, dword ptr [esp + 0x4c]
// 008f4bca  8b17                 mov edx, dword ptr [edi]
// 008f4bcc  8b5c2440             mov ebx, dword ptr [esp + 0x40]
// 008f4bd0  8913                 mov dword ptr [ebx], edx
// 008f4bd2  8b4704               mov eax, dword ptr [edi + 4]
// 008f4bd5  8bce                 mov ecx, esi
// 008f4bd7  894304               mov dword ptr [ebx + 4], eax
// 008f4bda  e893180300           call 0x926472
// 008f4bdf  837e7800             cmp dword ptr [esi + 0x78], 0
// 008f4be3  89442454             mov dword ptr [esp + 0x54], eax
// 008f4be7  7418                 je 0x8f4c01
// 008f4be9  8d4c2418             lea ecx, [esp + 0x18]
// 008f4bed  51                   push ecx
// 008f4bee  8bce                 mov ecx, esi
// 008f4bf0  e82b12ffff           call 0x8e5e20
// 008f4bf5  8b10                 mov edx, dword ptr [eax]
// 008f4bf7  8913                 mov dword ptr [ebx], edx
// 008f4bf9  8b4004               mov eax, dword ptr [eax + 4]
// 008f4bfc  e980010000           jmp 0x8f4d81
// 008f4c01  8b4d00               mov ecx, dword ptr [ebp]
// 008f4c04  8d542420             lea edx, [esp + 0x20]
// 008f4c08  894c2444             mov dword ptr [esp + 0x44], ecx
// 008f4c0c  52                   push edx
// 008f4c0d  8bce                 mov ecx, esi
// 008f4c0f  e8cc11ffff           call 0x8e5de0
// 008f4c14  8b4804               mov ecx, dword ptr [eax + 4]
// 008f4c17  8b10                 mov edx, dword ptr [eax]
// 008f4c19  8b442444             mov eax, dword ptr [esp + 0x44]
// 008f4c1d  56                   push esi
// 008f4c1e  51                   push ecx
// 008f4c1f  52                   push edx
// 008f4c20  8b5040               mov edx, dword ptr [eax + 0x40]
// 008f4c23  53                   push ebx
// 008f4c24  8bcd                 mov ecx, ebp
// 008f4c26  ffd2                 call edx
// 008f4c28  8b466c               mov eax, dword ptr [esi + 0x6c]
// 008f4c2b  8903                 mov dword ptr [ebx], eax
// 008f4c2d  8b16                 mov edx, dword ptr [esi]
// 008f4c2f  8b8268010000         mov eax, dword ptr [edx + 0x168]
// 008f4c35  8bce                 mov ecx, esi
// 008f4c37  ffd0                 call eax
// 008f4c39  8d4c2414             lea ecx, [esp + 0x14]
// 008f4c3d  a804                 test al, 4
// 008f4c3f  0f84af000000         je 0x8f4cf4
// 008f4c45  ff15bcdd9800         call dword ptr [0x98ddbc]
// 008f4c4b  84c0                 test al, al
// 008f4c4d  751a                 jne 0x8f4c69
// 008f4c4f  8b4670               mov eax, dword ptr [esi + 0x70]
// 008f4c52  99                   cdq 
// 008f4c53  2bc2                 sub eax, edx
// 008f4c55  8bc8                 mov ecx, eax
// 008f4c57  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 008f4c5b  99                   cdq 
// 008f4c5c  2bc2                 sub eax, edx
// 008f4c5e  d1f8                 sar eax, 1
// 008f4c60  d1f9                 sar ecx, 1
// 008f4c62  f7d8                 neg eax
// 008f4c64  2bc1                 sub eax, ecx
// 008f4c66  014304               add dword ptr [ebx + 4], eax
// 008f4c69  8bce                 mov ecx, esi
// 008f4c6b  e802180300           call 0x926472
// 008f4c70  2500030000           and eax, 0x300
// 008f4c75  3d00010000           cmp eax, 0x100
// 008f4c7a  0f8404010000         je 0x8f4d84
// 008f4c80  8bce                 mov ecx, esi
// 008f4c82  3d00020000           cmp eax, 0x200
// 008f4c87  7450                 je 0x8f4cd9
// 008f4c89  8b6f08               mov ebp, dword ptr [edi + 8]
// 008f4c8c  2b2f                 sub ebp, dword ptr [edi]
// 008f4c8e  8d542420             lea edx, [esp + 0x20]
// 008f4c92  52                   push edx
// 008f4c93  e84811ffff           call 0x8e5de0
// 008f4c98  8bc8                 mov ecx, eax
// 008f4c9a  8bc5                 mov eax, ebp
// 008f4c9c  2b01                 sub eax, dword ptr [ecx]
// 008f4c9e  99                   cdq 
// 008f4c9f  2bc2                 sub eax, edx
// 008f4ca1  d1f8                 sar eax, 1
// 008f4ca3  790d                 jns 0x8f4cb2
// 008f4ca5  8b0f                 mov ecx, dword ptr [edi]
// 008f4ca7  33c0                 xor eax, eax
// 008f4ca9  03c8                 add ecx, eax
// 008f4cab  890b                 mov dword ptr [ebx], ecx
// 008f4cad  e9d2000000           jmp 0x8f4d84
// 008f4cb2  8b6f08               mov ebp, dword ptr [edi + 8]
// 008f4cb5  2b2f                 sub ebp, dword ptr [edi]
// 008f4cb7  8d442418             lea eax, [esp + 0x18]
// 008f4cbb  50                   push eax
// 008f4cbc  8bce                 mov ecx, esi
// 008f4cbe  e81d11ffff           call 0x8e5de0
// 008f4cc3  8bc8                 mov ecx, eax
// 008f4cc5  8bc5                 mov eax, ebp
// 008f4cc7  2b01                 sub eax, dword ptr [ecx]
// 008f4cc9  8b0f                 mov ecx, dword ptr [edi]
// 008f4ccb  99                   cdq 
// 008f4ccc  2bc2                 sub eax, edx
// 008f4cce  d1f8                 sar eax, 1
// 008f4cd0  03c8                 add ecx, eax
// 008f4cd2  890b                 mov dword ptr [ebx], ecx
// 008f4cd4  e9ab000000           jmp 0x8f4d84
// 008f4cd9  8b6e6c               mov ebp, dword ptr [esi + 0x6c]
// 008f4cdc  8d542428             lea edx, [esp + 0x28]
// 008f4ce0  52                   push edx
// 008f4ce1  e8fa10ffff           call 0x8e5de0
// 008f4ce6  8b4f08               mov ecx, dword ptr [edi + 8]
// 008f4ce9  2b08                 sub ecx, dword ptr [eax]
// 008f4ceb  2bcd                 sub ecx, ebp
// 008f4ced  890b                 mov dword ptr [ebx], ecx
// 008f4cef  e990000000           jmp 0x8f4d84
// 008f4cf4  ff15bcdd9800         call dword ptr [0x98ddbc]
// 008f4cfa  84c0                 test al, al
// 008f4cfc  0f8482000000         je 0x8f4d84
// 008f4d02  8b442454             mov eax, dword ptr [esp + 0x54]
// 008f4d06  8bd0                 mov edx, eax
// 008f4d08  81e200030000         and edx, 0x300
// 008f4d0e  81fa00030000         cmp edx, 0x300
// 008f4d14  7532                 jne 0x8f4d48
// 008f4d16  8b6f08               mov ebp, dword ptr [edi + 8]
// 008f4d19  2b2f                 sub ebp, dword ptr [edi]
// 008f4d1b  8d442428             lea eax, [esp + 0x28]
// 008f4d1f  50                   push eax
// 008f4d20  8bce                 mov ecx, esi
// 008f4d22  e8b910ffff           call 0x8e5de0
// 008f4d27  3b28                 cmp ebp, dword ptr [eax]
// 008f4d29  7c19                 jl 0x8f4d44
// 008f4d2b  8d4c2428             lea ecx, [esp + 0x28]
// 008f4d2f  51                   push ecx
// 008f4d30  8bce                 mov ecx, esi
// 008f4d32  e8a910ffff           call 0x8e5de0
// 008f4d37  8bc8                 mov ecx, eax
// 008f4d39  8bc5                 mov eax, ebp
// 008f4d3b  2b01                 sub eax, dword ptr [ecx]
// 008f4d3d  99                   cdq 
// 008f4d3e  2bc2                 sub eax, edx
// 008f4d40  d1f8                 sar eax, 1
// 008f4d42  8903                 mov dword ptr [ebx], eax
// 008f4d44  8b442454             mov eax, dword ptr [esp + 0x54]
// 008f4d48  25000c0000           and eax, 0xc00
// 008f4d4d  3d000c0000           cmp eax, 0xc00
// 008f4d52  7530                 jne 0x8f4d84
// 008f4d54  8b6f0c               mov ebp, dword ptr [edi + 0xc]
// 008f4d57  2b6f04               sub ebp, dword ptr [edi + 4]
// 008f4d5a  8d542428             lea edx, [esp + 0x28]
// 008f4d5e  52                   push edx
// 008f4d5f  8bce                 mov ecx, esi
// 008f4d61  e87a10ffff           call 0x8e5de0
// 008f4d66  3b6804               cmp ebp, dword ptr [eax + 4]
// 008f4d69  7c19                 jl 0x8f4d84
// 008f4d6b  8d442428             lea eax, [esp + 0x28]
// 008f4d6f  50                   push eax
// 008f4d70  8bce                 mov ecx, esi
// 008f4d72  e86910ffff           call 0x8e5de0
// 008f4d77  2b6804               sub ebp, dword ptr [eax + 4]
// 008f4d7a  8bc5                 mov eax, ebp
// 008f4d7c  99                   cdq 
// 008f4d7d  2bc2                 sub eax, edx
// 008f4d7f  d1f8                 sar eax, 1
// 008f4d81  894304               mov dword ptr [ebx + 4], eax
// 008f4d84  8d4c2414             lea ecx, [esp + 0x14]
// 008f4d88  ff15c0de9800         call dword ptr [0x98dec0]
// 008f4d8e  8bc3                 mov eax, ebx
// 008f4d90  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 008f4d94  64890d00000000       mov dword ptr fs:[0], ecx
// 008f4d9b  59                   pop ecx
// 008f4d9c  5f                   pop edi
// 008f4d9d  5e                   pop esi
// 008f4d9e  5d                   pop ebp
// 008f4d9f  5b                   pop ebx
// 008f4da0  83c428               add esp, 0x28
// 008f4da3  c21800               ret 0x18
// copied from an identical function in another client (function ?CalculateImagePosition@CXTButtonTheme@@MAE?AVCPoint@@PAVCDC@@IAAVCRect@@_NPAVCXTButton@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\Controls\XTButtonTheme.cpp