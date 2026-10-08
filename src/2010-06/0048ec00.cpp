// from server: 100% by auto
// roc 2010-06 0048ec00  unit: std::D::DU?$char_traits::V?$basic_string::?$Set  size: 45 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0048ec00
//
// 0048ec00  56                   push esi
// 0048ec01  8bf1                 mov esi, ecx
// 0048ec03  8d4e04               lea ecx, [esi + 4]
// 0048ec06  c7066c50a100         mov dword ptr [esi], 0xa1506c
// 0048ec0c  c701f43ca100         mov dword ptr [ecx], 0xa13cf4
// 0048ec12  e8f9edffff           call 0x48da10
// 0048ec17  f644240801           test byte ptr [esp + 8], 1
// 0048ec1c  7409                 je 0x48ec27
// 0048ec1e  56                   push esi
// 0048ec1f  e8768d3100           call 0x7a799a
// 0048ec24  83c404               add esp, 4
// 0048ec27  8bc6                 mov eax, esi
// 0048ec29  5e                   pop esi
// 0048ec2a  c20400               ret 4
// library g3d-6.09/G3Dcpp\MeshAlgWeld.cpp (function ??_G?$Set@PAV?$Array@H@G3D@@@G3D@@UAEPAXI@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/MeshAlgWeld.cpp
