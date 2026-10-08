// from server: 100% by auto
// roc 2009-06 006b5b80  unit: RBX::ScriptMouseCommand  size: 20 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006b5b80
//
// 006b5b80  c70164ac8e00         mov dword ptr [ecx], 0x8eac64
// 006b5b86  83c104               add ecx, 4
// 006b5b89  c7014cac8e00         mov dword ptr [ecx], 0x8eac4c
// 006b5b8f  e94ceefbff           jmp 0x6749e0
// library g3d-6.09/G3Dcpp\MeshAlgWeld.cpp (function ??1?$Set@PAV?$Array@H@G3D@@@G3D@@UAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/MeshAlgWeld.cpp
