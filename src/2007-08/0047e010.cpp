// roc 2007-08 0047e010  unit: G3D::H::?$Set  size: 45 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0047e010
//
// 0047e010  56                   push esi
// 0047e011  8bf1                 mov esi, ecx
// 0047e013  8d4e04               lea ecx, [esi + 4]
// 0047e016  c7063c8b7900         mov dword ptr [esi], 0x798b3c
// 0047e01c  c701e0887900         mov dword ptr [ecx], 0x7988e0
// 0047e022  e8292a0900           call 0x510a50
// 0047e027  f644240801           test byte ptr [esp + 8], 1
// 0047e02c  7409                 je 0x47e037
// 0047e02e  56                   push esi
// 0047e02f  e82e1c1b00           call 0x62fc62
// 0047e034  83c404               add esp, 4
// 0047e037  8bc6                 mov eax, esi
// 0047e039  5e                   pop esi
// 0047e03a  c20400               ret 4
// library g3d-6.09/G3Dcpp\MeshAlgWeld.cpp (function ??_G?$Set@PAV?$Array@H@G3D@@@G3D@@UAEPAXI@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/MeshAlgWeld.cpp
