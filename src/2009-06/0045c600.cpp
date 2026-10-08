// from server: 100% by auto
// roc 2009-06 0045c600  unit: RBX::VInstance::?$NonFactoryProduct  size: 92 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0045c600
//
// 0045c600  53                   push ebx
// 0045c601  55                   push ebp
// 0045c602  8bd9                 mov ebx, ecx
// 0045c604  33ed                 xor ebp, ebp
// 0045c606  396b0c               cmp dword ptr [ebx + 0xc], ebp
// 0045c609  7e37                 jle 0x45c642
// 0045c60b  56                   push esi
// 0045c60c  57                   push edi
// 0045c60d  8d4900               lea ecx, [ecx]
// 0045c610  8b4308               mov eax, dword ptr [ebx + 8]
// 0045c613  8b34a8               mov esi, dword ptr [eax + ebp*4]
// 0045c616  85f6                 test esi, esi
// 0045c618  7420                 je 0x45c63a
// 0045c61a  8d9b00000000         lea ebx, [ebx]
// 0045c620  8b7e48               mov edi, dword ptr [esi + 0x48]
// 0045c623  8d4e08               lea ecx, [esi + 8]
// 0045c626  e885ebffff           call 0x45b1b0
// 0045c62b  56                   push esi
// 0045c62c  e82feb1000           call 0x56b160
// 0045c631  83c404               add esp, 4
// 0045c634  8bf7                 mov esi, edi
// 0045c636  85ff                 test edi, edi
// 0045c638  75e6                 jne 0x45c620
// 0045c63a  45                   inc ebp
// 0045c63b  3b6b0c               cmp ebp, dword ptr [ebx + 0xc]
// 0045c63e  7cd0                 jl 0x45c610
// 0045c640  5f                   pop edi
// 0045c641  5e                   pop esi
// 0045c642  8b4b08               mov ecx, dword ptr [ebx + 8]
// 0045c645  51                   push ecx
// 0045c646  e845ec1000           call 0x56b290
// 0045c64b  83c404               add esp, 4
// 0045c64e  33c0                 xor eax, eax
// 0045c650  5d                   pop ebp
// 0045c651  894308               mov dword ptr [ebx + 8], eax
// 0045c654  89430c               mov dword ptr [ebx + 0xc], eax
// 0045c657  894304               mov dword ptr [ebx + 4], eax
// 0045c65a  5b                   pop ebx
// 0045c65b  c3                   ret 
// library g3d-6.09/GLG3Dcpp\TextureManager.cpp (function ?freeMemory@?$Table@VTextureArgs@TextureManager@G3D@@V?$ReferenceCountedPointer@VTexture@G3D@@@3@@G3D@@AAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/TextureManager.cpp
