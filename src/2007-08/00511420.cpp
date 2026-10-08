// from server: 100% by auto
// roc 2007-08 00511420  unit: G3D::H::PAV?$Array::?$Set  size: 45 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00511420
//
// 00511420  56                   push esi
// 00511421  8bf1                 mov esi, ecx
// 00511423  8d4e04               lea ecx, [esi + 4]
// 00511426  c706d40e7a00         mov dword ptr [esi], 0x7a0ed4
// 0051142c  c701cc0e7a00         mov dword ptr [ecx], 0x7a0ecc
// 00511432  e819f6ffff           call 0x510a50
// 00511437  f644240801           test byte ptr [esp + 8], 1
// 0051143c  7409                 je 0x511447
// 0051143e  56                   push esi
// 0051143f  e81ee81100           call 0x62fc62
// 00511444  83c404               add esp, 4
// 00511447  8bc6                 mov eax, esi
// 00511449  5e                   pop esi
// 0051144a  c20400               ret 4
// library g3d-6.09/G3Dcpp\MeshAlgWeld.cpp (function ??_G?$Set@PAV?$Array@H@G3D@@@G3D@@UAEPAXI@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/MeshAlgWeld.cpp
