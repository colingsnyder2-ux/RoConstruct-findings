// roc 2009-06 004ab4b0  unit: G3D::H::?$Set  size: 45 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 004ab4b0
//
// 004ab4b0  56                   push esi
// 004ab4b1  8bf1                 mov esi, ecx
// 004ab4b3  8d4e04               lea ecx, [esi + 4]
// 004ab4b6  c706b4228c00         mov dword ptr [esi], 0x8c22b4
// 004ab4bc  c701a8208c00         mov dword ptr [ecx], 0x8c20a8
// 004ab4c2  e889fc3900           call 0x84b150
// 004ab4c7  f644240801           test byte ptr [esp + 8], 1
// 004ab4cc  7409                 je 0x4ab4d7
// 004ab4ce  56                   push esi
// 004ab4cf  e85ed52600           call 0x718a32
// 004ab4d4  83c404               add esp, 4
// 004ab4d7  8bc6                 mov eax, esi
// 004ab4d9  5e                   pop esi
// 004ab4da  c20400               ret 4
// library g3d-6.09/G3Dcpp\MeshAlgWeld.cpp (function ??_G?$Set@PAV?$Array@H@G3D@@@G3D@@UAEPAXI@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/MeshAlgWeld.cpp
