// roc 2007-03 00577ef0  unit: seg_00570000  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00577ef0
//
// 00577ef0  8b442404             mov eax, dword ptr [esp + 4]
// 00577ef4  6a00                 push 0
// 00577ef6  68e03b8800           push 0x883be0
// 00577efb  6864108800           push 0x881064
// 00577f00  6a00                 push 0
// 00577f02  50                   push eax
// 00577f03  e8be720a00           call 0x61f1c6
// 00577f08  83c414               add esp, 0x14
// 00577f0b  f7d8                 neg eax
// 00577f0d  1bc0                 sbb eax, eax
// 00577f0f  f7d8                 neg eax
// 00577f11  c20400               ret 4
// library rbxgs/v8datamodel\FaceInstance.cpp (function ?askSetParent@FaceInstance@RBX@@MBE_NPBVInstance@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/FaceInstance.cpp
