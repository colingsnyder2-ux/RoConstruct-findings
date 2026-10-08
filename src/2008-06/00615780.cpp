// from server: 100% by auto
// roc 2008-06 00615780  unit: RBX::VContentId::?$TypedPropertyDescriptor  size: 20 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00615780
//
// 00615780  c701fc398400         mov dword ptr [ecx], 0x8439fc
// 00615786  83c104               add ecx, 4
// 00615789  c701e0398400         mov dword ptr [ecx], 0x8439e0
// 0061578f  e97c7ce6ff           jmp 0x47d410
// library g3d-6.09/G3Dcpp\MeshAlgWeld.cpp (function ??1?$Set@PAV?$Array@H@G3D@@@G3D@@UAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/MeshAlgWeld.cpp
