// roc 2010-06 00526830  unit: G3D::_WeakPtr  size: 74 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00526830
//
// 00526830  6aff                 push -1
// 00526832  6888e39800           push 0x98e388
// 00526837  64a100000000         mov eax, dword ptr fs:[0]
// 0052683d  50                   push eax
// 0052683e  64892500000000       mov dword ptr fs:[0], esp
// 00526845  51                   push ecx
// 00526846  56                   push esi
// 00526847  8bf1                 mov esi, ecx
// 00526849  89742404             mov dword ptr [esp + 4], esi
// 0052684d  c70644e8a100         mov dword ptr [esi], 0xa1e844
// 00526853  8d4e04               lea ecx, [esi + 4]
// 00526856  c744241000000000     mov dword ptr [esp + 0x10], 0
// 0052685e  ff1500a49e00         call dword ptr [0x9ea400]
// 00526864  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00526868  c7062ce8a100         mov dword ptr [esi], 0xa1e82c
// 0052686e  5e                   pop esi
// 0052686f  64890d00000000       mov dword ptr fs:[0], ecx
// 00526876  83c410               add esp, 0x10
// 00526879  c3                   ret 
// library g3d-6.09/GLG3Dcpp\TextureManager.cpp (function ??1TextureArgs@TextureManager@G3D@@UAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/TextureManager.cpp
