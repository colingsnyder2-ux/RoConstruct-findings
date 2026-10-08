// from server: 100% by auto
// roc 2010-06 0048a110  unit: G3D::H::?$Set  size: 45 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0048a110
//
// 0048a110  56                   push esi
// 0048a111  8bf1                 mov esi, ecx
// 0048a113  8d4e04               lea ecx, [esi + 4]
// 0048a116  c7066c38a100         mov dword ptr [esi], 0xa1386c
// 0048a11c  c701c435a100         mov dword ptr [ecx], 0xa135c4
// 0048a122  e8f9ebffff           call 0x488d20
// 0048a127  f644240801           test byte ptr [esp + 8], 1
// 0048a12c  7409                 je 0x48a137
// 0048a12e  56                   push esi
// 0048a12f  e866d83100           call 0x7a799a
// 0048a134  83c404               add esp, 4
// 0048a137  8bc6                 mov eax, esi
// 0048a139  5e                   pop esi
// 0048a13a  c20400               ret 4
// library g3d-6.09/G3Dcpp\MeshAlgWeld.cpp (function ??_G?$Set@PAV?$Array@H@G3D@@@G3D@@UAEPAXI@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/MeshAlgWeld.cpp
