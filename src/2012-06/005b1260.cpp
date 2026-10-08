// from server: 100% by auto
// roc 2012-06 005b1260  unit: RBX::Network::ErrorCompPhysicsSender  size: 24 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 005b1260
//
// 005b1260  dd442404             fld qword ptr [esp + 4]
// 005b1264  83ec08               sub esp, 8
// 005b1267  dd1c24               fstp qword ptr [esp]
// 005b126a  ff15ac29b200         call dword ptr [0xb229ac]
// 005b1270  83c408               add esp, 8
// 005b1273  e938233d00           jmp 0x9835b0
// library g3d-6.09/G3Dcpp\BinaryOutput.cpp (function ?iCeil@G3D@@YAHN@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/BinaryOutput.cpp
