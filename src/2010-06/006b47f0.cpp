// roc 2010-06 006b47f0  unit: RBX::VBlockMesh::?$FactoryProduct  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 006b47f0
//
// 006b47f0  8b442404             mov eax, dword ptr [esp + 4]
// 006b47f4  6a00                 push 0
// 006b47f6  68c0c8b700           push 0xb7c8c0
// 006b47fb  68408eb700           push 0xb78e40
// 006b4800  6a00                 push 0
// 006b4802  50                   push eax
// 006b4803  e8e2430f00           call 0x7a8bea
// 006b4808  83c414               add esp, 0x14
// 006b480b  f7d8                 neg eax
// 006b480d  1bc0                 sbb eax, eax
// 006b480f  f7d8                 neg eax
// 006b4811  c20400               ret 4
// library rbxgs/v8datamodel\FaceInstance.cpp (function ?askSetParent@FaceInstance@RBX@@MBE_NPBVInstance@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/FaceInstance.cpp
