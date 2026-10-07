// roc 2009-06 006b5de0  unit: RBX::MouseCommand  size: 45 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006b5de0
//
// 006b5de0  56                   push esi
// 006b5de1  8bf1                 mov esi, ecx
// 006b5de3  8d4e04               lea ecx, [esi + 4]
// 006b5de6  c70664ac8e00         mov dword ptr [esi], 0x8eac64
// 006b5dec  c7014cac8e00         mov dword ptr [ecx], 0x8eac4c
// 006b5df2  e8e9ebfbff           call 0x6749e0
// 006b5df7  f644240801           test byte ptr [esp + 8], 1
// 006b5dfc  7409                 je 0x6b5e07
// 006b5dfe  56                   push esi
// 006b5dff  e82e2c0600           call 0x718a32
// 006b5e04  83c404               add esp, 4
// 006b5e07  8bc6                 mov eax, esi
// 006b5e09  5e                   pop esi
// 006b5e0a  c20400               ret 4
// library g3d-6.09/G3Dcpp\MeshAlgWeld.cpp (function ??_G?$Set@PAV?$Array@H@G3D@@@G3D@@UAEPAXI@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/MeshAlgWeld.cpp
