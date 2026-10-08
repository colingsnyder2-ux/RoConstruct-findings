// from server: 100% by auto
// roc 2009-06 004a4a50  unit: G3D::TextureManager::TextureArgs  size: 126 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 004a4a50
//
// 004a4a50  51                   push ecx
// 004a4a51  53                   push ebx
// 004a4a52  8b5c240c             mov ebx, dword ptr [esp + 0xc]
// 004a4a56  55                   push ebp
// 004a4a57  56                   push esi
// 004a4a58  57                   push edi
// 004a4a59  8bf1                 mov esi, ecx
// 004a4a5b  8b4608               mov eax, dword ptr [esi + 8]
// 004a4a5e  8d3c9d00000000       lea edi, [ebx*4]
// 004a4a65  6a10                 push 0x10
// 004a4a67  57                   push edi
// 004a4a68  89442418             mov dword ptr [esp + 0x18], eax
// 004a4a6c  e8ff660c00           call 0x56b170
// 004a4a71  57                   push edi
// 004a4a72  6a00                 push 0
// 004a4a74  50                   push eax
// 004a4a75  894608               mov dword ptr [esi + 8], eax
// 004a4a78  e813740c00           call 0x56be90
// 004a4a7d  33ed                 xor ebp, ebp
// 004a4a7f  83c414               add esp, 0x14
// 004a4a82  396e0c               cmp dword ptr [esi + 0xc], ebp
// 004a4a85  7e2f                 jle 0x4a4ab6
// 004a4a87  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 004a4a8b  8b0ca9               mov ecx, dword ptr [ecx + ebp*4]
// 004a4a8e  85c9                 test ecx, ecx
// 004a4a90  741e                 je 0x4a4ab0
// 004a4a92  8b01                 mov eax, dword ptr [ecx]
// 004a4a94  33d2                 xor edx, edx
// 004a4a96  f7f3                 div ebx
// 004a4a98  8b4608               mov eax, dword ptr [esi + 8]
// 004a4a9b  8b7948               mov edi, dword ptr [ecx + 0x48]
// 004a4a9e  8b0490               mov eax, dword ptr [eax + edx*4]
// 004a4aa1  894148               mov dword ptr [ecx + 0x48], eax
// 004a4aa4  8b4608               mov eax, dword ptr [esi + 8]
// 004a4aa7  890c90               mov dword ptr [eax + edx*4], ecx
// 004a4aaa  8bcf                 mov ecx, edi
// 004a4aac  85ff                 test edi, edi
// 004a4aae  75e2                 jne 0x4a4a92
// 004a4ab0  45                   inc ebp
// 004a4ab1  3b6e0c               cmp ebp, dword ptr [esi + 0xc]
// 004a4ab4  7cd1                 jl 0x4a4a87
// 004a4ab6  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 004a4aba  51                   push ecx
// 004a4abb  e8d0670c00           call 0x56b290
// 004a4ac0  83c404               add esp, 4
// 004a4ac3  5f                   pop edi
// 004a4ac4  895e0c               mov dword ptr [esi + 0xc], ebx
// 004a4ac7  5e                   pop esi
// 004a4ac8  5d                   pop ebp
// 004a4ac9  5b                   pop ebx
// 004a4aca  59                   pop ecx
// 004a4acb  c20400               ret 4
// library g3d-6.09/GLG3Dcpp\TextureManager.cpp (function ?resize@?$Table@VTextureArgs@TextureManager@G3D@@V?$ReferenceCountedPointer@VTexture@G3D@@@3@@G3D@@AAEXH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/TextureManager.cpp
