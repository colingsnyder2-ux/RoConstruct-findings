// from server: 100% by auto
// roc 2011-06 0078be50  unit: RBX::MouseCommand  size: 45 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0078be50
//
// 0078be50  56                   push esi
// 0078be51  8bf1                 mov esi, ecx
// 0078be53  8d4e04               lea ecx, [esi + 4]
// 0078be56  c706149aab00         mov dword ptr [esi], 0xab9a14
// 0078be5c  c701ec99ab00         mov dword ptr [ecx], 0xab99ec
// 0078be62  e8a9e4dfff           call 0x58a310
// 0078be67  f644240801           test byte ptr [esp + 8], 1
// 0078be6c  7409                 je 0x78be77
// 0078be6e  56                   push esi
// 0078be6f  e8e4e10700           call 0x80a058
// 0078be74  83c404               add esp, 4
// 0078be77  8bc6                 mov eax, esi
// 0078be79  5e                   pop esi
// 0078be7a  c20400               ret 4
// library g3d-6.09/G3Dcpp\MeshAlgWeld.cpp (function ??_G?$Set@PAV?$Array@H@G3D@@@G3D@@UAEPAXI@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/MeshAlgWeld.cpp
