// from server: 100% by auto
// roc 2010-06 00488700  unit: G3D::GWindow  size: 70 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00488700
//
// 00488700  56                   push esi
// 00488701  8bf1                 mov esi, ecx
// 00488703  57                   push edi
// 00488704  c706cc35a100         mov dword ptr [esi], 0xa135cc
// 0048870a  33ff                 xor edi, edi
// 0048870c  3935743cc000         cmp dword ptr [0xc03c74], esi
// 00488712  7506                 jne 0x48871a
// 00488714  893d743cc000         mov dword ptr [0xc03c74], edi
// 0048871a  8b4604               mov eax, dword ptr [esi + 4]
// 0048871d  50                   push eax
// 0048871e  e89d520c00           call 0x54d9c0
// 00488723  83c404               add esp, 4
// 00488726  f644240c01           test byte ptr [esp + 0xc], 1
// 0048872b  897e04               mov dword ptr [esi + 4], edi
// 0048872e  897e08               mov dword ptr [esi + 8], edi
// 00488731  897e0c               mov dword ptr [esi + 0xc], edi
// 00488734  7409                 je 0x48873f
// 00488736  56                   push esi
// 00488737  e85ef23100           call 0x7a799a
// 0048873c  83c404               add esp, 4
// 0048873f  5f                   pop edi
// 00488740  8bc6                 mov eax, esi
// 00488742  5e                   pop esi
// 00488743  c20400               ret 4
// library g3d-6.09/GLG3Dcpp\SDLWindow.cpp (function ??_GGWindow@G3D@@UAEPAXI@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/SDLWindow.cpp
