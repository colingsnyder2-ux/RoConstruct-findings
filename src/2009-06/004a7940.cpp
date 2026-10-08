// from server: 100% by auto
// roc 2009-06 004a7940  unit: G3D::TextureManager::TextureArgs  size: 93 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 004a7940
//
// 004a7940  53                   push ebx
// 004a7941  55                   push ebp
// 004a7942  8bd9                 mov ebx, ecx
// 004a7944  33ed                 xor ebp, ebp
// 004a7946  396b0c               cmp dword ptr [ebx + 0xc], ebp
// 004a7949  7e38                 jle 0x4a7983
// 004a794b  56                   push esi
// 004a794c  57                   push edi
// 004a794d  8d4900               lea ecx, [ecx]
// 004a7950  8b4308               mov eax, dword ptr [ebx + 8]
// 004a7953  8b34a8               mov esi, dword ptr [eax + ebp*4]
// 004a7956  85f6                 test esi, esi
// 004a7958  7421                 je 0x4a797b
// 004a795a  8d9b00000000         lea ebx, [ebx]
// 004a7960  8b7e24               mov edi, dword ptr [esi + 0x24]
// 004a7963  8d4e04               lea ecx, [esi + 4]
// 004a7966  ff15c4e48900         call dword ptr [0x89e4c4]
// 004a796c  56                   push esi
// 004a796d  e8ee370c00           call 0x56b160
// 004a7972  83c404               add esp, 4
// 004a7975  8bf7                 mov esi, edi
// 004a7977  85ff                 test edi, edi
// 004a7979  75e5                 jne 0x4a7960
// 004a797b  45                   inc ebp
// 004a797c  3b6b0c               cmp ebp, dword ptr [ebx + 0xc]
// 004a797f  7ccf                 jl 0x4a7950
// 004a7981  5f                   pop edi
// 004a7982  5e                   pop esi
// 004a7983  8b4b08               mov ecx, dword ptr [ebx + 8]
// 004a7986  51                   push ecx
// 004a7987  e804390c00           call 0x56b290
// 004a798c  83c404               add esp, 4
// 004a798f  33c0                 xor eax, eax
// 004a7991  5d                   pop ebp
// 004a7992  894308               mov dword ptr [ebx + 8], eax
// 004a7995  89430c               mov dword ptr [ebx + 0xc], eax
// 004a7998  894304               mov dword ptr [ebx + 4], eax
// 004a799b  5b                   pop ebx
// 004a799c  c3                   ret 
// library g3d-6.09/GLG3Dcpp\GLCaps.cpp (function ?freeMemory@?$Table@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@_N@G3D@@AAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/GLCaps.cpp
