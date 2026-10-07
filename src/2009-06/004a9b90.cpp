// roc 2009-06 004a9b90  unit: G3D::GWindow  size: 70 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 004a9b90
//
// 004a9b90  56                   push esi
// 004a9b91  8bf1                 mov esi, ecx
// 004a9b93  57                   push edi
// 004a9b94  c706b4208c00         mov dword ptr [esi], 0x8c20b4
// 004a9b9a  33ff                 xor edi, edi
// 004a9b9c  393588c8a300         cmp dword ptr [0xa3c888], esi
// 004a9ba2  7506                 jne 0x4a9baa
// 004a9ba4  893d88c8a300         mov dword ptr [0xa3c888], edi
// 004a9baa  8b4604               mov eax, dword ptr [esi + 4]
// 004a9bad  50                   push eax
// 004a9bae  e8dd160c00           call 0x56b290
// 004a9bb3  83c404               add esp, 4
// 004a9bb6  f644240c01           test byte ptr [esp + 0xc], 1
// 004a9bbb  897e04               mov dword ptr [esi + 4], edi
// 004a9bbe  897e08               mov dword ptr [esi + 8], edi
// 004a9bc1  897e0c               mov dword ptr [esi + 0xc], edi
// 004a9bc4  7409                 je 0x4a9bcf
// 004a9bc6  56                   push esi
// 004a9bc7  e866ee2600           call 0x718a32
// 004a9bcc  83c404               add esp, 4
// 004a9bcf  5f                   pop edi
// 004a9bd0  8bc6                 mov eax, esi
// 004a9bd2  5e                   pop esi
// 004a9bd3  c20400               ret 4
// library g3d-6.09/GLG3Dcpp\SDLWindow.cpp (function ??_GGWindow@G3D@@UAEPAXI@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/SDLWindow.cpp
