// roc 2009-06 0062ae30  unit: RBX::Workspace  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0062ae30
//
// 0062ae30  8b442404             mov eax, dword ptr [esp + 4]
// 0062ae34  6a00                 push 0
// 0062ae36  68e0289f00           push 0x9f28e0
// 0062ae3b  6840be9d00           push 0x9dbe40
// 0062ae40  6a00                 push 0
// 0062ae42  50                   push eax
// 0062ae43  e832ee0e00           call 0x719c7a
// 0062ae48  83c414               add esp, 0x14
// 0062ae4b  f7d8                 neg eax
// 0062ae4d  1bc0                 sbb eax, eax
// 0062ae4f  f7d8                 neg eax
// 0062ae51  c20400               ret 4
// library rbxgs/v8datamodel\Workspace.cpp (function ?askAddChild@Workspace@RBX@@EBE_NPBVInstance@2@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Workspace.cpp
