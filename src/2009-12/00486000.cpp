// roc 2009-12 00486000  unit: Ogre::GfxClustererPart  size: 100 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00486000
//
// 00486000  6aff                 push -1
// 00486002  68e89a9300           push 0x939ae8
// 00486007  64a100000000         mov eax, dword ptr fs:[0]
// 0048600d  50                   push eax
// 0048600e  64892500000000       mov dword ptr fs:[0], esp
// 00486015  51                   push ecx
// 00486016  56                   push esi
// 00486017  8bf1                 mov esi, ecx
// 00486019  89742404             mov dword ptr [esp + 4], esi
// 0048601d  8d4e0c               lea ecx, [esi + 0xc]
// 00486020  c744241000000000     mov dword ptr [esp + 0x10], 0
// 00486028  e813fcffff           call 0x485c40
// 0048602d  8b06                 mov eax, dword ptr [esi]
// 0048602f  50                   push eax
// 00486030  c7442414ffffffff     mov dword ptr [esp + 0x14], 0xffffffff
// 00486038  e8a3431600           call 0x5ea3e0
// 0048603d  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00486041  83c404               add esp, 4
// 00486044  c70600000000         mov dword ptr [esi], 0
// 0048604a  c7460400000000       mov dword ptr [esi + 4], 0
// 00486051  c7460800000000       mov dword ptr [esi + 8], 0
// 00486058  5e                   pop esi
// 00486059  64890d00000000       mov dword ptr fs:[0], ecx
// 00486060  83c410               add esp, 0x10
// 00486063  c3                   ret 
// library g3d-6.09/G3Dcpp\GCamera.cpp (function ??1Frustum@GCamera@G3D@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: g3d-6.09 G3Dcpp/GCamera.cpp
