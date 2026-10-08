// roc 2009-06 00690810  unit: RBX::VBlockMesh::?$FactoryProduct  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00690810
//
// 00690810  8b442404             mov eax, dword ptr [esp + 4]
// 00690814  6a00                 push 0
// 00690816  6850f99d00           push 0x9df950
// 0069081b  6840be9d00           push 0x9dbe40
// 00690820  6a00                 push 0
// 00690822  50                   push eax
// 00690823  e852940800           call 0x719c7a
// 00690828  83c414               add esp, 0x14
// 0069082b  f7d8                 neg eax
// 0069082d  1bc0                 sbb eax, eax
// 0069082f  f7d8                 neg eax
// 00690831  c20400               ret 4
// library rbxgs/v8datamodel\FaceInstance.cpp (function ?askSetParent@FaceInstance@RBX@@MBE_NPBVInstance@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/FaceInstance.cpp
