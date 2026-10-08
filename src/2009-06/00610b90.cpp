// roc 2009-06 00610b90  unit: RBX::Humanoid  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00610b90
//
// 00610b90  8b442404             mov eax, dword ptr [esp + 4]
// 00610b94  6a00                 push 0
// 00610b96  6888619e00           push 0x9e6188
// 00610b9b  6840be9d00           push 0x9dbe40
// 00610ba0  6a00                 push 0
// 00610ba2  50                   push eax
// 00610ba3  e8d2901000           call 0x719c7a
// 00610ba8  83c414               add esp, 0x14
// 00610bab  f7d8                 neg eax
// 00610bad  1bc0                 sbb eax, eax
// 00610baf  f7d8                 neg eax
// 00610bb1  c20400               ret 4
// library rbxgs/v8datamodel\ModelInstance.cpp (function ?askSetParent@ModelInstance@RBX@@MBE_NPBVInstance@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/ModelInstance.cpp
