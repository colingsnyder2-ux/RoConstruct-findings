// from server: 100% by auto
// roc 2010-06 0071de50  unit: RBX::MouseCommand  size: 45 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0071de50
//
// 0071de50  56                   push esi
// 0071de51  8bf1                 mov esi, ecx
// 0071de53  8d4e04               lea ecx, [esi + 4]
// 0071de56  c70614cca400         mov dword ptr [esi], 0xa4cc14
// 0071de5c  c701fccba400         mov dword ptr [ecx], 0xa4cbfc
// 0071de62  e849821f00           call 0x9160b0
// 0071de67  f644240801           test byte ptr [esp + 8], 1
// 0071de6c  7409                 je 0x71de77
// 0071de6e  56                   push esi
// 0071de6f  e8269b0800           call 0x7a799a
// 0071de74  83c404               add esp, 4
// 0071de77  8bc6                 mov eax, esi
// 0071de79  5e                   pop esi
// 0071de7a  c20400               ret 4
// library g3d-6.09/G3Dcpp\MeshAlgWeld.cpp (function ??_G?$Set@PAV?$Array@H@G3D@@@G3D@@UAEPAXI@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/MeshAlgWeld.cpp
