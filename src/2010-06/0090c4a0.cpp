// roc 2010-06 0090c4a0  unit: G3D::TextureManager::TextureArgs  size: 126 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0090c4a0
//
// 0090c4a0  51                   push ecx
// 0090c4a1  53                   push ebx
// 0090c4a2  8b5c240c             mov ebx, dword ptr [esp + 0xc]
// 0090c4a6  55                   push ebp
// 0090c4a7  56                   push esi
// 0090c4a8  57                   push edi
// 0090c4a9  8bf1                 mov esi, ecx
// 0090c4ab  8b4608               mov eax, dword ptr [esi + 8]
// 0090c4ae  8d3c9d00000000       lea edi, [ebx*4]
// 0090c4b5  6a10                 push 0x10
// 0090c4b7  57                   push edi
// 0090c4b8  89442418             mov dword ptr [esp + 0x18], eax
// 0090c4bc  e8df13c4ff           call 0x54d8a0
// 0090c4c1  57                   push edi
// 0090c4c2  6a00                 push 0
// 0090c4c4  50                   push eax
// 0090c4c5  894608               mov dword ptr [esi + 8], eax
// 0090c4c8  e8d320c4ff           call 0x54e5a0
// 0090c4cd  33ed                 xor ebp, ebp
// 0090c4cf  83c414               add esp, 0x14
// 0090c4d2  396e0c               cmp dword ptr [esi + 0xc], ebp
// 0090c4d5  7e2f                 jle 0x90c506
// 0090c4d7  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0090c4db  8b0ca9               mov ecx, dword ptr [ecx + ebp*4]
// 0090c4de  85c9                 test ecx, ecx
// 0090c4e0  741e                 je 0x90c500
// 0090c4e2  8b01                 mov eax, dword ptr [ecx]
// 0090c4e4  33d2                 xor edx, edx
// 0090c4e6  f7f3                 div ebx
// 0090c4e8  8b4608               mov eax, dword ptr [esi + 8]
// 0090c4eb  8b7948               mov edi, dword ptr [ecx + 0x48]
// 0090c4ee  8b0490               mov eax, dword ptr [eax + edx*4]
// 0090c4f1  894148               mov dword ptr [ecx + 0x48], eax
// 0090c4f4  8b4608               mov eax, dword ptr [esi + 8]
// 0090c4f7  890c90               mov dword ptr [eax + edx*4], ecx
// 0090c4fa  8bcf                 mov ecx, edi
// 0090c4fc  85ff                 test edi, edi
// 0090c4fe  75e2                 jne 0x90c4e2
// 0090c500  45                   inc ebp
// 0090c501  3b6e0c               cmp ebp, dword ptr [esi + 0xc]
// 0090c504  7cd1                 jl 0x90c4d7
// 0090c506  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0090c50a  51                   push ecx
// 0090c50b  e8b014c4ff           call 0x54d9c0
// 0090c510  83c404               add esp, 4
// 0090c513  5f                   pop edi
// 0090c514  895e0c               mov dword ptr [esi + 0xc], ebx
// 0090c517  5e                   pop esi
// 0090c518  5d                   pop ebp
// 0090c519  5b                   pop ebx
// 0090c51a  59                   pop ecx
// 0090c51b  c20400               ret 4
// library g3d-6.09/GLG3Dcpp\TextureManager.cpp (function ?resize@?$Table@VTextureArgs@TextureManager@G3D@@V?$ReferenceCountedPointer@VTexture@G3D@@@3@@G3D@@AAEXH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/TextureManager.cpp
