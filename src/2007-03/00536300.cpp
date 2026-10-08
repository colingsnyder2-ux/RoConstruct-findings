// roc 2007-03 00536300  unit: seg_00530000  size: 81 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00536300
//
// 00536300  56                   push esi
// 00536301  8b742408             mov esi, dword ptr [esp + 8]
// 00536305  6a00                 push 0
// 00536307  6a00                 push 0
// 00536309  56                   push esi
// 0053630a  e8a1300800           call 0x5b93b0
// 0053630f  6a00                 push 0
// 00536311  6a00                 push 0
// 00536313  56                   push esi
// 00536314  e897300800           call 0x5b93b0
// 00536319  6a07                 push 7
// 0053631b  6874567a00           push 0x7a5674
// 00536320  56                   push esi
// 00536321  e85a2d0800           call 0x5b9080
// 00536326  68eed8ffff           push 0xffffd8ee
// 0053632b  56                   push esi
// 0053632c  e8df280800           call 0x5b8c10
// 00536331  6afd                 push -3
// 00536333  56                   push esi
// 00536334  e887310800           call 0x5b94c0
// 00536339  6afe                 push -2
// 0053633b  56                   push esi
// 0053633c  e8ef320800           call 0x5b9630
// 00536341  68eed8ffff           push 0xffffd8ee
// 00536346  56                   push esi
// 00536347  e804280800           call 0x5b8b50
// 0053634c  83c444               add esp, 0x44
// 0053634f  5e                   pop esi
// 00536350  c3                   ret 
// library rbxgs/script\ScriptContext.cpp (function ?sandboxThread@ScriptContext@RBX@@CAXPAUlua_State@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/ScriptContext.cpp
