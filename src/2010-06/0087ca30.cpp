// roc 2010-06 0087ca30  unit: CXTPPropertyGridInplaceEdit  size: 423 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0087ca30
//
// 0087ca30  51                   push ecx
// 0087ca31  53                   push ebx
// 0087ca32  56                   push esi
// 0087ca33  8bf1                 mov esi, ecx
// 0087ca35  837e5c00             cmp dword ptr [esi + 0x5c], 0
// 0087ca39  7421                 je 0x87ca5c
// 0087ca3b  837e2000             cmp dword ptr [esi + 0x20], 0
// 0087ca3f  741b                 je 0x87ca5c
// 0087ca41  e898031000           call 0x97cdde
// 0087ca46  a900080000           test eax, 0x800
// 0087ca4b  750f                 jne 0x87ca5c
// 0087ca4d  8d5e70               lea ebx, [esi + 0x70]
// 0087ca50  8bcb                 mov ecx, ebx
// 0087ca52  ff15eccd9e00         call dword ptr [0x9ecdec]
// 0087ca58  84c0                 test al, al
// 0087ca5a  740d                 je 0x87ca69
// 0087ca5c  8bce                 mov ecx, esi
// 0087ca5e  e80db5f2ff           call 0x7a7f70
// 0087ca63  5e                   pop esi
// 0087ca64  5b                   pop ebx
// 0087ca65  59                   pop ecx
// 0087ca66  c20c00               ret 0xc
// 0087ca69  8b442410             mov eax, dword ptr [esp + 0x10]
// 0087ca6d  83c0f8               add eax, -8
// 0087ca70  83f826               cmp eax, 0x26
// 0087ca73  770e                 ja 0x87ca83
// 0087ca75  0fb680b0cb8700       movzx eax, byte ptr [eax + 0x87cbb0]
// 0087ca7c  ff2485a8cb8700       jmp dword ptr [eax*4 + 0x87cba8]
// 0087ca83  8b4620               mov eax, dword ptr [esi + 0x20]
// 0087ca86  57                   push edi
// 0087ca87  85c0                 test eax, eax
// 0087ca89  7448                 je 0x87cad3
// 0087ca8b  55                   push ebp
// 0087ca8c  8d7e58               lea edi, [esi + 0x58]
// 0087ca8f  57                   push edi
// 0087ca90  8d6e54               lea ebp, [esi + 0x54]
// 0087ca93  55                   push ebp
// 0087ca94  68b0000000           push 0xb0
// 0087ca99  50                   push eax
// 0087ca9a  ff1554ba9e00         call dword ptr [0x9eba54]
// 0087caa0  8d8e80000000         lea ecx, [esi + 0x80]
// 0087caa6  51                   push ecx
// 0087caa7  8bce                 mov ecx, esi
// 0087caa9  e8dab4f2ff           call 0x7a7f88
// 0087caae  8bce                 mov ecx, esi
// 0087cab0  e86be1ffff           call 0x87ac20
// 0087cab5  6a01                 push 1
// 0087cab7  55                   push ebp
// 0087cab8  8bce                 mov ecx, esi
// 0087caba  e8e1f4ffff           call 0x87bfa0
// 0087cabf  6a01                 push 1
// 0087cac1  57                   push edi
// 0087cac2  8bce                 mov ecx, esi
// 0087cac4  e8d7f4ffff           call 0x87bfa0
// 0087cac9  8b6d00               mov ebp, dword ptr [ebp]
// 0087cacc  392f                 cmp dword ptr [edi], ebp
// 0087cace  7d02                 jge 0x87cad2
// 0087cad0  892f                 mov dword ptr [edi], ebp
// 0087cad2  5d                   pop ebp
// 0087cad3  8b7e54               mov edi, dword ptr [esi + 0x54]
// 0087cad6  85ff                 test edi, edi
// 0087cad8  0f8cb6000000         jl 0x87cb94
// 0087cade  8d8e84000000         lea ecx, [esi + 0x84]
// 0087cae4  ff15e4cd9e00         call dword ptr [0x9ecde4]
// 0087caea  3bf8                 cmp edi, eax
// 0087caec  0f8da2000000         jge 0x87cb94
// 0087caf2  8b5654               mov edx, dword ptr [esi + 0x54]
// 0087caf5  52                   push edx
// 0087caf6  8bce                 mov ecx, esi
// 0087caf8  e863eeffff           call 0x87b960
// 0087cafd  85c0                 test eax, eax
// 0087caff  0f848f000000         je 0x87cb94
// 0087cb05  8a442414             mov al, byte ptr [esp + 0x14]
// 0087cb09  8b16                 mov edx, dword ptr [esi]
// 0087cb0b  8b9248010000         mov edx, dword ptr [edx + 0x148]
// 0087cb11  8844240c             mov byte ptr [esp + 0xc], al
// 0087cb15  8b4654               mov eax, dword ptr [esi + 0x54]
// 0087cb18  50                   push eax
// 0087cb19  8d4c2410             lea ecx, [esp + 0x10]
// 0087cb1d  51                   push ecx
// 0087cb1e  8bce                 mov ecx, esi
// 0087cb20  ffd2                 call edx
// 0087cb22  85c0                 test eax, eax
// 0087cb24  7528                 jne 0x87cb4e
// 0087cb26  8b4654               mov eax, dword ptr [esi + 0x54]
// 0087cb29  8b3e                 mov edi, dword ptr [esi]
// 0087cb2b  50                   push eax
// 0087cb2c  8bcb                 mov ecx, ebx
// 0087cb2e  ff1558c59e00         call dword ptr [0x9ec558]
// 0087cb34  8b54240c             mov edx, dword ptr [esp + 0xc]
// 0087cb38  0fb6c8               movzx ecx, al
// 0087cb3b  8b875c010000         mov eax, dword ptr [edi + 0x15c]
// 0087cb41  51                   push ecx
// 0087cb42  52                   push edx
// 0087cb43  8bce                 mov ecx, esi
// 0087cb45  ffd0                 call eax
// 0087cb47  5f                   pop edi
// 0087cb48  5e                   pop esi
// 0087cb49  5b                   pop ebx
// 0087cb4a  59                   pop ecx
// 0087cb4b  c20c00               ret 0xc
// 0087cb4e  8b16                 mov edx, dword ptr [esi]
// 0087cb50  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0087cb54  8b9250010000         mov edx, dword ptr [edx + 0x150]
// 0087cb5a  50                   push eax
// 0087cb5b  8bce                 mov ecx, esi
// 0087cb5d  ffd2                 call edx
// 0087cb5f  85c0                 test eax, eax
// 0087cb61  741c                 je 0x87cb7f
// 0087cb63  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0087cb67  50                   push eax
// 0087cb68  8bce                 mov ecx, esi
// 0087cb6a  e841fbffff           call 0x87c6b0
// 0087cb6f  6a00                 push 0
// 0087cb71  8bce                 mov ecx, esi
// 0087cb73  e828eeffff           call 0x87b9a0
// 0087cb78  5f                   pop edi
// 0087cb79  5e                   pop esi
// 0087cb7a  5b                   pop ebx
// 0087cb7b  59                   pop ecx
// 0087cb7c  c20c00               ret 0xc
// 0087cb7f  837c24147f           cmp dword ptr [esp + 0x14], 0x7f
// 0087cb84  741a                 je 0x87cba0
// 0087cb86  8bce                 mov ecx, esi
// 0087cb88  e8e3b3f2ff           call 0x7a7f70
// 0087cb8d  5f                   pop edi
// 0087cb8e  5e                   pop esi
// 0087cb8f  5b                   pop ebx
// 0087cb90  59                   pop ecx
// 0087cb91  c20c00               ret 0xc
// 0087cb94  8b16                 mov edx, dword ptr [esi]
// 0087cb96  8b8258010000         mov eax, dword ptr [edx + 0x158]
// 0087cb9c  8bce                 mov ecx, esi
// 0087cb9e  ffd0                 call eax
// 0087cba0  5f                   pop edi
// 0087cba1  5e                   pop esi
// 0087cba2  5b                   pop ebx
// 0087cba3  59                   pop ecx
// 0087cba4  c20c00               ret 0xc
// 0087cba7  90                   nop 
// 0087cba8  a1cb870083           mov eax, dword ptr [0x830087cb]
// 0087cbad  ca8700               retf 0x87
// 0087cbb0  0001                 add byte ptr [ecx], al
// 0087cbb2  0101                 add dword ptr [ecx], eax
// 0087cbb4  0101                 add dword ptr [ecx], eax
// 0087cbb6  0101                 add dword ptr [ecx], eax
// 0087cbb8  0101                 add dword ptr [ecx], eax
// 0087cbba  0101                 add dword ptr [ecx], eax
// 0087cbbc  0101                 add dword ptr [ecx], eax
// 0087cbbe  0101                 add dword ptr [ecx], eax
// 0087cbc0  0101                 add dword ptr [ecx], eax
// 0087cbc2  0101                 add dword ptr [ecx], eax
// 0087cbc4  0101                 add dword ptr [ecx], eax
// 0087cbc6  0101                 add dword ptr [ecx], eax
// 0087cbc8  0001                 add byte ptr [ecx], al
// 0087cbca  0100                 add dword ptr [eax], eax
// 0087cbcc  0000                 add byte ptr [eax], al
// 0087cbce  0000                 add byte ptr [eax], al
// 0087cbd0  0001                 add byte ptr [ecx], al
// 0087cbd2  0101                 add dword ptr [ecx], eax
// 0087cbd4  0101                 add dword ptr [ecx], eax
// copied from an identical function in another client (function ?OnChar@?$CXTMaskEditT@VCEdit@@@@IAEXIII@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\Controls\XTMaskEdit.cpp