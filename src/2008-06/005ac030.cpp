// roc 2008-06 005ac030  unit: RBX::VScriptContext::?$FactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005ac030
//
// 005ac030  682cd19600           push 0x96d12c
// 005ac035  6890d04200           push 0x42d090
// 005ac03a  e8f1b2faff           call 0x557330
// 005ac03f  83c408               add esp, 8
// 005ac042  e9890ee8ff           jmp 0x42ced0
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
