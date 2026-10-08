// roc 2009-12 004d5700  unit: std::D::DU?$char_traits::V?$basic_string::?$Set  size: 45 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 004d5700
//
// 004d5700  56                   push esi
// 004d5701  8bf1                 mov esi, ecx
// 004d5703  8d4e04               lea ecx, [esi + 4]
// 004d5706  c7069c789b00         mov dword ptr [esi], 0x9b789c
// 004d570c  c701a4659b00         mov dword ptr [ecx], 0x9b65a4
// 004d5712  e8f9edffff           call 0x4d4510
// 004d5717  f644240801           test byte ptr [esp + 8], 1
// 004d571c  7409                 je 0x4d5727
// 004d571e  56                   push esi
// 004d571f  e836e13100           call 0x7f385a
// 004d5724  83c404               add esp, 4
// 004d5727  8bc6                 mov eax, esi
// 004d5729  5e                   pop esi
// 004d572a  c20400               ret 4
// library g3d-6.09/G3Dcpp\MeshAlgWeld.cpp (function ??_G?$Set@PAV?$Array@H@G3D@@@G3D@@UAEPAXI@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/MeshAlgWeld.cpp
