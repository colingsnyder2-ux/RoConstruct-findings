// roc 2011-06 006dea30  unit: RBX::VBlockMesh::?$FactoryProduct  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 006dea30
//
// 006dea30  8b442404             mov eax, dword ptr [esp + 4]
// 006dea34  6a00                 push 0
// 006dea36  68ecbec000           push 0xc0beec
// 006dea3b  68f871c000           push 0xc071f8
// 006dea40  6a00                 push 0
// 006dea42  50                   push eax
// 006dea43  e8a2c81200           call 0x80b2ea
// 006dea48  83c414               add esp, 0x14
// 006dea4b  f7d8                 neg eax
// 006dea4d  1bc0                 sbb eax, eax
// 006dea4f  f7d8                 neg eax
// 006dea51  c20400               ret 4
// library rbxgs/v8datamodel\FaceInstance.cpp (function ?askSetParent@FaceInstance@RBX@@MBE_NPBVInstance@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/FaceInstance.cpp
