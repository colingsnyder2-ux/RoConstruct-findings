// roc 2009-12 00462ac0  unit: CRobloxWnd::PartDropTarget  size: 133 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00462ac0
//
// 00462ac0  6aff                 push -1
// 00462ac2  68d0cc9200           push 0x92ccd0
// 00462ac7  64a100000000         mov eax, dword ptr fs:[0]
// 00462acd  50                   push eax
// 00462ace  64892500000000       mov dword ptr fs:[0], esp
// 00462ad5  51                   push ecx
// 00462ad6  56                   push esi
// 00462ad7  8bf1                 mov esi, ecx
// 00462ad9  89742404             mov dword ptr [esp + 4], esi
// 00462add  8b4638               mov eax, dword ptr [esi + 0x38]
// 00462ae0  c744241000000000     mov dword ptr [esp + 0x10], 0
// 00462ae8  85c0                 test eax, eax
// 00462aea  742c                 je 0x462b18
// 00462aec  83c004               add eax, 4
// 00462aef  50                   push eax
// 00462af0  ff1508b29800         call dword ptr [0x98b208]
// 00462af6  85c0                 test eax, eax
// 00462af8  7517                 jne 0x462b11
// 00462afa  8b4e38               mov ecx, dword ptr [esi + 0x38]
// 00462afd  e81e85feff           call 0x44b020
// 00462b02  8b4e38               mov ecx, dword ptr [esi + 0x38]
// 00462b05  85c9                 test ecx, ecx
// 00462b07  7408                 je 0x462b11
// 00462b09  8b01                 mov eax, dword ptr [ecx]
// 00462b0b  8b10                 mov edx, dword ptr [eax]
// 00462b0d  6a01                 push 1
// 00462b0f  ffd2                 call edx
// 00462b11  c7463800000000       mov dword ptr [esi + 0x38], 0
// 00462b18  c70620e69a00         mov dword ptr [esi], 0x9ae620
// 00462b1e  8d4e04               lea ecx, [esi + 4]
// 00462b21  c744241001000000     mov dword ptr [esp + 0x10], 1
// 00462b29  ff15e4b69800         call dword ptr [0x98b6e4]
// 00462b2f  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00462b33  c70608e69a00         mov dword ptr [esi], 0x9ae608
// 00462b39  5e                   pop esi
// 00462b3a  64890d00000000       mov dword ptr fs:[0], ecx
// 00462b41  83c410               add esp, 0x10
// 00462b44  c3                   ret 
// library g3d-6.09/GLG3Dcpp\TextureManager.cpp (function ??1Entry@?$Table@VTextureArgs@TextureManager@G3D@@V?$ReferenceCountedPointer@VTexture@G3D@@@3@@G3D@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: g3d-6.09 GLG3Dcpp/TextureManager.cpp
