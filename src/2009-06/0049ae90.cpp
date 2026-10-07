// roc 2009-06 0049ae90  unit: G3D::ReferenceCountedObject  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0049ae90
//
// 0049ae90  56                   push esi
// 0049ae91  8bf1                 mov esi, ecx
// 0049ae93  8b06                 mov eax, dword ptr [esi]
// 0049ae95  50                   push eax
// 0049ae96  e8f5030d00           call 0x56b290
// 0049ae9b  33c0                 xor eax, eax
// 0049ae9d  83c404               add esp, 4
// 0049aea0  8906                 mov dword ptr [esi], eax
// 0049aea2  894604               mov dword ptr [esi + 4], eax
// 0049aea5  894608               mov dword ptr [esi + 8], eax
// 0049aea8  5e                   pop esi
// 0049aea9  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Texture.cpp (function ??1?$Array@E@G3D@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Texture.cpp
