// roc 2012-06 0059b630  unit: VAuthoringSettings::?$FactoryProduct  size: 154 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0059b630
//
// 0059b630  56                   push esi
// 0059b631  8bf1                 mov esi, ecx
// 0059b633  837e0c00             cmp dword ptr [esi + 0xc], 0
// 0059b637  0f8489000000         je 0x59b6c6
// 0059b63d  53                   push ebx
// 0059b63e  55                   push ebp
// 0059b63f  bd01000000           mov ebp, 1
// 0059b644  e807f1ffff           call 0x59a750
// 0059b649  3bc5                 cmp eax, ebp
// 0059b64b  7211                 jb 0x59b65e
// 0059b64d  8d4900               lea ecx, [ecx]
// 0059b650  03ed                 add ebp, ebp
// 0059b652  3be8                 cmp ebp, eax
// 0059b654  76fa                 jbe 0x59b650
// 0059b656  85ed                 test ebp, ebp
// 0059b658  7504                 jne 0x59b65e
// 0059b65a  33db                 xor ebx, ebx
// 0059b65c  eb0b                 jmp 0x59b669
// 0059b65e  55                   push ebp
// 0059b65f  e88c6d3e00           call 0x9823f0
// 0059b664  83c404               add esp, 4
// 0059b667  8bd8                 mov ebx, eax
// 0059b669  57                   push edi
// 0059b66a  8bce                 mov ecx, esi
// 0059b66c  33ff                 xor edi, edi
// 0059b66e  e8ddf0ffff           call 0x59a750
// 0059b673  85c0                 test eax, eax
// 0059b675  761f                 jbe 0x59b696
// 0059b677  8b4604               mov eax, dword ptr [esi + 4]
// 0059b67a  03c7                 add eax, edi
// 0059b67c  33d2                 xor edx, edx
// 0059b67e  f7760c               div dword ptr [esi + 0xc]
// 0059b681  8b06                 mov eax, dword ptr [esi]
// 0059b683  47                   inc edi
// 0059b684  8a0c02               mov cl, byte ptr [edx + eax]
// 0059b687  884c1fff             mov byte ptr [edi + ebx - 1], cl
// 0059b68b  8bce                 mov ecx, esi
// 0059b68d  e8bef0ffff           call 0x59a750
// 0059b692  3bf8                 cmp edi, eax
// 0059b694  72e1                 jb 0x59b677
// 0059b696  8b4e04               mov ecx, dword ptr [esi + 4]
// 0059b699  8b4608               mov eax, dword ptr [esi + 8]
// 0059b69c  5f                   pop edi
// 0059b69d  3bc8                 cmp ecx, eax
// 0059b69f  7704                 ja 0x59b6a5
// 0059b6a1  2bc1                 sub eax, ecx
// 0059b6a3  eb05                 jmp 0x59b6aa
// 0059b6a5  2bc1                 sub eax, ecx
// 0059b6a7  03460c               add eax, dword ptr [esi + 0xc]
// 0059b6aa  8b16                 mov edx, dword ptr [esi]
// 0059b6ac  52                   push edx
// 0059b6ad  894608               mov dword ptr [esi + 8], eax
// 0059b6b0  896e0c               mov dword ptr [esi + 0xc], ebp
// 0059b6b3  c7460400000000       mov dword ptr [esi + 4], 0
// 0059b6ba  e8fb6c3e00           call 0x9823ba
// 0059b6bf  83c404               add esp, 4
// 0059b6c2  5d                   pop ebp
// 0059b6c3  891e                 mov dword ptr [esi], ebx
// 0059b6c5  5b                   pop ebx
// 0059b6c6  5e                   pop esi
// 0059b6c7  c20800               ret 8
// library rbx2016-raknet/ReliabilityLayer.cpp (function ?Compress@?$Queue@_N@DataStructures@@QAEXPBDI@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: rbx2016-raknet ReliabilityLayer.cpp
