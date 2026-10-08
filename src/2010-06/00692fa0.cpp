// roc 2010-06 00692fa0  unit: RBX::Lighting  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00692fa0
//
// 00692fa0  8b442404             mov eax, dword ptr [esp + 4]
// 00692fa4  6a00                 push 0
// 00692fa6  686cbcba00           push 0xbabc6c
// 00692fab  68408eb700           push 0xb78e40
// 00692fb0  6a00                 push 0
// 00692fb2  50                   push eax
// 00692fb3  e8325c1100           call 0x7a8bea
// 00692fb8  83c414               add esp, 0x14
// 00692fbb  f7d8                 neg eax
// 00692fbd  1bc0                 sbb eax, eax
// 00692fbf  f7d8                 neg eax
// 00692fc1  c20400               ret 4
// library rbxgs/v8datamodel\Lighting.cpp (function ?askAddChild@Lighting@RBX@@MBE_NPBVInstance@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Lighting.cpp
