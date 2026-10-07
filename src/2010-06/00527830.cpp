// roc 2010-06 00527830  unit: RBX::VMaterialBase::?$WeakReferenceCountedPointer  size: 92 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00527830
//
// 00527830  53                   push ebx
// 00527831  55                   push ebp
// 00527832  8bd9                 mov ebx, ecx
// 00527834  33ed                 xor ebp, ebp
// 00527836  396b0c               cmp dword ptr [ebx + 0xc], ebp
// 00527839  7e37                 jle 0x527872
// 0052783b  56                   push esi
// 0052783c  57                   push edi
// 0052783d  8d4900               lea ecx, [ecx]
// 00527840  8b4308               mov eax, dword ptr [ebx + 8]
// 00527843  8b34a8               mov esi, dword ptr [eax + ebp*4]
// 00527846  85f6                 test esi, esi
// 00527848  7420                 je 0x52786a
// 0052784a  8d9b00000000         lea ebx, [ebx]
// 00527850  8b7e48               mov edi, dword ptr [esi + 0x48]
// 00527853  8d4e08               lea ecx, [esi + 8]
// 00527856  e865f6ffff           call 0x526ec0
// 0052785b  56                   push esi
// 0052785c  e84f33feff           call 0x50abb0
// 00527861  83c404               add esp, 4
// 00527864  8bf7                 mov esi, edi
// 00527866  85ff                 test edi, edi
// 00527868  75e6                 jne 0x527850
// 0052786a  45                   inc ebp
// 0052786b  3b6b0c               cmp ebp, dword ptr [ebx + 0xc]
// 0052786e  7cd0                 jl 0x527840
// 00527870  5f                   pop edi
// 00527871  5e                   pop esi
// 00527872  8b4b08               mov ecx, dword ptr [ebx + 8]
// 00527875  51                   push ecx
// 00527876  e845610200           call 0x54d9c0
// 0052787b  83c404               add esp, 4
// 0052787e  33c0                 xor eax, eax
// 00527880  5d                   pop ebp
// 00527881  894308               mov dword ptr [ebx + 8], eax
// 00527884  89430c               mov dword ptr [ebx + 0xc], eax
// 00527887  894304               mov dword ptr [ebx + 4], eax
// 0052788a  5b                   pop ebx
// 0052788b  c3                   ret 
// library g3d-6.09/GLG3Dcpp\TextureManager.cpp (function ?freeMemory@?$Table@VTextureArgs@TextureManager@G3D@@V?$ReferenceCountedPointer@VTexture@G3D@@@3@@G3D@@AAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/TextureManager.cpp
