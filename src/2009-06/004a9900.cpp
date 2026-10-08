// from server: 100% by auto
// roc 2009-06 004a9900  unit: G3D::Win32Window  size: 50 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 004a9900
//
// 004a9900  56                   push esi
// 004a9901  8bf1                 mov esi, ecx
// 004a9903  57                   push edi
// 004a9904  c706b4208c00         mov dword ptr [esi], 0x8c20b4
// 004a990a  33ff                 xor edi, edi
// 004a990c  393588c8a300         cmp dword ptr [0xa3c888], esi
// 004a9912  7506                 jne 0x4a991a
// 004a9914  893d88c8a300         mov dword ptr [0xa3c888], edi
// 004a991a  8b4604               mov eax, dword ptr [esi + 4]
// 004a991d  50                   push eax
// 004a991e  e86d190c00           call 0x56b290
// 004a9923  83c404               add esp, 4
// 004a9926  897e04               mov dword ptr [esi + 4], edi
// 004a9929  897e08               mov dword ptr [esi + 8], edi
// 004a992c  897e0c               mov dword ptr [esi + 0xc], edi
// 004a992f  5f                   pop edi
// 004a9930  5e                   pop esi
// 004a9931  c3                   ret 
// library g3d-6.09/GLG3Dcpp\SDLWindow.cpp (function ??1GWindow@G3D@@UAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/SDLWindow.cpp
