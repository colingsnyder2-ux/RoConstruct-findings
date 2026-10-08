// roc 2007-03 00773f70  unit: seg_00770000  size: 43 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00773f70
//
// 00773f70  33c9                 xor ecx, ecx
// 00773f72  51                   push ecx
// 00773f73  51                   push ecx
// 00773f74  b880f05900           mov eax, 0x59f080
// 00773f79  50                   push eax
// 00773f7a  51                   push ecx
// 00773f7b  6870a77900           push 0x79a770
// 00773f80  6820a17800           push 0x78a120
// 00773f85  b924eb8b00           mov ecx, 0x8beb24
// 00773f8a  e811a8e2ff           call 0x59e7a0
// 00773f8f  6870aa7700           push 0x77aa70
// 00773f94  e81ab2eaff           call 0x61f1b3
// 00773f99  59                   pop ecx
// 00773f9a  c3                   ret 
// library rbxgs/v8datamodel\Hopper.cpp (function ??__Edesc_legacyCommand@RBX@@YAXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Hopper.cpp
