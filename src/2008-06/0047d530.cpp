// roc 2008-06 0047d530  unit: G3D::TextureManager::TextureArgs  size: 126 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0047d530
//
// 0047d530  51                   push ecx
// 0047d531  53                   push ebx
// 0047d532  8b5c240c             mov ebx, dword ptr [esp + 0xc]
// 0047d536  55                   push ebp
// 0047d537  56                   push esi
// 0047d538  57                   push edi
// 0047d539  8bf1                 mov esi, ecx
// 0047d53b  8b4608               mov eax, dword ptr [esi + 8]
// 0047d53e  8d3c9d00000000       lea edi, [ebx*4]
// 0047d545  6a10                 push 0x10
// 0047d547  57                   push edi
// 0047d548  89442418             mov dword ptr [esp + 0x18], eax
// 0047d54c  e82fb00800           call 0x508580
// 0047d551  57                   push edi
// 0047d552  6a00                 push 0
// 0047d554  50                   push eax
// 0047d555  894608               mov dword ptr [esi + 8], eax
// 0047d558  e8d3b40800           call 0x508a30
// 0047d55d  33ed                 xor ebp, ebp
// 0047d55f  83c414               add esp, 0x14
// 0047d562  396e0c               cmp dword ptr [esi + 0xc], ebp
// 0047d565  7e2f                 jle 0x47d596
// 0047d567  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0047d56b  8b0ca9               mov ecx, dword ptr [ecx + ebp*4]
// 0047d56e  85c9                 test ecx, ecx
// 0047d570  741e                 je 0x47d590
// 0047d572  8b01                 mov eax, dword ptr [ecx]
// 0047d574  33d2                 xor edx, edx
// 0047d576  f7f3                 div ebx
// 0047d578  8b4608               mov eax, dword ptr [esi + 8]
// 0047d57b  8b7948               mov edi, dword ptr [ecx + 0x48]
// 0047d57e  8b0490               mov eax, dword ptr [eax + edx*4]
// 0047d581  894148               mov dword ptr [ecx + 0x48], eax
// 0047d584  8b4608               mov eax, dword ptr [esi + 8]
// 0047d587  890c90               mov dword ptr [eax + edx*4], ecx
// 0047d58a  8bcf                 mov ecx, edi
// 0047d58c  85ff                 test edi, edi
// 0047d58e  75e2                 jne 0x47d572
// 0047d590  45                   inc ebp
// 0047d591  3b6e0c               cmp ebp, dword ptr [esi + 0xc]
// 0047d594  7cd1                 jl 0x47d567
// 0047d596  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0047d59a  51                   push ecx
// 0047d59b  e880a70800           call 0x507d20
// 0047d5a0  83c404               add esp, 4
// 0047d5a3  5f                   pop edi
// 0047d5a4  895e0c               mov dword ptr [esi + 0xc], ebx
// 0047d5a7  5e                   pop esi
// 0047d5a8  5d                   pop ebp
// 0047d5a9  5b                   pop ebx
// 0047d5aa  59                   pop ecx
// 0047d5ab  c20400               ret 4
// library g3d-6.09/GLG3Dcpp\TextureManager.cpp (function ?resize@?$Table@VTextureArgs@TextureManager@G3D@@V?$ReferenceCountedPointer@VTexture@G3D@@@3@@G3D@@AAEXH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/TextureManager.cpp
