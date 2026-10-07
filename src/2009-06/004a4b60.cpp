// roc 2009-06 004a4b60  unit: G3D::TextureManager::TextureArgs  size: 77 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 004a4b60
//
// 004a4b60  6aff                 push -1
// 004a4b62  6858238500           push 0x852358
// 004a4b67  64a100000000         mov eax, dword ptr fs:[0]
// 004a4b6d  50                   push eax
// 004a4b6e  64892500000000       mov dword ptr fs:[0], esp
// 004a4b75  51                   push ecx
// 004a4b76  56                   push esi
// 004a4b77  8bf1                 mov esi, ecx
// 004a4b79  89742404             mov dword ptr [esp + 4], esi
// 004a4b7d  8d4e04               lea ecx, [esi + 4]
// 004a4b80  c744241000000000     mov dword ptr [esp + 0x10], 0
// 004a4b88  c70628a18b00         mov dword ptr [esi], 0x8ba128
// 004a4b8e  ff15c0e48900         call dword ptr [0x89e4c0]
// 004a4b94  8b4c2408             mov ecx, dword ptr [esp + 8]
// 004a4b98  c7462000000000       mov dword ptr [esi + 0x20], 0
// 004a4b9f  8bc6                 mov eax, esi
// 004a4ba1  5e                   pop esi
// 004a4ba2  64890d00000000       mov dword ptr fs:[0], ecx
// 004a4ba9  83c410               add esp, 0x10
// 004a4bac  c3                   ret 
// library g3d-6.09/GLG3Dcpp\TextureManager.cpp (function ??0TextureArgs@TextureManager@G3D@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/TextureManager.cpp
