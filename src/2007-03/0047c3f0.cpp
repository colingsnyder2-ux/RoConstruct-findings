// roc 2007-03 0047c3f0  unit: seg_00470000  size: 45 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0047c3f0
//
// 0047c3f0  56                   push esi
// 0047c3f1  8bf1                 mov esi, ecx
// 0047c3f3  8d4e04               lea ecx, [esi + 4]
// 0047c3f6  c706047d7900         mov dword ptr [esi], 0x797d04
// 0047c3fc  c701907b7900         mov dword ptr [ecx], 0x797b90
// 0047c402  e829edffff           call 0x47b130
// 0047c407  f644240801           test byte ptr [esp + 8], 1
// 0047c40c  7409                 je 0x47c417
// 0047c40e  56                   push esi
// 0047c40f  e8dc1c1a00           call 0x61e0f0
// 0047c414  83c404               add esp, 4
// 0047c417  8bc6                 mov eax, esi
// 0047c419  5e                   pop esi
// 0047c41a  c20400               ret 4
// library rbxgs-g3d/G3Dcpp\MeshAlgWeld.cpp (function ??_G?$Set@PAV?$Array@H@G3D@@@G3D@@UAEPAXI@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: rbxgs-g3d G3Dcpp/MeshAlgWeld.cpp
