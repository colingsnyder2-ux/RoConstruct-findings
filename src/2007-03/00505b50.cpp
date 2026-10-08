// roc 2007-03 00505b50  unit: seg_00500000  size: 45 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00505b50
//
// 00505b50  56                   push esi
// 00505b51  8bf1                 mov esi, ecx
// 00505b53  8d4e04               lea ecx, [esi + 4]
// 00505b56  c7069c067a00         mov dword ptr [esi], 0x7a069c
// 00505b5c  c70194067a00         mov dword ptr [ecx], 0x7a0694
// 00505b62  e8c955f7ff           call 0x47b130
// 00505b67  f644240801           test byte ptr [esp + 8], 1
// 00505b6c  7409                 je 0x505b77
// 00505b6e  56                   push esi
// 00505b6f  e87c851100           call 0x61e0f0
// 00505b74  83c404               add esp, 4
// 00505b77  8bc6                 mov eax, esi
// 00505b79  5e                   pop esi
// 00505b7a  c20400               ret 4
// library rbxgs-g3d/G3Dcpp\MeshAlgWeld.cpp (function ??_G?$Set@PAV?$Array@H@G3D@@@G3D@@UAEPAXI@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: rbxgs-g3d G3Dcpp/MeshAlgWeld.cpp
