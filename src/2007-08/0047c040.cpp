// from server: 100% by auto
// roc 2007-08 0047c040  unit: G3D::Win32Window  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0047c040
//
// 0047c040  56                   push esi
// 0047c041  8bf1                 mov esi, ecx
// 0047c043  8b06                 mov eax, dword ptr [esi]
// 0047c045  50                   push eax
// 0047c046  e8c5370800           call 0x4ff810
// 0047c04b  33c0                 xor eax, eax
// 0047c04d  83c404               add esp, 4
// 0047c050  8906                 mov dword ptr [esi], eax
// 0047c052  894604               mov dword ptr [esi + 4], eax
// 0047c055  894608               mov dword ptr [esi + 8], eax
// 0047c058  5e                   pop esi
// 0047c059  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Texture.cpp (function ??1?$Array@E@G3D@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Texture.cpp
