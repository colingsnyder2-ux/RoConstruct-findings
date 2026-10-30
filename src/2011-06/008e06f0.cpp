// roc 2011-06 008e06f0  unit: CXTPPropertyGridInplaceEdit  size: 423 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008e06f0
//
// 008e06f0  51                   push ecx
// 008e06f1  53                   push ebx
// 008e06f2  56                   push esi
// 008e06f3  8bf1                 mov esi, ecx
// 008e06f5  837e5c00             cmp dword ptr [esi + 0x5c], 0
// 008e06f9  7421                 je 0x8e071c
// 008e06fb  837e2000             cmp dword ptr [esi + 0x20], 0
// 008e06ff  741b                 je 0x8e071c
// 008e0701  e812bf0e00           call 0x9cc618
// 008e0706  a900080000           test eax, 0x800
// 008e070b  750f                 jne 0x8e071c
// 008e070d  8d5e70               lea ebx, [esi + 0x70]
// 008e0710  8bcb                 mov ecx, ebx
// 008e0712  ff15b026a400         call dword ptr [0xa426b0]
// 008e0718  84c0                 test al, al
// 008e071a  740d                 je 0x8e0729
// 008e071c  8bce                 mov ecx, esi
// 008e071e  e80b9ff2ff           call 0x80a62e
// 008e0723  5e                   pop esi
// 008e0724  5b                   pop ebx
// 008e0725  59                   pop ecx
// 008e0726  c20c00               ret 0xc
// 008e0729  8b442410             mov eax, dword ptr [esp + 0x10]
// 008e072d  83c0f8               add eax, -8
// 008e0730  83f826               cmp eax, 0x26
// 008e0733  770e                 ja 0x8e0743
// 008e0735  0fb68070088e00       movzx eax, byte ptr [eax + 0x8e0870]
// 008e073c  ff248568088e00       jmp dword ptr [eax*4 + 0x8e0868]
// 008e0743  8b4620               mov eax, dword ptr [esi + 0x20]
// 008e0746  57                   push edi
// 008e0747  85c0                 test eax, eax
// 008e0749  7448                 je 0x8e0793
// 008e074b  55                   push ebp
// 008e074c  8d7e58               lea edi, [esi + 0x58]
// 008e074f  57                   push edi
// 008e0750  8d6e54               lea ebp, [esi + 0x54]
// 008e0753  55                   push ebp
// 008e0754  68b0000000           push 0xb0
// 008e0759  50                   push eax
// 008e075a  ff15c019a400         call dword ptr [0xa419c0]
// 008e0760  8d8e80000000         lea ecx, [esi + 0x80]
// 008e0766  51                   push ecx
// 008e0767  8bce                 mov ecx, esi
// 008e0769  e8d89ef2ff           call 0x80a646
// 008e076e  8bce                 mov ecx, esi
// 008e0770  e87be1ffff           call 0x8de8f0
// 008e0775  6a01                 push 1
// 008e0777  55                   push ebp
// 008e0778  8bce                 mov ecx, esi
// 008e077a  e8e1f4ffff           call 0x8dfc60
// 008e077f  6a01                 push 1
// 008e0781  57                   push edi
// 008e0782  8bce                 mov ecx, esi
// 008e0784  e8d7f4ffff           call 0x8dfc60
// 008e0789  8b6d00               mov ebp, dword ptr [ebp]
// 008e078c  392f                 cmp dword ptr [edi], ebp
// 008e078e  7d02                 jge 0x8e0792
// 008e0790  892f                 mov dword ptr [edi], ebp
// 008e0792  5d                   pop ebp
// 008e0793  8b7e54               mov edi, dword ptr [esi + 0x54]
// 008e0796  85ff                 test edi, edi
// 008e0798  0f8cb6000000         jl 0x8e0854
// 008e079e  8d8e84000000         lea ecx, [esi + 0x84]
// 008e07a4  ff15a826a400         call dword ptr [0xa426a8]
// 008e07aa  3bf8                 cmp edi, eax
// 008e07ac  0f8da2000000         jge 0x8e0854
// 008e07b2  8b5654               mov edx, dword ptr [esi + 0x54]
// 008e07b5  52                   push edx
// 008e07b6  8bce                 mov ecx, esi
// 008e07b8  e883eeffff           call 0x8df640
// 008e07bd  85c0                 test eax, eax
// 008e07bf  0f848f000000         je 0x8e0854
// 008e07c5  8a442414             mov al, byte ptr [esp + 0x14]
// 008e07c9  8b16                 mov edx, dword ptr [esi]
// 008e07cb  8b9248010000         mov edx, dword ptr [edx + 0x148]
// 008e07d1  8844240c             mov byte ptr [esp + 0xc], al
// 008e07d5  8b4654               mov eax, dword ptr [esi + 0x54]
// 008e07d8  50                   push eax
// 008e07d9  8d4c2410             lea ecx, [esp + 0x10]
// 008e07dd  51                   push ecx
// 008e07de  8bce                 mov ecx, esi
// 008e07e0  ffd2                 call edx
// 008e07e2  85c0                 test eax, eax
// 008e07e4  7528                 jne 0x8e080e
// 008e07e6  8b4654               mov eax, dword ptr [esi + 0x54]
// 008e07e9  8b3e                 mov edi, dword ptr [esi]
// 008e07eb  50                   push eax
// 008e07ec  8bcb                 mov ecx, ebx
// 008e07ee  ff153c25a400         call dword ptr [0xa4253c]
// 008e07f4  8b54240c             mov edx, dword ptr [esp + 0xc]
// 008e07f8  0fb6c8               movzx ecx, al
// 008e07fb  8b875c010000         mov eax, dword ptr [edi + 0x15c]
// 008e0801  51                   push ecx
// 008e0802  52                   push edx
// 008e0803  8bce                 mov ecx, esi
// 008e0805  ffd0                 call eax
// 008e0807  5f                   pop edi
// 008e0808  5e                   pop esi
// 008e0809  5b                   pop ebx
// 008e080a  59                   pop ecx
// 008e080b  c20c00               ret 0xc
// 008e080e  8b16                 mov edx, dword ptr [esi]
// 008e0810  8b44240c             mov eax, dword ptr [esp + 0xc]
// 008e0814  8b9250010000         mov edx, dword ptr [edx + 0x150]
// 008e081a  50                   push eax
// 008e081b  8bce                 mov ecx, esi
// 008e081d  ffd2                 call edx
// 008e081f  85c0                 test eax, eax
// 008e0821  741c                 je 0x8e083f
// 008e0823  8b44240c             mov eax, dword ptr [esp + 0xc]
// 008e0827  50                   push eax
// 008e0828  8bce                 mov ecx, esi
// 008e082a  e841fbffff           call 0x8e0370
// 008e082f  6a00                 push 0
// 008e0831  8bce                 mov ecx, esi
// 008e0833  e848eeffff           call 0x8df680
// 008e0838  5f                   pop edi
// 008e0839  5e                   pop esi
// 008e083a  5b                   pop ebx
// 008e083b  59                   pop ecx
// 008e083c  c20c00               ret 0xc
// 008e083f  837c24147f           cmp dword ptr [esp + 0x14], 0x7f
// 008e0844  741a                 je 0x8e0860
// 008e0846  8bce                 mov ecx, esi
// 008e0848  e8e19df2ff           call 0x80a62e
// 008e084d  5f                   pop edi
// 008e084e  5e                   pop esi
// 008e084f  5b                   pop ebx
// 008e0850  59                   pop ecx
// 008e0851  c20c00               ret 0xc
// 008e0854  8b16                 mov edx, dword ptr [esi]
// 008e0856  8b8258010000         mov eax, dword ptr [edx + 0x158]
// 008e085c  8bce                 mov ecx, esi
// 008e085e  ffd0                 call eax
// 008e0860  5f                   pop edi
// 008e0861  5e                   pop esi
// 008e0862  5b                   pop ebx
// 008e0863  59                   pop ecx
// 008e0864  c20c00               ret 0xc
// 008e0867  90                   nop 
// 008e0868  61                   popal 
// 008e0869  088e0043078e         or byte ptr [esi - 0x71f8bd00], cl
// 008e086f  0000                 add byte ptr [eax], al
// 008e0871  0101                 add dword ptr [ecx], eax
// 008e0873  0101                 add dword ptr [ecx], eax
// 008e0875  0101                 add dword ptr [ecx], eax
// 008e0877  0101                 add dword ptr [ecx], eax
// 008e0879  0101                 add dword ptr [ecx], eax
// 008e087b  0101                 add dword ptr [ecx], eax
// 008e087d  0101                 add dword ptr [ecx], eax
// 008e087f  0101                 add dword ptr [ecx], eax
// 008e0881  0101                 add dword ptr [ecx], eax
// 008e0883  0101                 add dword ptr [ecx], eax
// 008e0885  0101                 add dword ptr [ecx], eax
// 008e0887  0100                 add dword ptr [eax], eax
// 008e0889  0101                 add dword ptr [ecx], eax
// 008e088b  0000                 add byte ptr [eax], al
// 008e088d  0000                 add byte ptr [eax], al
// 008e088f  0000                 add byte ptr [eax], al
// 008e0891  0101                 add dword ptr [ecx], eax
// 008e0893  0101                 add dword ptr [ecx], eax
// 008e0895  0100                 add dword ptr [eax], eax
// copied from an identical function in another client (function ?OnChar@?$CXTMaskEditT@VCEdit@@@@IAEXIII@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\Controls\XTMaskEdit.cpp