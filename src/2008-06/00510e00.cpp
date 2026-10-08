// from server: 100% by auto
// roc 2008-06 00510e00  unit: G3D::GCamera  size: 67 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00510e00
//
// 00510e00  56                   push esi
// 00510e01  8bf1                 mov esi, ecx
// 00510e03  33c0                 xor eax, eax
// 00510e05  394604               cmp dword ptr [esi + 4], eax
// 00510e08  7e18                 jle 0x510e22
// 00510e0a  33c9                 xor ecx, ecx
// 00510e0c  babc828200           mov edx, 0x8282bc
// 00510e11  53                   push ebx
// 00510e12  8b1e                 mov ebx, dword ptr [esi]
// 00510e14  89541910             mov dword ptr [ecx + ebx + 0x10], edx
// 00510e18  40                   inc eax
// 00510e19  83c124               add ecx, 0x24
// 00510e1c  3b4604               cmp eax, dword ptr [esi + 4]
// 00510e1f  7cf1                 jl 0x510e12
// 00510e21  5b                   pop ebx
// 00510e22  8b06                 mov eax, dword ptr [esi]
// 00510e24  50                   push eax
// 00510e25  e8f66effff           call 0x507d20
// 00510e2a  83c404               add esp, 4
// 00510e2d  c70600000000         mov dword ptr [esi], 0
// 00510e33  c7460400000000       mov dword ptr [esi + 4], 0
// 00510e3a  c7460800000000       mov dword ptr [esi + 8], 0
// 00510e41  5e                   pop esi
// 00510e42  c3                   ret 
// library g3d-6.09/G3Dcpp\GCamera.cpp (function ??1?$Array@VFace@Frustum@GCamera@G3D@@@G3D@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/GCamera.cpp
