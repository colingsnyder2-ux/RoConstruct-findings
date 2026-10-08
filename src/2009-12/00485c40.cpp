// roc 2009-12 00485c40  unit: Ogre::GfxClustererPart  size: 67 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00485c40
//
// 00485c40  56                   push esi
// 00485c41  8bf1                 mov esi, ecx
// 00485c43  33c0                 xor eax, eax
// 00485c45  394604               cmp dword ptr [esi + 4], eax
// 00485c48  7e18                 jle 0x485c62
// 00485c4a  33c9                 xor ecx, ecx
// 00485c4c  bae4269b00           mov edx, 0x9b26e4
// 00485c51  53                   push ebx
// 00485c52  8b1e                 mov ebx, dword ptr [esi]
// 00485c54  89541910             mov dword ptr [ecx + ebx + 0x10], edx
// 00485c58  40                   inc eax
// 00485c59  83c124               add ecx, 0x24
// 00485c5c  3b4604               cmp eax, dword ptr [esi + 4]
// 00485c5f  7cf1                 jl 0x485c52
// 00485c61  5b                   pop ebx
// 00485c62  8b06                 mov eax, dword ptr [esi]
// 00485c64  50                   push eax
// 00485c65  e876471600           call 0x5ea3e0
// 00485c6a  83c404               add esp, 4
// 00485c6d  c70600000000         mov dword ptr [esi], 0
// 00485c73  c7460400000000       mov dword ptr [esi + 4], 0
// 00485c7a  c7460800000000       mov dword ptr [esi + 8], 0
// 00485c81  5e                   pop esi
// 00485c82  c3                   ret 
// library g3d-6.09/G3Dcpp\GCamera.cpp (function ??1?$Array@VFace@Frustum@GCamera@G3D@@@G3D@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/GCamera.cpp
