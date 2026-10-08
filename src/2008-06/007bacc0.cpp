// from server: 100% by auto
// roc 2008-06 007bacc0  unit: G3D::H::PAV?$Array::?$Set  size: 45 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007bacc0
//
// 007bacc0  56                   push esi
// 007bacc1  8bf1                 mov esi, ecx
// 007bacc3  8d4e04               lea ecx, [esi + 4]
// 007bacc6  c706545d8700         mov dword ptr [esi], 0x875d54
// 007baccc  c7014c5d8700         mov dword ptr [ecx], 0x875d4c
// 007bacd2  e84954ccff           call 0x480120
// 007bacd7  f644240801           test byte ptr [esp + 8], 1
// 007bacdc  7409                 je 0x7bace7
// 007bacde  56                   push esi
// 007bacdf  e89659eeff           call 0x6a067a
// 007bace4  83c404               add esp, 4
// 007bace7  8bc6                 mov eax, esi
// 007bace9  5e                   pop esi
// 007bacea  c20400               ret 4
// library g3d-6.09/G3Dcpp\MeshAlgWeld.cpp (function ??_G?$Set@PAV?$Array@H@G3D@@@G3D@@UAEPAXI@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/MeshAlgWeld.cpp
