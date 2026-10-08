// roc 2010-06 0060a890  unit: std::strstream  size: 81 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0060a890
//
// 0060a890  56                   push esi
// 0060a891  8b742408             mov esi, dword ptr [esp + 8]
// 0060a895  6a00                 push 0
// 0060a897  6a00                 push 0
// 0060a899  56                   push esi
// 0060a89a  e8e16f1100           call 0x721880
// 0060a89f  6a00                 push 0
// 0060a8a1  6a00                 push 0
// 0060a8a3  56                   push esi
// 0060a8a4  e8d76f1100           call 0x721880
// 0060a8a9  6a07                 push 7
// 0060a8ab  687814a300           push 0xa31478
// 0060a8b0  56                   push esi
// 0060a8b1  e89a6c1100           call 0x721550
// 0060a8b6  68eed8ffff           push 0xffffd8ee
// 0060a8bb  56                   push esi
// 0060a8bc  e84f681100           call 0x721110
// 0060a8c1  6afd                 push -3
// 0060a8c3  56                   push esi
// 0060a8c4  e8e7701100           call 0x7219b0
// 0060a8c9  6afe                 push -2
// 0060a8cb  56                   push esi
// 0060a8cc  e85f721100           call 0x721b30
// 0060a8d1  68eed8ffff           push 0xffffd8ee
// 0060a8d6  56                   push esi
// 0060a8d7  e874671100           call 0x721050
// 0060a8dc  83c444               add esp, 0x44
// 0060a8df  5e                   pop esi
// 0060a8e0  c3                   ret 
// library rbxgs/script\ScriptContext.cpp (function ?sandboxThread@ScriptContext@RBX@@CAXPAUlua_State@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/ScriptContext.cpp
