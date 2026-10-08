// roc 2009-12 004d1720  unit: G3D::TextureManager::TextureArgs  size: 77 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 004d1720
//
// 004d1720  6aff                 push -1
// 004d1722  6878339300           push 0x933378
// 004d1727  64a100000000         mov eax, dword ptr fs:[0]
// 004d172d  50                   push eax
// 004d172e  64892500000000       mov dword ptr fs:[0], esp
// 004d1735  51                   push ecx
// 004d1736  56                   push esi
// 004d1737  8bf1                 mov esi, ecx
// 004d1739  89742404             mov dword ptr [esp + 4], esi
// 004d173d  8d4e04               lea ecx, [esi + 4]
// 004d1740  c744241000000000     mov dword ptr [esp + 0x10], 0
// 004d1748  c70620e69a00         mov dword ptr [esi], 0x9ae620
// 004d174e  ff15e8b69800         call dword ptr [0x98b6e8]
// 004d1754  8b4c2408             mov ecx, dword ptr [esp + 8]
// 004d1758  c7462000000000       mov dword ptr [esi + 0x20], 0
// 004d175f  8bc6                 mov eax, esi
// 004d1761  5e                   pop esi
// 004d1762  64890d00000000       mov dword ptr fs:[0], ecx
// 004d1769  83c410               add esp, 0x10
// 004d176c  c3                   ret 
// library g3d-6.09/GLG3Dcpp\TextureManager.cpp (function ??0TextureArgs@TextureManager@G3D@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: g3d-6.09 GLG3Dcpp/TextureManager.cpp
