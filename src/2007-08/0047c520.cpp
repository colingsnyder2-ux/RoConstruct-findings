// roc 2007-08 0047c520  unit: G3D::GWindow  size: 70 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0047c520
//
// 0047c520  56                   push esi
// 0047c521  8bf1                 mov esi, ecx
// 0047c523  57                   push edi
// 0047c524  c706ec887900         mov dword ptr [esi], 0x7988ec
// 0047c52a  33ff                 xor edi, edi
// 0047c52c  3935d8d08b00         cmp dword ptr [0x8bd0d8], esi
// 0047c532  7506                 jne 0x47c53a
// 0047c534  893dd8d08b00         mov dword ptr [0x8bd0d8], edi
// 0047c53a  8b4604               mov eax, dword ptr [esi + 4]
// 0047c53d  50                   push eax
// 0047c53e  e8cd320800           call 0x4ff810
// 0047c543  83c404               add esp, 4
// 0047c546  f644240c01           test byte ptr [esp + 0xc], 1
// 0047c54b  897e04               mov dword ptr [esi + 4], edi
// 0047c54e  897e08               mov dword ptr [esi + 8], edi
// 0047c551  897e0c               mov dword ptr [esi + 0xc], edi
// 0047c554  7409                 je 0x47c55f
// 0047c556  56                   push esi
// 0047c557  e806371b00           call 0x62fc62
// 0047c55c  83c404               add esp, 4
// 0047c55f  5f                   pop edi
// 0047c560  8bc6                 mov eax, esi
// 0047c562  5e                   pop esi
// 0047c563  c20400               ret 4
// library g3d-6.09/GLG3Dcpp\SDLWindow.cpp (function ??_GGWindow@G3D@@UAEPAXI@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/SDLWindow.cpp
