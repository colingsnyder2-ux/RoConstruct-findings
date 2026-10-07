// roc 2008-06 00472880  unit: std::D::DU?$char_traits::V?$basic_string::?$Set  size: 45 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00472880
//
// 00472880  56                   push esi
// 00472881  8bf1                 mov esi, ecx
// 00472883  8d4e04               lea ecx, [esi + 4]
// 00472886  c70694e18100         mov dword ptr [esi], 0x81e194
// 0047288c  c7011cce8100         mov dword ptr [ecx], 0x81ce1c
// 00472892  e8f9edffff           call 0x471690
// 00472897  f644240801           test byte ptr [esp + 8], 1
// 0047289c  7409                 je 0x4728a7
// 0047289e  56                   push esi
// 0047289f  e8d6dd2200           call 0x6a067a
// 004728a4  83c404               add esp, 4
// 004728a7  8bc6                 mov eax, esi
// 004728a9  5e                   pop esi
// 004728aa  c20400               ret 4
// library g3d-6.09/G3Dcpp\MeshAlgWeld.cpp (function ??_G?$Set@PAV?$Array@H@G3D@@@G3D@@UAEPAXI@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/MeshAlgWeld.cpp
