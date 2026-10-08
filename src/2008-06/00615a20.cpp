// from server: 100% by auto
// roc 2008-06 00615a20  unit: RBX::MouseCommand  size: 45 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00615a20
//
// 00615a20  56                   push esi
// 00615a21  8bf1                 mov esi, ecx
// 00615a23  8d4e04               lea ecx, [esi + 4]
// 00615a26  c706fc398400         mov dword ptr [esi], 0x8439fc
// 00615a2c  c701e0398400         mov dword ptr [ecx], 0x8439e0
// 00615a32  e8d979e6ff           call 0x47d410
// 00615a37  f644240801           test byte ptr [esp + 8], 1
// 00615a3c  7409                 je 0x615a47
// 00615a3e  56                   push esi
// 00615a3f  e836ac0800           call 0x6a067a
// 00615a44  83c404               add esp, 4
// 00615a47  8bc6                 mov eax, esi
// 00615a49  5e                   pop esi
// 00615a4a  c20400               ret 4
// library g3d-6.09/G3Dcpp\MeshAlgWeld.cpp (function ??_G?$Set@PAV?$Array@H@G3D@@@G3D@@UAEPAXI@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/MeshAlgWeld.cpp
