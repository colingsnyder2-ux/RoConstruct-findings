// roc 2009-06 00819e60  unit: CXTCaptionButtonTheme  size: 614 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00819e60
//
// 00819e60  6aff                 push -1
// 00819e62  68392b8800           push 0x882b39
// 00819e67  64a100000000         mov eax, dword ptr fs:[0]
// 00819e6d  50                   push eax
// 00819e6e  83ec1c               sub esp, 0x1c
// 00819e71  53                   push ebx
// 00819e72  55                   push ebp
// 00819e73  56                   push esi
// 00819e74  57                   push edi
// 00819e75  a1304fa200           mov eax, dword ptr [0xa24f30]
// 00819e7a  33c4                 xor eax, esp
// 00819e7c  50                   push eax
// 00819e7d  8d442430             lea eax, [esp + 0x30]
// 00819e81  64a300000000         mov dword ptr fs:[0], eax
// 00819e87  8be9                 mov ebp, ecx
// 00819e89  8d4c2414             lea ecx, [esp + 0x14]
// 00819e8d  ff15bcfc8900         call dword ptr [0x89fcbc]
// 00819e93  8b742454             mov esi, dword ptr [esp + 0x54]
// 00819e97  8d442414             lea eax, [esp + 0x14]
// 00819e9b  50                   push eax
// 00819e9c  8bce                 mov ecx, esi
// 00819e9e  c744243c00000000     mov dword ptr [esp + 0x3c], 0
// 00819ea6  e875f1efff           call 0x719020
// 00819eab  e8c086f5ff           call 0x772570
// 00819eb0  8d4c2414             lea ecx, [esp + 0x14]
// 00819eb4  51                   push ecx
// 00819eb5  e87656f5ff           call 0x76f530
// 00819eba  83c404               add esp, 4
// 00819ebd  8d542418             lea edx, [esp + 0x18]
// 00819ec1  52                   push edx
// 00819ec2  8d4c2418             lea ecx, [esp + 0x18]
// 00819ec6  ff1554fb8900         call dword ptr [0x89fb54]
// 00819ecc  50                   push eax
// 00819ecd  8d4c241c             lea ecx, [esp + 0x1c]
// 00819ed1  ff15d0fc8900         call dword ptr [0x89fcd0]
// 00819ed7  50                   push eax
// 00819ed8  8b442450             mov eax, dword ptr [esp + 0x50]
// 00819edc  8b4808               mov ecx, dword ptr [eax + 8]
// 00819edf  51                   push ecx
// 00819ee0  ff1550e18900         call dword ptr [0x89e150]
// 00819ee6  8b7c244c             mov edi, dword ptr [esp + 0x4c]
// 00819eea  8b17                 mov edx, dword ptr [edi]
// 00819eec  8b5c2440             mov ebx, dword ptr [esp + 0x40]
// 00819ef0  8913                 mov dword ptr [ebx], edx
// 00819ef2  8b4704               mov eax, dword ptr [edi + 4]
// 00819ef5  8bce                 mov ecx, esi
// 00819ef7  894304               mov dword ptr [ebx + 4], eax
// 00819efa  e8dd1f0300           call 0x84bedc
// 00819eff  837e7800             cmp dword ptr [esi + 0x78], 0
// 00819f03  89442454             mov dword ptr [esp + 0x54], eax
// 00819f07  7418                 je 0x819f21
// 00819f09  8d4c2418             lea ecx, [esp + 0x18]
// 00819f0d  51                   push ecx
// 00819f0e  8bce                 mov ecx, esi
// 00819f10  e81b14ffff           call 0x80b330
// 00819f15  8b10                 mov edx, dword ptr [eax]
// 00819f17  8913                 mov dword ptr [ebx], edx
// 00819f19  8b4004               mov eax, dword ptr [eax + 4]
// 00819f1c  e980010000           jmp 0x81a0a1
// 00819f21  8b4d00               mov ecx, dword ptr [ebp]
// 00819f24  8d542420             lea edx, [esp + 0x20]
// 00819f28  894c2444             mov dword ptr [esp + 0x44], ecx
// 00819f2c  52                   push edx
// 00819f2d  8bce                 mov ecx, esi
// 00819f2f  e8bc13ffff           call 0x80b2f0
// 00819f34  8b4804               mov ecx, dword ptr [eax + 4]
// 00819f37  8b10                 mov edx, dword ptr [eax]
// 00819f39  8b442444             mov eax, dword ptr [esp + 0x44]
// 00819f3d  56                   push esi
// 00819f3e  51                   push ecx
// 00819f3f  52                   push edx
// 00819f40  8b5040               mov edx, dword ptr [eax + 0x40]
// 00819f43  53                   push ebx
// 00819f44  8bcd                 mov ecx, ebp
// 00819f46  ffd2                 call edx
// 00819f48  8b466c               mov eax, dword ptr [esi + 0x6c]
// 00819f4b  8903                 mov dword ptr [ebx], eax
// 00819f4d  8b16                 mov edx, dword ptr [esi]
// 00819f4f  8b8268010000         mov eax, dword ptr [edx + 0x168]
// 00819f55  8bce                 mov ecx, esi
// 00819f57  ffd0                 call eax
// 00819f59  8d4c2414             lea ecx, [esp + 0x14]
// 00819f5d  a804                 test al, 4
// 00819f5f  0f84af000000         je 0x81a014
// 00819f65  ff155cfb8900         call dword ptr [0x89fb5c]
// 00819f6b  84c0                 test al, al
// 00819f6d  751a                 jne 0x819f89
// 00819f6f  8b4670               mov eax, dword ptr [esi + 0x70]
// 00819f72  99                   cdq 
// 00819f73  2bc2                 sub eax, edx
// 00819f75  8bc8                 mov ecx, eax
// 00819f77  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 00819f7b  99                   cdq 
// 00819f7c  2bc2                 sub eax, edx
// 00819f7e  d1f8                 sar eax, 1
// 00819f80  d1f9                 sar ecx, 1
// 00819f82  f7d8                 neg eax
// 00819f84  2bc1                 sub eax, ecx
// 00819f86  014304               add dword ptr [ebx + 4], eax
// 00819f89  8bce                 mov ecx, esi
// 00819f8b  e84c1f0300           call 0x84bedc
// 00819f90  2500030000           and eax, 0x300
// 00819f95  3d00010000           cmp eax, 0x100
// 00819f9a  0f8404010000         je 0x81a0a4
// 00819fa0  8bce                 mov ecx, esi
// 00819fa2  3d00020000           cmp eax, 0x200
// 00819fa7  7450                 je 0x819ff9
// 00819fa9  8b6f08               mov ebp, dword ptr [edi + 8]
// 00819fac  2b2f                 sub ebp, dword ptr [edi]
// 00819fae  8d542420             lea edx, [esp + 0x20]
// 00819fb2  52                   push edx
// 00819fb3  e83813ffff           call 0x80b2f0
// 00819fb8  8bc8                 mov ecx, eax
// 00819fba  8bc5                 mov eax, ebp
// 00819fbc  2b01                 sub eax, dword ptr [ecx]
// 00819fbe  99                   cdq 
// 00819fbf  2bc2                 sub eax, edx
// 00819fc1  d1f8                 sar eax, 1
// 00819fc3  790d                 jns 0x819fd2
// 00819fc5  8b0f                 mov ecx, dword ptr [edi]
// 00819fc7  33c0                 xor eax, eax
// 00819fc9  03c8                 add ecx, eax
// 00819fcb  890b                 mov dword ptr [ebx], ecx
// 00819fcd  e9d2000000           jmp 0x81a0a4
// 00819fd2  8b6f08               mov ebp, dword ptr [edi + 8]
// 00819fd5  2b2f                 sub ebp, dword ptr [edi]
// 00819fd7  8d442418             lea eax, [esp + 0x18]
// 00819fdb  50                   push eax
// 00819fdc  8bce                 mov ecx, esi
// 00819fde  e80d13ffff           call 0x80b2f0
// 00819fe3  8bc8                 mov ecx, eax
// 00819fe5  8bc5                 mov eax, ebp
// 00819fe7  2b01                 sub eax, dword ptr [ecx]
// 00819fe9  8b0f                 mov ecx, dword ptr [edi]
// 00819feb  99                   cdq 
// 00819fec  2bc2                 sub eax, edx
// 00819fee  d1f8                 sar eax, 1
// 00819ff0  03c8                 add ecx, eax
// 00819ff2  890b                 mov dword ptr [ebx], ecx
// 00819ff4  e9ab000000           jmp 0x81a0a4
// 00819ff9  8b6e6c               mov ebp, dword ptr [esi + 0x6c]
// 00819ffc  8d542428             lea edx, [esp + 0x28]
// 0081a000  52                   push edx
// 0081a001  e8ea12ffff           call 0x80b2f0
// 0081a006  8b4f08               mov ecx, dword ptr [edi + 8]
// 0081a009  2b08                 sub ecx, dword ptr [eax]
// 0081a00b  2bcd                 sub ecx, ebp
// 0081a00d  890b                 mov dword ptr [ebx], ecx
// 0081a00f  e990000000           jmp 0x81a0a4
// 0081a014  ff155cfb8900         call dword ptr [0x89fb5c]
// 0081a01a  84c0                 test al, al
// 0081a01c  0f8482000000         je 0x81a0a4
// 0081a022  8b442454             mov eax, dword ptr [esp + 0x54]
// 0081a026  8bd0                 mov edx, eax
// 0081a028  81e200030000         and edx, 0x300
// 0081a02e  81fa00030000         cmp edx, 0x300
// 0081a034  7532                 jne 0x81a068
// 0081a036  8b6f08               mov ebp, dword ptr [edi + 8]
// 0081a039  2b2f                 sub ebp, dword ptr [edi]
// 0081a03b  8d442428             lea eax, [esp + 0x28]
// 0081a03f  50                   push eax
// 0081a040  8bce                 mov ecx, esi
// 0081a042  e8a912ffff           call 0x80b2f0
// 0081a047  3b28                 cmp ebp, dword ptr [eax]
// 0081a049  7c19                 jl 0x81a064
// 0081a04b  8d4c2428             lea ecx, [esp + 0x28]
// 0081a04f  51                   push ecx
// 0081a050  8bce                 mov ecx, esi
// 0081a052  e89912ffff           call 0x80b2f0
// 0081a057  8bc8                 mov ecx, eax
// 0081a059  8bc5                 mov eax, ebp
// 0081a05b  2b01                 sub eax, dword ptr [ecx]
// 0081a05d  99                   cdq 
// 0081a05e  2bc2                 sub eax, edx
// 0081a060  d1f8                 sar eax, 1
// 0081a062  8903                 mov dword ptr [ebx], eax
// 0081a064  8b442454             mov eax, dword ptr [esp + 0x54]
// 0081a068  25000c0000           and eax, 0xc00
// 0081a06d  3d000c0000           cmp eax, 0xc00
// 0081a072  7530                 jne 0x81a0a4
// 0081a074  8b6f0c               mov ebp, dword ptr [edi + 0xc]
// 0081a077  2b6f04               sub ebp, dword ptr [edi + 4]
// 0081a07a  8d542428             lea edx, [esp + 0x28]
// 0081a07e  52                   push edx
// 0081a07f  8bce                 mov ecx, esi
// 0081a081  e86a12ffff           call 0x80b2f0
// 0081a086  3b6804               cmp ebp, dword ptr [eax + 4]
// 0081a089  7c19                 jl 0x81a0a4
// 0081a08b  8d442428             lea eax, [esp + 0x28]
// 0081a08f  50                   push eax
// 0081a090  8bce                 mov ecx, esi
// 0081a092  e85912ffff           call 0x80b2f0
// 0081a097  2b6804               sub ebp, dword ptr [eax + 4]
// 0081a09a  8bc5                 mov eax, ebp
// 0081a09c  99                   cdq 
// 0081a09d  2bc2                 sub eax, edx
// 0081a09f  d1f8                 sar eax, 1
// 0081a0a1  894304               mov dword ptr [ebx + 4], eax
// 0081a0a4  8d4c2414             lea ecx, [esp + 0x14]
// 0081a0a8  ff1510fd8900         call dword ptr [0x89fd10]
// 0081a0ae  8bc3                 mov eax, ebx
// 0081a0b0  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 0081a0b4  64890d00000000       mov dword ptr fs:[0], ecx
// 0081a0bb  59                   pop ecx
// 0081a0bc  5f                   pop edi
// 0081a0bd  5e                   pop esi
// 0081a0be  5d                   pop ebp
// 0081a0bf  5b                   pop ebx
// 0081a0c0  83c428               add esp, 0x28
// 0081a0c3  c21800               ret 0x18
// copied from an identical function in another client (function ?CalculateImagePosition@CXTButtonTheme@@MAE?AVCPoint@@PAVCDC@@IAAVCRect@@_NPAVCXTButton@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\Controls\XTButtonTheme.cpp