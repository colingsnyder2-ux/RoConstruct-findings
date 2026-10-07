// roc 2009-06 004a6970  unit: G3D::TextureManager::TextureArgs  size: 126 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 004a6970
//
// 004a6970  51                   push ecx
// 004a6971  53                   push ebx
// 004a6972  8b5c240c             mov ebx, dword ptr [esp + 0xc]
// 004a6976  55                   push ebp
// 004a6977  56                   push esi
// 004a6978  57                   push edi
// 004a6979  8bf1                 mov esi, ecx
// 004a697b  8b4608               mov eax, dword ptr [esi + 8]
// 004a697e  8d3c9d00000000       lea edi, [ebx*4]
// 004a6985  6a10                 push 0x10
// 004a6987  57                   push edi
// 004a6988  89442418             mov dword ptr [esp + 0x18], eax
// 004a698c  e8df470c00           call 0x56b170
// 004a6991  57                   push edi
// 004a6992  6a00                 push 0
// 004a6994  50                   push eax
// 004a6995  894608               mov dword ptr [esi + 8], eax
// 004a6998  e8f3540c00           call 0x56be90
// 004a699d  33ed                 xor ebp, ebp
// 004a699f  83c414               add esp, 0x14
// 004a69a2  396e0c               cmp dword ptr [esi + 0xc], ebp
// 004a69a5  7e2f                 jle 0x4a69d6
// 004a69a7  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 004a69ab  8b0ca9               mov ecx, dword ptr [ecx + ebp*4]
// 004a69ae  85c9                 test ecx, ecx
// 004a69b0  741e                 je 0x4a69d0
// 004a69b2  8b01                 mov eax, dword ptr [ecx]
// 004a69b4  33d2                 xor edx, edx
// 004a69b6  f7f3                 div ebx
// 004a69b8  8b4608               mov eax, dword ptr [esi + 8]
// 004a69bb  8b7924               mov edi, dword ptr [ecx + 0x24]
// 004a69be  8b0490               mov eax, dword ptr [eax + edx*4]
// 004a69c1  894124               mov dword ptr [ecx + 0x24], eax
// 004a69c4  8b4608               mov eax, dword ptr [esi + 8]
// 004a69c7  890c90               mov dword ptr [eax + edx*4], ecx
// 004a69ca  8bcf                 mov ecx, edi
// 004a69cc  85ff                 test edi, edi
// 004a69ce  75e2                 jne 0x4a69b2
// 004a69d0  45                   inc ebp
// 004a69d1  3b6e0c               cmp ebp, dword ptr [esi + 0xc]
// 004a69d4  7cd1                 jl 0x4a69a7
// 004a69d6  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 004a69da  51                   push ecx
// 004a69db  e8b0480c00           call 0x56b290
// 004a69e0  83c404               add esp, 4
// 004a69e3  5f                   pop edi
// 004a69e4  895e0c               mov dword ptr [esi + 0xc], ebx
// 004a69e7  5e                   pop esi
// 004a69e8  5d                   pop ebp
// 004a69e9  5b                   pop ebx
// 004a69ea  59                   pop ecx
// 004a69eb  c20400               ret 4
// library g3d-6.09/GLG3Dcpp\GLCaps.cpp (function ?resize@?$Table@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@_N@G3D@@AAEXH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/GLCaps.cpp
