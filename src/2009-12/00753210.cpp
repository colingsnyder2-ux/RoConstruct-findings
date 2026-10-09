// roc 2009-12 00753210  unit: RBX::VBlockMesh::?$FactoryProduct  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00753210
//
// 00753210  8b442404             mov eax, dword ptr [esp + 4]
// 00753214  6a00                 push 0
// 00753216  68583ab000           push 0xb03a58
// 0075321b  6840feaf00           push 0xaffe40
// 00753220  6a00                 push 0
// 00753222  50                   push eax
// 00753223  e882180a00           call 0x7f4aaa
// 00753228  83c414               add esp, 0x14
// 0075322b  f7d8                 neg eax
// 0075322d  1bc0                 sbb eax, eax
// 0075322f  f7d8                 neg eax
// 00753231  c20400               ret 4
// library rbxgs/v8datamodel\FaceInstance.cpp (function ?askSetParent@FaceInstance@RBX@@MBE_NPBVInstance@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/FaceInstance.cpp
