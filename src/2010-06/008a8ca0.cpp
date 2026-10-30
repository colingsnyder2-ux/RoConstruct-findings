// roc 2010-06 008a8ca0  unit: CXTCaptionButtonTheme  size: 614 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 008a8ca0
//
// 008a8ca0  6aff                 push -1
// 008a8ca2  6839cc9b00           push 0x9bcc39
// 008a8ca7  64a100000000         mov eax, dword ptr fs:[0]
// 008a8cad  50                   push eax
// 008a8cae  83ec1c               sub esp, 0x1c
// 008a8cb1  53                   push ebx
// 008a8cb2  55                   push ebp
// 008a8cb3  56                   push esi
// 008a8cb4  57                   push edi
// 008a8cb5  a1b05fbe00           mov eax, dword ptr [0xbe5fb0]
// 008a8cba  33c4                 xor eax, esp
// 008a8cbc  50                   push eax
// 008a8cbd  8d442430             lea eax, [esp + 0x30]
// 008a8cc1  64a300000000         mov dword ptr fs:[0], eax
// 008a8cc7  8be9                 mov ebp, ecx
// 008a8cc9  8d4c2414             lea ecx, [esp + 0x14]
// 008a8ccd  ff15a4ce9e00         call dword ptr [0x9ecea4]
// 008a8cd3  8b742454             mov esi, dword ptr [esp + 0x54]
// 008a8cd7  8d442414             lea eax, [esp + 0x14]
// 008a8cdb  50                   push eax
// 008a8cdc  8bce                 mov ecx, esi
// 008a8cde  c744243c00000000     mov dword ptr [esp + 0x3c], 0
// 008a8ce6  e89df2efff           call 0x7a7f88
// 008a8ceb  e81086f5ff           call 0x801300
// 008a8cf0  8d4c2414             lea ecx, [esp + 0x14]
// 008a8cf4  51                   push ecx
// 008a8cf5  e86656f5ff           call 0x7fe360
// 008a8cfa  83c404               add esp, 4
// 008a8cfd  8d542418             lea edx, [esp + 0x18]
// 008a8d01  52                   push edx
// 008a8d02  8d4c2418             lea ecx, [esp + 0x18]
// 008a8d06  ff15e4cd9e00         call dword ptr [0x9ecde4]
// 008a8d0c  50                   push eax
// 008a8d0d  8d4c241c             lea ecx, [esp + 0x1c]
// 008a8d11  ff15b0ce9e00         call dword ptr [0x9eceb0]
// 008a8d17  50                   push eax
// 008a8d18  8b442450             mov eax, dword ptr [esp + 0x50]
// 008a8d1c  8b4808               mov ecx, dword ptr [eax + 8]
// 008a8d1f  51                   push ecx
// 008a8d20  ff1594a19e00         call dword ptr [0x9ea194]
// 008a8d26  8b7c244c             mov edi, dword ptr [esp + 0x4c]
// 008a8d2a  8b17                 mov edx, dword ptr [edi]
// 008a8d2c  8b5c2440             mov ebx, dword ptr [esp + 0x40]
// 008a8d30  8913                 mov dword ptr [ebx], edx
// 008a8d32  8b4704               mov eax, dword ptr [edi + 4]
// 008a8d35  8bce                 mov ecx, esi
// 008a8d37  894304               mov dword ptr [ebx + 4], eax
// 008a8d3a  e89f400d00           call 0x97cdde
// 008a8d3f  837e7800             cmp dword ptr [esi + 0x78], 0
// 008a8d43  89442454             mov dword ptr [esp + 0x54], eax
// 008a8d47  7418                 je 0x8a8d61
// 008a8d49  8d4c2418             lea ecx, [esp + 0x18]
// 008a8d4d  51                   push ecx
// 008a8d4e  8bce                 mov ecx, esi
// 008a8d50  e8eb13ffff           call 0x89a140
// 008a8d55  8b10                 mov edx, dword ptr [eax]
// 008a8d57  8913                 mov dword ptr [ebx], edx
// 008a8d59  8b4004               mov eax, dword ptr [eax + 4]
// 008a8d5c  e980010000           jmp 0x8a8ee1
// 008a8d61  8b4d00               mov ecx, dword ptr [ebp]
// 008a8d64  8d542420             lea edx, [esp + 0x20]
// 008a8d68  894c2444             mov dword ptr [esp + 0x44], ecx
// 008a8d6c  52                   push edx
// 008a8d6d  8bce                 mov ecx, esi
// 008a8d6f  e88c13ffff           call 0x89a100
// 008a8d74  8b4804               mov ecx, dword ptr [eax + 4]
// 008a8d77  8b10                 mov edx, dword ptr [eax]
// 008a8d79  8b442444             mov eax, dword ptr [esp + 0x44]
// 008a8d7d  56                   push esi
// 008a8d7e  51                   push ecx
// 008a8d7f  52                   push edx
// 008a8d80  8b5040               mov edx, dword ptr [eax + 0x40]
// 008a8d83  53                   push ebx
// 008a8d84  8bcd                 mov ecx, ebp
// 008a8d86  ffd2                 call edx
// 008a8d88  8b466c               mov eax, dword ptr [esi + 0x6c]
// 008a8d8b  8903                 mov dword ptr [ebx], eax
// 008a8d8d  8b16                 mov edx, dword ptr [esi]
// 008a8d8f  8b8268010000         mov eax, dword ptr [edx + 0x168]
// 008a8d95  8bce                 mov ecx, esi
// 008a8d97  ffd0                 call eax
// 008a8d99  8d4c2414             lea ecx, [esp + 0x14]
// 008a8d9d  a804                 test al, 4
// 008a8d9f  0f84af000000         je 0x8a8e54
// 008a8da5  ff15eccd9e00         call dword ptr [0x9ecdec]
// 008a8dab  84c0                 test al, al
// 008a8dad  751a                 jne 0x8a8dc9
// 008a8daf  8b4670               mov eax, dword ptr [esi + 0x70]
// 008a8db2  99                   cdq 
// 008a8db3  2bc2                 sub eax, edx
// 008a8db5  8bc8                 mov ecx, eax
// 008a8db7  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 008a8dbb  99                   cdq 
// 008a8dbc  2bc2                 sub eax, edx
// 008a8dbe  d1f8                 sar eax, 1
// 008a8dc0  d1f9                 sar ecx, 1
// 008a8dc2  f7d8                 neg eax
// 008a8dc4  2bc1                 sub eax, ecx
// 008a8dc6  014304               add dword ptr [ebx + 4], eax
// 008a8dc9  8bce                 mov ecx, esi
// 008a8dcb  e80e400d00           call 0x97cdde
// 008a8dd0  2500030000           and eax, 0x300
// 008a8dd5  3d00010000           cmp eax, 0x100
// 008a8dda  0f8404010000         je 0x8a8ee4
// 008a8de0  8bce                 mov ecx, esi
// 008a8de2  3d00020000           cmp eax, 0x200
// 008a8de7  7450                 je 0x8a8e39
// 008a8de9  8b6f08               mov ebp, dword ptr [edi + 8]
// 008a8dec  2b2f                 sub ebp, dword ptr [edi]
// 008a8dee  8d542420             lea edx, [esp + 0x20]
// 008a8df2  52                   push edx
// 008a8df3  e80813ffff           call 0x89a100
// 008a8df8  8bc8                 mov ecx, eax
// 008a8dfa  8bc5                 mov eax, ebp
// 008a8dfc  2b01                 sub eax, dword ptr [ecx]
// 008a8dfe  99                   cdq 
// 008a8dff  2bc2                 sub eax, edx
// 008a8e01  d1f8                 sar eax, 1
// 008a8e03  790d                 jns 0x8a8e12
// 008a8e05  8b0f                 mov ecx, dword ptr [edi]
// 008a8e07  33c0                 xor eax, eax
// 008a8e09  03c8                 add ecx, eax
// 008a8e0b  890b                 mov dword ptr [ebx], ecx
// 008a8e0d  e9d2000000           jmp 0x8a8ee4
// 008a8e12  8b6f08               mov ebp, dword ptr [edi + 8]
// 008a8e15  2b2f                 sub ebp, dword ptr [edi]
// 008a8e17  8d442418             lea eax, [esp + 0x18]
// 008a8e1b  50                   push eax
// 008a8e1c  8bce                 mov ecx, esi
// 008a8e1e  e8dd12ffff           call 0x89a100
// 008a8e23  8bc8                 mov ecx, eax
// 008a8e25  8bc5                 mov eax, ebp
// 008a8e27  2b01                 sub eax, dword ptr [ecx]
// 008a8e29  8b0f                 mov ecx, dword ptr [edi]
// 008a8e2b  99                   cdq 
// 008a8e2c  2bc2                 sub eax, edx
// 008a8e2e  d1f8                 sar eax, 1
// 008a8e30  03c8                 add ecx, eax
// 008a8e32  890b                 mov dword ptr [ebx], ecx
// 008a8e34  e9ab000000           jmp 0x8a8ee4
// 008a8e39  8b6e6c               mov ebp, dword ptr [esi + 0x6c]
// 008a8e3c  8d542428             lea edx, [esp + 0x28]
// 008a8e40  52                   push edx
// 008a8e41  e8ba12ffff           call 0x89a100
// 008a8e46  8b4f08               mov ecx, dword ptr [edi + 8]
// 008a8e49  2b08                 sub ecx, dword ptr [eax]
// 008a8e4b  2bcd                 sub ecx, ebp
// 008a8e4d  890b                 mov dword ptr [ebx], ecx
// 008a8e4f  e990000000           jmp 0x8a8ee4
// 008a8e54  ff15eccd9e00         call dword ptr [0x9ecdec]
// 008a8e5a  84c0                 test al, al
// 008a8e5c  0f8482000000         je 0x8a8ee4
// 008a8e62  8b442454             mov eax, dword ptr [esp + 0x54]
// 008a8e66  8bd0                 mov edx, eax
// 008a8e68  81e200030000         and edx, 0x300
// 008a8e6e  81fa00030000         cmp edx, 0x300
// 008a8e74  7532                 jne 0x8a8ea8
// 008a8e76  8b6f08               mov ebp, dword ptr [edi + 8]
// 008a8e79  2b2f                 sub ebp, dword ptr [edi]
// 008a8e7b  8d442428             lea eax, [esp + 0x28]
// 008a8e7f  50                   push eax
// 008a8e80  8bce                 mov ecx, esi
// 008a8e82  e87912ffff           call 0x89a100
// 008a8e87  3b28                 cmp ebp, dword ptr [eax]
// 008a8e89  7c19                 jl 0x8a8ea4
// 008a8e8b  8d4c2428             lea ecx, [esp + 0x28]
// 008a8e8f  51                   push ecx
// 008a8e90  8bce                 mov ecx, esi
// 008a8e92  e86912ffff           call 0x89a100
// 008a8e97  8bc8                 mov ecx, eax
// 008a8e99  8bc5                 mov eax, ebp
// 008a8e9b  2b01                 sub eax, dword ptr [ecx]
// 008a8e9d  99                   cdq 
// 008a8e9e  2bc2                 sub eax, edx
// 008a8ea0  d1f8                 sar eax, 1
// 008a8ea2  8903                 mov dword ptr [ebx], eax
// 008a8ea4  8b442454             mov eax, dword ptr [esp + 0x54]
// 008a8ea8  25000c0000           and eax, 0xc00
// 008a8ead  3d000c0000           cmp eax, 0xc00
// 008a8eb2  7530                 jne 0x8a8ee4
// 008a8eb4  8b6f0c               mov ebp, dword ptr [edi + 0xc]
// 008a8eb7  2b6f04               sub ebp, dword ptr [edi + 4]
// 008a8eba  8d542428             lea edx, [esp + 0x28]
// 008a8ebe  52                   push edx
// 008a8ebf  8bce                 mov ecx, esi
// 008a8ec1  e83a12ffff           call 0x89a100
// 008a8ec6  3b6804               cmp ebp, dword ptr [eax + 4]
// 008a8ec9  7c19                 jl 0x8a8ee4
// 008a8ecb  8d442428             lea eax, [esp + 0x28]
// 008a8ecf  50                   push eax
// 008a8ed0  8bce                 mov ecx, esi
// 008a8ed2  e82912ffff           call 0x89a100
// 008a8ed7  2b6804               sub ebp, dword ptr [eax + 4]
// 008a8eda  8bc5                 mov eax, ebp
// 008a8edc  99                   cdq 
// 008a8edd  2bc2                 sub eax, edx
// 008a8edf  d1f8                 sar eax, 1
// 008a8ee1  894304               mov dword ptr [ebx + 4], eax
// 008a8ee4  8d4c2414             lea ecx, [esp + 0x14]
// 008a8ee8  ff15f0ce9e00         call dword ptr [0x9ecef0]
// 008a8eee  8bc3                 mov eax, ebx
// 008a8ef0  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 008a8ef4  64890d00000000       mov dword ptr fs:[0], ecx
// 008a8efb  59                   pop ecx
// 008a8efc  5f                   pop edi
// 008a8efd  5e                   pop esi
// 008a8efe  5d                   pop ebp
// 008a8eff  5b                   pop ebx
// 008a8f00  83c428               add esp, 0x28
// 008a8f03  c21800               ret 0x18
// copied from an identical function in another client (function ?CalculateImagePosition@CXTButtonTheme@@MAE?AVCPoint@@PAVCDC@@IAAVCRect@@_NPAVCXTButton@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\Controls\XTButtonTheme.cpp