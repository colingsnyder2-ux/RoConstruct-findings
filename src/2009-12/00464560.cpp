// roc 2009-12 00464560  unit: RBX::VInstance::?$NonFactoryProduct  size: 92 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00464560
//
// 00464560  53                   push ebx
// 00464561  55                   push ebp
// 00464562  8bd9                 mov ebx, ecx
// 00464564  33ed                 xor ebp, ebp
// 00464566  396b0c               cmp dword ptr [ebx + 0xc], ebp
// 00464569  7e37                 jle 0x4645a2
// 0046456b  56                   push esi
// 0046456c  57                   push edi
// 0046456d  8d4900               lea ecx, [ecx]
// 00464570  8b4308               mov eax, dword ptr [ebx + 8]
// 00464573  8b34a8               mov esi, dword ptr [eax + ebp*4]
// 00464576  85f6                 test esi, esi
// 00464578  7420                 je 0x46459a
// 0046457a  8d9b00000000         lea ebx, [ebx]
// 00464580  8b7e48               mov edi, dword ptr [esi + 0x48]
// 00464583  8d4e08               lea ecx, [esi + 8]
// 00464586  e835e5ffff           call 0x462ac0
// 0046458b  56                   push esi
// 0046458c  e80f7c0f00           call 0x55c1a0
// 00464591  83c404               add esp, 4
// 00464594  8bf7                 mov esi, edi
// 00464596  85ff                 test edi, edi
// 00464598  75e6                 jne 0x464580
// 0046459a  45                   inc ebp
// 0046459b  3b6b0c               cmp ebp, dword ptr [ebx + 0xc]
// 0046459e  7cd0                 jl 0x464570
// 004645a0  5f                   pop edi
// 004645a1  5e                   pop esi
// 004645a2  8b4b08               mov ecx, dword ptr [ebx + 8]
// 004645a5  51                   push ecx
// 004645a6  e8355e1800           call 0x5ea3e0
// 004645ab  83c404               add esp, 4
// 004645ae  33c0                 xor eax, eax
// 004645b0  5d                   pop ebp
// 004645b1  894308               mov dword ptr [ebx + 8], eax
// 004645b4  89430c               mov dword ptr [ebx + 0xc], eax
// 004645b7  894304               mov dword ptr [ebx + 4], eax
// 004645ba  5b                   pop ebx
// 004645bb  c3                   ret 
// library g3d-6.09/GLG3Dcpp\TextureManager.cpp (function ?freeMemory@?$Table@VTextureArgs@TextureManager@G3D@@V?$ReferenceCountedPointer@VTexture@G3D@@@3@@G3D@@AAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/TextureManager.cpp
