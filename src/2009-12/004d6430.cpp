// roc 2009-12 004d6430  unit: G3D::Win32Window  size: 50 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 004d6430
//
// 004d6430  56                   push esi
// 004d6431  8bf1                 mov esi, ecx
// 004d6433  57                   push edi
// 004d6434  c7069c799b00         mov dword ptr [esi], 0x9b799c
// 004d643a  33ff                 xor edi, edi
// 004d643c  393548d0b700         cmp dword ptr [0xb7d048], esi
// 004d6442  7506                 jne 0x4d644a
// 004d6444  893d48d0b700         mov dword ptr [0xb7d048], edi
// 004d644a  8b4604               mov eax, dword ptr [esi + 4]
// 004d644d  50                   push eax
// 004d644e  e88d3f1100           call 0x5ea3e0
// 004d6453  83c404               add esp, 4
// 004d6456  897e04               mov dword ptr [esi + 4], edi
// 004d6459  897e08               mov dword ptr [esi + 8], edi
// 004d645c  897e0c               mov dword ptr [esi + 0xc], edi
// 004d645f  5f                   pop edi
// 004d6460  5e                   pop esi
// 004d6461  c3                   ret 
// library g3d-6.09/GLG3Dcpp\SDLWindow.cpp (function ??1GWindow@G3D@@UAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/SDLWindow.cpp
