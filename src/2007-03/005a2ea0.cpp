// roc 2007-03 005a2ea0  unit: seg_005a0000  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005a2ea0
//
// 005a2ea0  8b442404             mov eax, dword ptr [esp + 4]
// 005a2ea4  6a00                 push 0
// 005a2ea6  6848b68800           push 0x88b648
// 005a2eab  6864108800           push 0x881064
// 005a2eb0  6a00                 push 0
// 005a2eb2  50                   push eax
// 005a2eb3  e80ec30700           call 0x61f1c6
// 005a2eb8  83c414               add esp, 0x14
// 005a2ebb  f7d8                 neg eax
// 005a2ebd  1bc0                 sbb eax, eax
// 005a2ebf  f7d8                 neg eax
// 005a2ec1  c20400               ret 4
// library rbxgs/v8datamodel\ModelInstance.cpp (function ?askSetParent@ModelInstance@RBX@@MBE_NPBVInstance@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/ModelInstance.cpp
