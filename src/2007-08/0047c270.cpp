// roc 2007-08 0047c270  unit: G3D::Win32Window  size: 50 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0047c270
//
// 0047c270  56                   push esi
// 0047c271  8bf1                 mov esi, ecx
// 0047c273  57                   push edi
// 0047c274  c706ec887900         mov dword ptr [esi], 0x7988ec
// 0047c27a  33ff                 xor edi, edi
// 0047c27c  3935d8d08b00         cmp dword ptr [0x8bd0d8], esi
// 0047c282  7506                 jne 0x47c28a
// 0047c284  893dd8d08b00         mov dword ptr [0x8bd0d8], edi
// 0047c28a  8b4604               mov eax, dword ptr [esi + 4]
// 0047c28d  50                   push eax
// 0047c28e  e87d350800           call 0x4ff810
// 0047c293  83c404               add esp, 4
// 0047c296  897e04               mov dword ptr [esi + 4], edi
// 0047c299  897e08               mov dword ptr [esi + 8], edi
// 0047c29c  897e0c               mov dword ptr [esi + 0xc], edi
// 0047c29f  5f                   pop edi
// 0047c2a0  5e                   pop esi
// 0047c2a1  c3                   ret 
// library g3d-6.09/GLG3Dcpp\SDLWindow.cpp (function ??1GWindow@G3D@@UAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/SDLWindow.cpp
