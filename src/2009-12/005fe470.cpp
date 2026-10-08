// roc 2009-12 005fe470  unit: G3D::H::PAV?$Array::?$Set  size: 45 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 005fe470
//
// 005fe470  56                   push esi
// 005fe471  8bf1                 mov esi, ecx
// 005fe473  8d4e04               lea ecx, [esi + 4]
// 005fe476  c706dc2e9c00         mov dword ptr [esi], 0x9c2edc
// 005fe47c  c701d42e9c00         mov dword ptr [ecx], 0x9c2ed4
// 005fe482  e859e4ecff           call 0x4cc8e0
// 005fe487  f644240801           test byte ptr [esp + 8], 1
// 005fe48c  7409                 je 0x5fe497
// 005fe48e  56                   push esi
// 005fe48f  e8c6531f00           call 0x7f385a
// 005fe494  83c404               add esp, 4
// 005fe497  8bc6                 mov eax, esi
// 005fe499  5e                   pop esi
// 005fe49a  c20400               ret 4
// library g3d-6.09/G3Dcpp\MeshAlgWeld.cpp (function ??_G?$Set@PAV?$Array@H@G3D@@@G3D@@UAEPAXI@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/MeshAlgWeld.cpp
