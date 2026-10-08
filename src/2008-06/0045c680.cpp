// from server: 100% by auto
// roc 2008-06 0045c680  unit: RBX::VInstance::?$NonFactoryProduct  size: 92 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0045c680
//
// 0045c680  53                   push ebx
// 0045c681  55                   push ebp
// 0045c682  8bd9                 mov ebx, ecx
// 0045c684  33ed                 xor ebp, ebp
// 0045c686  396b0c               cmp dword ptr [ebx + 0xc], ebp
// 0045c689  7e37                 jle 0x45c6c2
// 0045c68b  56                   push esi
// 0045c68c  57                   push edi
// 0045c68d  8d4900               lea ecx, [ecx]
// 0045c690  8b4308               mov eax, dword ptr [ebx + 8]
// 0045c693  8b34a8               mov esi, dword ptr [eax + ebp*4]
// 0045c696  85f6                 test esi, esi
// 0045c698  7420                 je 0x45c6ba
// 0045c69a  8d9b00000000         lea ebx, [ebx]
// 0045c6a0  8b7e48               mov edi, dword ptr [esi + 0x48]
// 0045c6a3  8d4e08               lea ecx, [esi + 8]
// 0045c6a6  e895efffff           call 0x45b640
// 0045c6ab  56                   push esi
// 0045c6ac  e84fb60a00           call 0x507d00
// 0045c6b1  83c404               add esp, 4
// 0045c6b4  8bf7                 mov esi, edi
// 0045c6b6  85ff                 test edi, edi
// 0045c6b8  75e6                 jne 0x45c6a0
// 0045c6ba  45                   inc ebp
// 0045c6bb  3b6b0c               cmp ebp, dword ptr [ebx + 0xc]
// 0045c6be  7cd0                 jl 0x45c690
// 0045c6c0  5f                   pop edi
// 0045c6c1  5e                   pop esi
// 0045c6c2  8b4b08               mov ecx, dword ptr [ebx + 8]
// 0045c6c5  51                   push ecx
// 0045c6c6  e855b60a00           call 0x507d20
// 0045c6cb  83c404               add esp, 4
// 0045c6ce  33c0                 xor eax, eax
// 0045c6d0  5d                   pop ebp
// 0045c6d1  894308               mov dword ptr [ebx + 8], eax
// 0045c6d4  89430c               mov dword ptr [ebx + 0xc], eax
// 0045c6d7  894304               mov dword ptr [ebx + 4], eax
// 0045c6da  5b                   pop ebx
// 0045c6db  c3                   ret 
// library g3d-6.09/GLG3Dcpp\TextureManager.cpp (function ?freeMemory@?$Table@VTextureArgs@TextureManager@G3D@@V?$ReferenceCountedPointer@VTexture@G3D@@@3@@G3D@@AAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/TextureManager.cpp
