// roc 2007-03 0072f760  unit: seg_00720000  size: 128 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0072f760
//
// 0072f760  51                   push ecx
// 0072f761  53                   push ebx
// 0072f762  8b5c240c             mov ebx, dword ptr [esp + 0xc]
// 0072f766  55                   push ebp
// 0072f767  56                   push esi
// 0072f768  57                   push edi
// 0072f769  8bf1                 mov esi, ecx
// 0072f76b  8b4608               mov eax, dword ptr [esi + 8]
// 0072f76e  8d3c9d00000000       lea edi, [ebx*4]
// 0072f775  6a10                 push 0x10
// 0072f777  57                   push edi
// 0072f778  89442418             mov dword ptr [esp + 0x18], eax
// 0072f77c  e84f44dcff           call 0x4f3bd0
// 0072f781  57                   push edi
// 0072f782  6a00                 push 0
// 0072f784  50                   push eax
// 0072f785  894608               mov dword ptr [esi + 8], eax
// 0072f788  e86349dcff           call 0x4f40f0
// 0072f78d  33ed                 xor ebp, ebp
// 0072f78f  83c414               add esp, 0x14
// 0072f792  396e0c               cmp dword ptr [esi + 0xc], ebp
// 0072f795  7e31                 jle 0x72f7c8
// 0072f797  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0072f79b  8b0ca9               mov ecx, dword ptr [ecx + ebp*4]
// 0072f79e  85c9                 test ecx, ecx
// 0072f7a0  741e                 je 0x72f7c0
// 0072f7a2  8b01                 mov eax, dword ptr [ecx]
// 0072f7a4  33d2                 xor edx, edx
// 0072f7a6  f7f3                 div ebx
// 0072f7a8  8b4608               mov eax, dword ptr [esi + 8]
// 0072f7ab  8b7948               mov edi, dword ptr [ecx + 0x48]
// 0072f7ae  85ff                 test edi, edi
// 0072f7b0  8b0490               mov eax, dword ptr [eax + edx*4]
// 0072f7b3  894148               mov dword ptr [ecx + 0x48], eax
// 0072f7b6  8b4608               mov eax, dword ptr [esi + 8]
// 0072f7b9  890c90               mov dword ptr [eax + edx*4], ecx
// 0072f7bc  8bcf                 mov ecx, edi
// 0072f7be  75e2                 jne 0x72f7a2
// 0072f7c0  83c501               add ebp, 1
// 0072f7c3  3b6e0c               cmp ebp, dword ptr [esi + 0xc]
// 0072f7c6  7ccf                 jl 0x72f797
// 0072f7c8  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0072f7cc  51                   push ecx
// 0072f7cd  e8ae3bdcff           call 0x4f3380
// 0072f7d2  83c404               add esp, 4
// 0072f7d5  5f                   pop edi
// 0072f7d6  895e0c               mov dword ptr [esi + 0xc], ebx
// 0072f7d9  5e                   pop esi
// 0072f7da  5d                   pop ebp
// 0072f7db  5b                   pop ebx
// 0072f7dc  59                   pop ecx
// 0072f7dd  c20400               ret 4
// library rbxgs-g3d/GLG3Dcpp\TextureManager.cpp (function ?resize@?$Table@VTextureArgs@TextureManager@G3D@@V?$ReferenceCountedPointer@VTexture@G3D@@@3@@G3D@@AAEXH@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: rbxgs-g3d GLG3Dcpp/TextureManager.cpp
