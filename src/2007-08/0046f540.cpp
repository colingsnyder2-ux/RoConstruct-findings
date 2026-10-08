// from server: 100% by auto
// roc 2007-08 0046f540  unit: std::D::DU?$char_traits::V?$basic_string::?$Set  size: 45 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0046f540
//
// 0046f540  56                   push esi
// 0046f541  8bf1                 mov esi, ecx
// 0046f543  8d4e04               lea ecx, [esi + 4]
// 0046f546  c70644797900         mov dword ptr [esi], 0x797944
// 0046f54c  c701cc657900         mov dword ptr [ecx], 0x7965cc
// 0046f552  e8e9edffff           call 0x46e340
// 0046f557  f644240801           test byte ptr [esp + 8], 1
// 0046f55c  7409                 je 0x46f567
// 0046f55e  56                   push esi
// 0046f55f  e8fe061c00           call 0x62fc62
// 0046f564  83c404               add esp, 4
// 0046f567  8bc6                 mov eax, esi
// 0046f569  5e                   pop esi
// 0046f56a  c20400               ret 4
// library g3d-6.09/G3Dcpp\MeshAlgWeld.cpp (function ??_G?$Set@PAV?$Array@H@G3D@@@G3D@@UAEPAXI@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/MeshAlgWeld.cpp
