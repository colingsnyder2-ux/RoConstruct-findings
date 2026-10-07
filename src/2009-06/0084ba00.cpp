// roc 2009-06 0084ba00  unit: G3D::H::PAV?$Array::?$Set  size: 45 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0084ba00
//
// 0084ba00  56                   push esi
// 0084ba01  8bf1                 mov esi, ecx
// 0084ba03  8d4e04               lea ecx, [esi + 4]
// 0084ba06  c706cc4c9200         mov dword ptr [esi], 0x924ccc
// 0084ba0c  c701c44c9200         mov dword ptr [ecx], 0x924cc4
// 0084ba12  e839f7ffff           call 0x84b150
// 0084ba17  f644240801           test byte ptr [esp + 8], 1
// 0084ba1c  7409                 je 0x84ba27
// 0084ba1e  56                   push esi
// 0084ba1f  e80ed0ecff           call 0x718a32
// 0084ba24  83c404               add esp, 4
// 0084ba27  8bc6                 mov eax, esi
// 0084ba29  5e                   pop esi
// 0084ba2a  c20400               ret 4
// library g3d-6.09/G3Dcpp\MeshAlgWeld.cpp (function ??_G?$Set@PAV?$Array@H@G3D@@@G3D@@UAEPAXI@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/MeshAlgWeld.cpp
