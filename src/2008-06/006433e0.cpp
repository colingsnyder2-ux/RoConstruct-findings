// from server: 100% by auto
// roc 2008-06 006433e0  unit: RBX::HUMAN::Landed  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006433e0
//
// 006433e0  56                   push esi
// 006433e1  8bf1                 mov esi, ecx
// 006433e3  8b06                 mov eax, dword ptr [esi]
// 006433e5  50                   push eax
// 006433e6  e83549ecff           call 0x507d20
// 006433eb  33c0                 xor eax, eax
// 006433ed  83c404               add esp, 4
// 006433f0  8906                 mov dword ptr [esi], eax
// 006433f2  894604               mov dword ptr [esi + 4], eax
// 006433f5  894608               mov dword ptr [esi + 8], eax
// 006433f8  5e                   pop esi
// 006433f9  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Texture.cpp (function ??1?$Array@E@G3D@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Texture.cpp
