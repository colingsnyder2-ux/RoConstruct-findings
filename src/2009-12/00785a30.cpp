// roc 2009-12 00785a30  unit: RBX::MouseCommand  size: 45 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00785a30
//
// 00785a30  56                   push esi
// 00785a31  8bf1                 mov esi, ecx
// 00785a33  8d4e04               lea ecx, [esi + 4]
// 00785a36  c706249a9e00         mov dword ptr [esi], 0x9e9a24
// 00785a3c  c7010c9a9e00         mov dword ptr [ecx], 0x9e9a0c
// 00785a42  e8692f1900           call 0x9189b0
// 00785a47  f644240801           test byte ptr [esp + 8], 1
// 00785a4c  7409                 je 0x785a57
// 00785a4e  56                   push esi
// 00785a4f  e806de0600           call 0x7f385a
// 00785a54  83c404               add esp, 4
// 00785a57  8bc6                 mov eax, esi
// 00785a59  5e                   pop esi
// 00785a5a  c20400               ret 4
// library g3d-6.09/G3Dcpp\MeshAlgWeld.cpp (function ??_G?$Set@PAV?$Array@H@G3D@@@G3D@@UAEPAXI@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/MeshAlgWeld.cpp
