// roc 2009-06 007edd10  unit: CXTPPropertyGridInplaceEdit  size: 423 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 007edd10
//
// 007edd10  51                   push ecx
// 007edd11  53                   push ebx
// 007edd12  56                   push esi
// 007edd13  8bf1                 mov esi, ecx
// 007edd15  837e5c00             cmp dword ptr [esi + 0x5c], 0
// 007edd19  7421                 je 0x7edd3c
// 007edd1b  837e2000             cmp dword ptr [esi + 0x20], 0
// 007edd1f  741b                 je 0x7edd3c
// 007edd21  e8b6e10500           call 0x84bedc
// 007edd26  a900080000           test eax, 0x800
// 007edd2b  750f                 jne 0x7edd3c
// 007edd2d  8d5e70               lea ebx, [esi + 0x70]
// 007edd30  8bcb                 mov ecx, ebx
// 007edd32  ff155cfb8900         call dword ptr [0x89fb5c]
// 007edd38  84c0                 test al, al
// 007edd3a  740d                 je 0x7edd49
// 007edd3c  8bce                 mov ecx, esi
// 007edd3e  e8c5b2f2ff           call 0x719008
// 007edd43  5e                   pop esi
// 007edd44  5b                   pop ebx
// 007edd45  59                   pop ecx
// 007edd46  c20c00               ret 0xc
// 007edd49  8b442410             mov eax, dword ptr [esp + 0x10]
// 007edd4d  83c0f8               add eax, -8
// 007edd50  83f826               cmp eax, 0x26
// 007edd53  770e                 ja 0x7edd63
// 007edd55  0fb68090de7e00       movzx eax, byte ptr [eax + 0x7ede90]
// 007edd5c  ff248588de7e00       jmp dword ptr [eax*4 + 0x7ede88]
// 007edd63  8b4620               mov eax, dword ptr [esi + 0x20]
// 007edd66  57                   push edi
// 007edd67  85c0                 test eax, eax
// 007edd69  7448                 je 0x7eddb3
// 007edd6b  55                   push ebp
// 007edd6c  8d7e58               lea edi, [esi + 0x58]
// 007edd6f  57                   push edi
// 007edd70  8d6e54               lea ebp, [esi + 0x54]
// 007edd73  55                   push ebp
// 007edd74  68b0000000           push 0xb0
// 007edd79  50                   push eax
// 007edd7a  ff1590ee8900         call dword ptr [0x89ee90]
// 007edd80  8d8e80000000         lea ecx, [esi + 0x80]
// 007edd86  51                   push ecx
// 007edd87  8bce                 mov ecx, esi
// 007edd89  e892b2f2ff           call 0x719020
// 007edd8e  8bce                 mov ecx, esi
// 007edd90  e85be1ffff           call 0x7ebef0
// 007edd95  6a01                 push 1
// 007edd97  55                   push ebp
// 007edd98  8bce                 mov ecx, esi
// 007edd9a  e8e1f4ffff           call 0x7ed280
// 007edd9f  6a01                 push 1
// 007edda1  57                   push edi
// 007edda2  8bce                 mov ecx, esi
// 007edda4  e8d7f4ffff           call 0x7ed280
// 007edda9  8b6d00               mov ebp, dword ptr [ebp]
// 007eddac  392f                 cmp dword ptr [edi], ebp
// 007eddae  7d02                 jge 0x7eddb2
// 007eddb0  892f                 mov dword ptr [edi], ebp
// 007eddb2  5d                   pop ebp
// 007eddb3  8b7e54               mov edi, dword ptr [esi + 0x54]
// 007eddb6  85ff                 test edi, edi
// 007eddb8  0f8cb6000000         jl 0x7ede74
// 007eddbe  8d8e84000000         lea ecx, [esi + 0x84]
// 007eddc4  ff1554fb8900         call dword ptr [0x89fb54]
// 007eddca  3bf8                 cmp edi, eax
// 007eddcc  0f8da2000000         jge 0x7ede74
// 007eddd2  8b5654               mov edx, dword ptr [esi + 0x54]
// 007eddd5  52                   push edx
// 007eddd6  8bce                 mov ecx, esi
// 007eddd8  e863eeffff           call 0x7ecc40
// 007edddd  85c0                 test eax, eax
// 007edddf  0f848f000000         je 0x7ede74
// 007edde5  8a442414             mov al, byte ptr [esp + 0x14]
// 007edde9  8b16                 mov edx, dword ptr [esi]
// 007eddeb  8b9248010000         mov edx, dword ptr [edx + 0x148]
// 007eddf1  8844240c             mov byte ptr [esp + 0xc], al
// 007eddf5  8b4654               mov eax, dword ptr [esi + 0x54]
// 007eddf8  50                   push eax
// 007eddf9  8d4c2410             lea ecx, [esp + 0x10]
// 007eddfd  51                   push ecx
// 007eddfe  8bce                 mov ecx, esi
// 007ede00  ffd2                 call edx
// 007ede02  85c0                 test eax, eax
// 007ede04  7528                 jne 0x7ede2e
// 007ede06  8b4654               mov eax, dword ptr [esi + 0x54]
// 007ede09  8b3e                 mov edi, dword ptr [esi]
// 007ede0b  50                   push eax
// 007ede0c  8bcb                 mov ecx, ebx
// 007ede0e  ff15e0f98900         call dword ptr [0x89f9e0]
// 007ede14  8b54240c             mov edx, dword ptr [esp + 0xc]
// 007ede18  0fb6c8               movzx ecx, al
// 007ede1b  8b875c010000         mov eax, dword ptr [edi + 0x15c]
// 007ede21  51                   push ecx
// 007ede22  52                   push edx
// 007ede23  8bce                 mov ecx, esi
// 007ede25  ffd0                 call eax
// 007ede27  5f                   pop edi
// 007ede28  5e                   pop esi
// 007ede29  5b                   pop ebx
// 007ede2a  59                   pop ecx
// 007ede2b  c20c00               ret 0xc
// 007ede2e  8b16                 mov edx, dword ptr [esi]
// 007ede30  8b44240c             mov eax, dword ptr [esp + 0xc]
// 007ede34  8b9250010000         mov edx, dword ptr [edx + 0x150]
// 007ede3a  50                   push eax
// 007ede3b  8bce                 mov ecx, esi
// 007ede3d  ffd2                 call edx
// 007ede3f  85c0                 test eax, eax
// 007ede41  741c                 je 0x7ede5f
// 007ede43  8b44240c             mov eax, dword ptr [esp + 0xc]
// 007ede47  50                   push eax
// 007ede48  8bce                 mov ecx, esi
// 007ede4a  e841fbffff           call 0x7ed990
// 007ede4f  6a00                 push 0
// 007ede51  8bce                 mov ecx, esi
// 007ede53  e828eeffff           call 0x7ecc80
// 007ede58  5f                   pop edi
// 007ede59  5e                   pop esi
// 007ede5a  5b                   pop ebx
// 007ede5b  59                   pop ecx
// 007ede5c  c20c00               ret 0xc
// 007ede5f  837c24147f           cmp dword ptr [esp + 0x14], 0x7f
// 007ede64  741a                 je 0x7ede80
// 007ede66  8bce                 mov ecx, esi
// 007ede68  e89bb1f2ff           call 0x719008
// 007ede6d  5f                   pop edi
// 007ede6e  5e                   pop esi
// 007ede6f  5b                   pop ebx
// 007ede70  59                   pop ecx
// 007ede71  c20c00               ret 0xc
// 007ede74  8b16                 mov edx, dword ptr [esi]
// 007ede76  8b8258010000         mov eax, dword ptr [edx + 0x158]
// 007ede7c  8bce                 mov ecx, esi
// 007ede7e  ffd0                 call eax
// 007ede80  5f                   pop edi
// 007ede81  5e                   pop esi
// 007ede82  5b                   pop ebx
// 007ede83  59                   pop ecx
// 007ede84  c20c00               ret 0xc
// 007ede87  90                   nop 
// 007ede88  81de7e0063dd         sbb esi, 0xdd63007e
// 007ede8e  7e00                 jle 0x7ede90
// 007ede90  0001                 add byte ptr [ecx], al
// 007ede92  0101                 add dword ptr [ecx], eax
// 007ede94  0101                 add dword ptr [ecx], eax
// 007ede96  0101                 add dword ptr [ecx], eax
// 007ede98  0101                 add dword ptr [ecx], eax
// 007ede9a  0101                 add dword ptr [ecx], eax
// 007ede9c  0101                 add dword ptr [ecx], eax
// 007ede9e  0101                 add dword ptr [ecx], eax
// 007edea0  0101                 add dword ptr [ecx], eax
// 007edea2  0101                 add dword ptr [ecx], eax
// 007edea4  0101                 add dword ptr [ecx], eax
// 007edea6  0101                 add dword ptr [ecx], eax
// 007edea8  0001                 add byte ptr [ecx], al
// 007edeaa  0100                 add dword ptr [eax], eax
// 007edeac  0000                 add byte ptr [eax], al
// 007edeae  0000                 add byte ptr [eax], al
// 007edeb0  0001                 add byte ptr [ecx], al
// 007edeb2  0101                 add dword ptr [ecx], eax
// 007edeb4  0101                 add dword ptr [ecx], eax
// copied from an identical function in another client (function ?OnChar@?$CXTMaskEditT@VCEdit@@@@IAEXIII@Z)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\Controls\XTMaskEdit.cpp