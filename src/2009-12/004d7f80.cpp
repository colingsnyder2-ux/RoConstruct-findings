// roc 2009-12 004d7f80  unit: G3D::H::?$Set  size: 45 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 004d7f80
//
// 004d7f80  56                   push esi
// 004d7f81  8bf1                 mov esi, ecx
// 004d7f83  8d4e04               lea ecx, [esi + 4]
// 004d7f86  c706ac7b9b00         mov dword ptr [esi], 0x9b7bac
// 004d7f8c  c70190799b00         mov dword ptr [ecx], 0x9b7990
// 004d7f92  e84949ffff           call 0x4cc8e0
// 004d7f97  f644240801           test byte ptr [esp + 8], 1
// 004d7f9c  7409                 je 0x4d7fa7
// 004d7f9e  56                   push esi
// 004d7f9f  e8b6b83100           call 0x7f385a
// 004d7fa4  83c404               add esp, 4
// 004d7fa7  8bc6                 mov eax, esi
// 004d7fa9  5e                   pop esi
// 004d7faa  c20400               ret 4
// library g3d-6.09/G3Dcpp\MeshAlgWeld.cpp (function ??_G?$Set@PAV?$Array@H@G3D@@@G3D@@UAEPAXI@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/MeshAlgWeld.cpp
