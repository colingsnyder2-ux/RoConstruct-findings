// roc 2012-06 00a3fc90  unit: CXTPDockingPanePaintManager  size: 583 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a3fc90
//
// 00a3fc90  6aff                 push -1
// 00a3fc92  68a660ae00           push 0xae60a6
// 00a3fc97  64a100000000         mov eax, dword ptr fs:[0]
// 00a3fc9d  50                   push eax
// 00a3fc9e  81ec84010000         sub esp, 0x184
// 00a3fca4  a1d027e000           mov eax, dword ptr [0xe027d0]
// 00a3fca9  33c4                 xor eax, esp
// 00a3fcab  89842480010000       mov dword ptr [esp + 0x180], eax
// 00a3fcb2  53                   push ebx
// 00a3fcb3  55                   push ebp
// 00a3fcb4  56                   push esi
// 00a3fcb5  57                   push edi
// 00a3fcb6  a1d027e000           mov eax, dword ptr [0xe027d0]
// 00a3fcbb  33c4                 xor eax, esp
// 00a3fcbd  50                   push eax
// 00a3fcbe  8d842498010000       lea eax, [esp + 0x198]
// 00a3fcc5  64a300000000         mov dword ptr fs:[0], eax
// 00a3fccb  8bf1                 mov esi, ecx
// 00a3fccd  e85ef7f7ff           call 0x9bf430
// 00a3fcd2  e889dbf7ff           call 0x9bd860
// 00a3fcd7  8bd8                 mov ebx, eax
// 00a3fcd9  33ff                 xor edi, edi
// 00a3fcdb  8daea4000000         lea ebp, [esi + 0xa4]
// 00a3fce1  57                   push edi
// 00a3fce2  8bcb                 mov ecx, ebx
// 00a3fce4  e8f7d2f7ff           call 0x9bcfe0
// 00a3fce9  894500               mov dword ptr [ebp], eax
// 00a3fcec  47                   inc edi
// 00a3fced  83c504               add ebp, 4
// 00a3fcf0  83ff3e               cmp edi, 0x3e
// 00a3fcf3  76ec                 jbe 0xa3fce1
// 00a3fcf5  8b86e4000000         mov eax, dword ptr [esi + 0xe4]
// 00a3fcfb  89463c               mov dword ptr [esi + 0x3c], eax
// 00a3fcfe  8b86e0000000         mov eax, dword ptr [esi + 0xe0]
// 00a3fd04  894648               mov dword ptr [esi + 0x48], eax
// 00a3fd07  e854dbf7ff           call 0x9bd860
// 00a3fd0c  d9057027b600         fld dword ptr [0xb62770]
// 00a3fd12  8b3dd83cb200         mov edi, dword ptr [0xb23cd8]
// 00a3fd18  51                   push ecx
// 00a3fd19  d91c24               fstp dword ptr [esp]
// 00a3fd1c  68cd000000           push 0xcd
// 00a3fd21  6a05                 push 5
// 00a3fd23  8bd8                 mov ebx, eax
// 00a3fd25  ffd7                 call edi
// 00a3fd27  50                   push eax
// 00a3fd28  6a0f                 push 0xf
// 00a3fd2a  ffd7                 call edi
// 00a3fd2c  50                   push eax
// 00a3fd2d  8bcb                 mov ecx, ebx
// 00a3fd2f  e8fcd1f7ff           call 0x9bcf30
// 00a3fd34  50                   push eax
// 00a3fd35  6a0f                 push 0xf
// 00a3fd37  ffd7                 call edi
// 00a3fd39  50                   push eax
// 00a3fd3a  8d4e50               lea ecx, [esi + 0x50]
// 00a3fd3d  e8fecff7ff           call 0x9bcd40
// 00a3fd42  33db                 xor ebx, ebx
// 00a3fd44  399e98000000         cmp dword ptr [esi + 0x98], ebx
// 00a3fd4a  744f                 je 0xa3fd9b
// 00a3fd4c  6850010000           push 0x150
// 00a3fd51  8d442448             lea eax, [esp + 0x48]
// 00a3fd55  53                   push ebx
// 00a3fd56  50                   push eax
// 00a3fd57  c744244c54010000     mov dword ptr [esp + 0x4c], 0x154
// 00a3fd5f  e81036f4ff           call 0x983374
// 00a3fd64  83c40c               add esp, 0xc
// 00a3fd67  53                   push ebx
// 00a3fd68  8d4c2444             lea ecx, [esp + 0x44]
// 00a3fd6c  51                   push ecx
// 00a3fd6d  6854010000           push 0x154
// 00a3fd72  6a29                 push 0x29
// 00a3fd74  ff15543ab200         call dword ptr [0xb23a54]
// 00a3fd7a  395e20               cmp dword ptr [esi + 0x20], ebx
// 00a3fd7d  750b                 jne 0xa3fd8a
// 00a3fd7f  c78424ac00000090010000 mov dword ptr [esp + 0xac], 0x190
// 00a3fd8a  6a01                 push 1
// 00a3fd8c  8d9424a0000000       lea edx, [esp + 0xa0]
// 00a3fd93  52                   push edx
// 00a3fd94  8bce                 mov ecx, esi
// 00a3fd96  e835fdffff           call 0xa3fad0
// 00a3fd9b  8b8e9c000000         mov ecx, dword ptr [esi + 0x9c]
// 00a3fda1  8b01                 mov eax, dword ptr [ecx]
// 00a3fda3  8b506c               mov edx, dword ptr [eax + 0x6c]
// 00a3fda6  ffd2                 call edx
// 00a3fda8  8b8ea0000000         mov ecx, dword ptr [esi + 0xa0]
// 00a3fdae  8b01                 mov eax, dword ptr [ecx]
// 00a3fdb0  8b506c               mov edx, dword ptr [eax + 0x6c]
// 00a3fdb3  ffd2                 call edx
// 00a3fdb5  ff15f43bb200         call dword ptr [0xb23bf4]
// 00a3fdbb  50                   push eax
// 00a3fdbc  e8a528f4ff           call 0x982666
// 00a3fdc1  50                   push eax
// 00a3fdc2  8d4c2420             lea ecx, [esp + 0x20]
// 00a3fdc6  e8d1970500           call 0xa9959c
// 00a3fdcb  8b869c000000         mov eax, dword ptr [esi + 0x9c]
// 00a3fdd1  050c010000           add eax, 0x10c
// 00a3fdd6  50                   push eax
// 00a3fdd7  8d442420             lea eax, [esp + 0x20]
// 00a3fddb  50                   push eax
// 00a3fddc  8d4c2438             lea ecx, [esp + 0x38]
// 00a3fde0  899c24a8010000       mov dword ptr [esp + 0x1a8], ebx
// 00a3fde7  e84457f9ff           call 0x9d5530
// 00a3fdec  8b542424             mov edx, dword ptr [esp + 0x24]
// 00a3fdf0  8b3d4021b200         mov edi, dword ptr [0xb22140]
// 00a3fdf6  8d4c2414             lea ecx, [esp + 0x14]
// 00a3fdfa  51                   push ecx
// 00a3fdfb  6a01                 push 1
// 00a3fdfd  68ecf3b400           push 0xb4f3ec
// 00a3fe02  52                   push edx
// 00a3fe03  c68424b001000001     mov byte ptr [esp + 0x1b0], 1
// 00a3fe0b  ffd7                 call edi
// 00a3fe0d  8b442418             mov eax, dword ptr [esp + 0x18]
// 00a3fe11  83c00a               add eax, 0xa
// 00a3fe14  83f818               cmp eax, 0x18
// 00a3fe17  7d07                 jge 0xa3fe20
// 00a3fe19  b818000000           mov eax, 0x18
// 00a3fe1e  eb1a                 jmp 0xa3fe3a
// 00a3fe20  8b542424             mov edx, dword ptr [esp + 0x24]
// 00a3fe24  8d4c2414             lea ecx, [esp + 0x14]
// 00a3fe28  51                   push ecx
// 00a3fe29  6a01                 push 1
// 00a3fe2b  68ecf3b400           push 0xb4f3ec
// 00a3fe30  52                   push edx
// 00a3fe31  ffd7                 call edi
// 00a3fe33  8b442418             mov eax, dword ptr [esp + 0x18]
// 00a3fe37  83c00a               add eax, 0xa
// 00a3fe3a  68601fc200           push 0xc21f60
// 00a3fe3f  53                   push ebx
// 00a3fe40  8d8ec8010000         lea ecx, [esi + 0x1c8]
// 00a3fe46  898680000000         mov dword ptr [esi + 0x80], eax
// 00a3fe4c  e85f5bfbff           call 0x9f59b0
// 00a3fe51  68ccd0c000           push 0xc0d0cc
// 00a3fe56  53                   push ebx
// 00a3fe57  8d8ed4010000         lea ecx, [esi + 0x1d4]
// 00a3fe5d  e84e5bfbff           call 0x9f59b0
// 00a3fe62  683ccfc100           push 0xc1cf3c
// 00a3fe67  53                   push ebx
// 00a3fe68  8d8ebc010000         lea ecx, [esi + 0x1bc]
// 00a3fe6e  e83d5bfbff           call 0x9f59b0
// 00a3fe73  6844c0c100           push 0xc1c044
// 00a3fe78  53                   push ebx
// 00a3fe79  8d8ee0010000         lea ecx, [esi + 0x1e0]
// 00a3fe7f  e82c5bfbff           call 0x9f59b0
// 00a3fe84  8d4c2430             lea ecx, [esp + 0x30]
// 00a3fe88  899eec010000         mov dword ptr [esi + 0x1ec], ebx
// 00a3fe8e  c68424a001000000     mov byte ptr [esp + 0x1a0], 0
// 00a3fe96  e81557f9ff           call 0x9d55b0
// 00a3fe9b  8d4c241c             lea ecx, [esp + 0x1c]
// 00a3fe9f  c78424a0010000ffffffff mov dword ptr [esp + 0x1a0], 0xffffffff
// 00a3feaa  e8e7960500           call 0xa99596
// 00a3feaf  8b8c2498010000       mov ecx, dword ptr [esp + 0x198]
// 00a3feb6  64890d00000000       mov dword ptr fs:[0], ecx
// 00a3febd  59                   pop ecx
// 00a3febe  5f                   pop edi
// 00a3febf  5e                   pop esi
// 00a3fec0  5d                   pop ebp
// 00a3fec1  5b                   pop ebx
// 00a3fec2  8b8c2480010000       mov ecx, dword ptr [esp + 0x180]
// 00a3fec9  33cc                 xor ecx, esp
// 00a3fecb  e8673bf4ff           call 0x983a37
// 00a3fed0  81c490010000         add esp, 0x190
// 00a3fed6  c3                   ret 
// copied from an identical function in another client (function ?RefreshMetrics@CXTPDockingPanePaintManager@@UAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib Source\DockingPane\XTPDockingPanePaintManager.cpp