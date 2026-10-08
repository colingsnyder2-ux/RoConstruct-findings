// from server: 100% by auto
// roc 2007-08 00486250  unit: G3D::VertexAndPixelShader  size: 103 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00486250
//
// 00486250  803d62cf8b0000       cmp byte ptr [0x8bcf62], 0
// 00486257  56                   push esi
// 00486258  8bf1                 mov esi, ecx
// 0048625a  7410                 je 0x48626c
// 0048625c  8b442408             mov eax, dword ptr [esp + 8]
// 00486260  05c0840000           add eax, 0x84c0
// 00486265  50                   push eax
// 00486266  ff15f4d88b00         call dword ptr [0x8bd8f4]
// 0048626c  6878800000           push 0x8078
// 00486271  ff154cea7700         call dword ptr [0x77ea4c]
// 00486277  8b4e04               mov ecx, dword ptr [esi + 4]
// 0048627a  8b5608               mov edx, dword ptr [esi + 8]
// 0048627d  8b4618               mov eax, dword ptr [esi + 0x18]
// 00486280  51                   push ecx
// 00486281  52                   push edx
// 00486282  50                   push eax
// 00486283  50                   push eax
// 00486284  e837a1ffff           call 0x4803c0
// 00486289  8bc8                 mov ecx, eax
// 0048628b  8b4608               mov eax, dword ptr [esi + 8]
// 0048628e  33d2                 xor edx, edx
// 00486290  f7f1                 div ecx
// 00486292  83c404               add esp, 4
// 00486295  50                   push eax
// 00486296  ff1544ea7700         call dword ptr [0x77ea44]
// 0048629c  803d62cf8b0000       cmp byte ptr [0x8bcf62], 0
// 004862a3  5e                   pop esi
// 004862a4  740e                 je 0x4862b4
// 004862a6  c7442404c0840000     mov dword ptr [esp + 4], 0x84c0
// 004862ae  ff25f4d88b00         jmp dword ptr [0x8bd8f4]
// 004862b4  c20400               ret 4
// library g3d-6.09/GLG3Dcpp\VAR.cpp (function ?texCoordPointer@VAR@G3D@@ABEXI@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/VAR.cpp
