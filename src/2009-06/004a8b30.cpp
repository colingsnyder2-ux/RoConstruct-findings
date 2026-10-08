// from server: 100% by auto
// roc 2009-06 004a8b30  unit: std::D::DU?$char_traits::V?$basic_string::?$Set  size: 45 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 004a8b30
//
// 004a8b30  56                   push esi
// 004a8b31  8bf1                 mov esi, ecx
// 004a8b33  8d4e04               lea ecx, [esi + 4]
// 004a8b36  c706b41f8c00         mov dword ptr [esi], 0x8c1fb4
// 004a8b3c  c701bc0c8c00         mov dword ptr [ecx], 0x8c0cbc
// 004a8b42  e8f9edffff           call 0x4a7940
// 004a8b47  f644240801           test byte ptr [esp + 8], 1
// 004a8b4c  7409                 je 0x4a8b57
// 004a8b4e  56                   push esi
// 004a8b4f  e8defe2600           call 0x718a32
// 004a8b54  83c404               add esp, 4
// 004a8b57  8bc6                 mov eax, esi
// 004a8b59  5e                   pop esi
// 004a8b5a  c20400               ret 4
// library g3d-6.09/G3Dcpp\MeshAlgWeld.cpp (function ??_G?$Set@PAV?$Array@H@G3D@@@G3D@@UAEPAXI@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/MeshAlgWeld.cpp
