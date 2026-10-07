// roc 2008-06 004815a0  unit: G3D::H::?$Set  size: 45 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004815a0
//
// 004815a0  56                   push esi
// 004815a1  8bf1                 mov esi, ecx
// 004815a3  8d4e04               lea ecx, [esi + 4]
// 004815a6  c70614f38100         mov dword ptr [esi], 0x81f314
// 004815ac  c701f8f08100         mov dword ptr [ecx], 0x81f0f8
// 004815b2  e869ebffff           call 0x480120
// 004815b7  f644240801           test byte ptr [esp + 8], 1
// 004815bc  7409                 je 0x4815c7
// 004815be  56                   push esi
// 004815bf  e8b6f02100           call 0x6a067a
// 004815c4  83c404               add esp, 4
// 004815c7  8bc6                 mov eax, esi
// 004815c9  5e                   pop esi
// 004815ca  c20400               ret 4
// library g3d-6.09/G3Dcpp\MeshAlgWeld.cpp (function ??_G?$Set@PAV?$Array@H@G3D@@@G3D@@UAEPAXI@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/MeshAlgWeld.cpp
