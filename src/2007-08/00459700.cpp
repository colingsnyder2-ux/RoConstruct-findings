// roc 2007-08 00459700  unit: RBX::VInstance::?$NonFactoryProduct  size: 94 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00459700
//
// 00459700  53                   push ebx
// 00459701  55                   push ebp
// 00459702  8bd9                 mov ebx, ecx
// 00459704  33ed                 xor ebp, ebp
// 00459706  396b0c               cmp dword ptr [ebx + 0xc], ebp
// 00459709  7e39                 jle 0x459744
// 0045970b  56                   push esi
// 0045970c  57                   push edi
// 0045970d  8d4900               lea ecx, [ecx]
// 00459710  8b4308               mov eax, dword ptr [ebx + 8]
// 00459713  8b34a8               mov esi, dword ptr [eax + ebp*4]
// 00459716  85f6                 test esi, esi
// 00459718  7420                 je 0x45973a
// 0045971a  8d9b00000000         lea ebx, [ebx]
// 00459720  8b7e48               mov edi, dword ptr [esi + 0x48]
// 00459723  8d4e08               lea ecx, [esi + 8]
// 00459726  e8a5eeffff           call 0x4585d0
// 0045972b  56                   push esi
// 0045972c  e8bf600a00           call 0x4ff7f0
// 00459731  83c404               add esp, 4
// 00459734  85ff                 test edi, edi
// 00459736  8bf7                 mov esi, edi
// 00459738  75e6                 jne 0x459720
// 0045973a  83c501               add ebp, 1
// 0045973d  3b6b0c               cmp ebp, dword ptr [ebx + 0xc]
// 00459740  7cce                 jl 0x459710
// 00459742  5f                   pop edi
// 00459743  5e                   pop esi
// 00459744  8b4b08               mov ecx, dword ptr [ebx + 8]
// 00459747  51                   push ecx
// 00459748  e8c3600a00           call 0x4ff810
// 0045974d  83c404               add esp, 4
// 00459750  33c0                 xor eax, eax
// 00459752  5d                   pop ebp
// 00459753  894308               mov dword ptr [ebx + 8], eax
// 00459756  89430c               mov dword ptr [ebx + 0xc], eax
// 00459759  894304               mov dword ptr [ebx + 4], eax
// 0045975c  5b                   pop ebx
// 0045975d  c3                   ret 
// library g3d-6.09/GLG3Dcpp\TextureManager.cpp (function ?freeMemory@?$Table@VTextureArgs@TextureManager@G3D@@V?$ReferenceCountedPointer@VTexture@G3D@@@3@@G3D@@AAEXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/TextureManager.cpp
