// roc 2008-06 0062e190  unit: RBX::VDecal::?$FactoryProduct  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0062e190
//
// 0062e190  8b442404             mov eax, dword ptr [esp + 4]
// 0062e194  6a00                 push 0
// 0062e196  6850dd9200           push 0x92dd50
// 0062e19b  687c909200           push 0x92907c
// 0062e1a0  6a00                 push 0
// 0062e1a2  50                   push eax
// 0062e1a3  e81e360700           call 0x6a17c6
// 0062e1a8  83c414               add esp, 0x14
// 0062e1ab  f7d8                 neg eax
// 0062e1ad  1bc0                 sbb eax, eax
// 0062e1af  f7d8                 neg eax
// 0062e1b1  c20400               ret 4
// library rbxgs/v8datamodel\FaceInstance.cpp (function ?askSetParent@FaceInstance@RBX@@MBE_NPBVInstance@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/FaceInstance.cpp
