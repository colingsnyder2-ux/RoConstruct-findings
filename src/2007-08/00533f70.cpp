// roc 2007-08 00533f70  unit: RBX::Selection  size: 81 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00533f70
//
// 00533f70  56                   push esi
// 00533f71  8b742408             mov esi, dword ptr [esp + 8]
// 00533f75  6a00                 push 0
// 00533f77  6a00                 push 0
// 00533f79  56                   push esi
// 00533f7a  e8619f0800           call 0x5bdee0
// 00533f7f  6a00                 push 0
// 00533f81  6a00                 push 0
// 00533f83  56                   push esi
// 00533f84  e8579f0800           call 0x5bdee0
// 00533f89  6a07                 push 7
// 00533f8b  6874567a00           push 0x7a5674
// 00533f90  56                   push esi
// 00533f91  e81a9c0800           call 0x5bdbb0
// 00533f96  68eed8ffff           push 0xffffd8ee
// 00533f9b  56                   push esi
// 00533f9c  e89f970800           call 0x5bd740
// 00533fa1  6afd                 push -3
// 00533fa3  56                   push esi
// 00533fa4  e847a00800           call 0x5bdff0
// 00533fa9  6afe                 push -2
// 00533fab  56                   push esi
// 00533fac  e8afa10800           call 0x5be160
// 00533fb1  68eed8ffff           push 0xffffd8ee
// 00533fb6  56                   push esi
// 00533fb7  e8c4960800           call 0x5bd680
// 00533fbc  83c444               add esp, 0x44
// 00533fbf  5e                   pop esi
// 00533fc0  c3                   ret 
// library rbxgs/script\ScriptContext.cpp (function ?sandboxThread@ScriptContext@RBX@@CAXPAUlua_State@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/ScriptContext.cpp
