// roc 2007-03 0046f4c0  unit: seg_00460000  size: 45 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0046f4c0
//
// 0046f4c0  56                   push esi
// 0046f4c1  8bf1                 mov esi, ecx
// 0046f4c3  8d4e04               lea ecx, [esi + 4]
// 0046f4c6  c706546d7900         mov dword ptr [esi], 0x796d54
// 0046f4cc  c701dc597900         mov dword ptr [ecx], 0x7959dc
// 0046f4d2  e8e9edffff           call 0x46e2c0
// 0046f4d7  f644240801           test byte ptr [esp + 8], 1
// 0046f4dc  7409                 je 0x46f4e7
// 0046f4de  56                   push esi
// 0046f4df  e80cec1a00           call 0x61e0f0
// 0046f4e4  83c404               add esp, 4
// 0046f4e7  8bc6                 mov eax, esi
// 0046f4e9  5e                   pop esi
// 0046f4ea  c20400               ret 4
// library rbxgs-g3d/G3Dcpp\MeshAlgWeld.cpp (function ??_G?$Set@PAV?$Array@H@G3D@@@G3D@@UAEPAXI@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: rbxgs-g3d G3Dcpp/MeshAlgWeld.cpp
