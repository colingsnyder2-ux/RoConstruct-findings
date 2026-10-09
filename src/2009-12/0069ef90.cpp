// roc 2009-12 0069ef90  unit: std::strstream  size: 81 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0069ef90
//
// 0069ef90  56                   push esi
// 0069ef91  8b742408             mov esi, dword ptr [esp + 8]
// 0069ef95  6a00                 push 0
// 0069ef97  6a00                 push 0
// 0069ef99  56                   push esi
// 0069ef9a  e831a10e00           call 0x7890d0
// 0069ef9f  6a00                 push 0
// 0069efa1  6a00                 push 0
// 0069efa3  56                   push esi
// 0069efa4  e827a10e00           call 0x7890d0
// 0069efa9  6a07                 push 7
// 0069efab  68802a9d00           push 0x9d2a80
// 0069efb0  56                   push esi
// 0069efb1  e8ea9d0e00           call 0x788da0
// 0069efb6  68eed8ffff           push 0xffffd8ee
// 0069efbb  56                   push esi
// 0069efbc  e89f990e00           call 0x788960
// 0069efc1  6afd                 push -3
// 0069efc3  56                   push esi
// 0069efc4  e837a20e00           call 0x789200
// 0069efc9  6afe                 push -2
// 0069efcb  56                   push esi
// 0069efcc  e8afa30e00           call 0x789380
// 0069efd1  68eed8ffff           push 0xffffd8ee
// 0069efd6  56                   push esi
// 0069efd7  e8c4980e00           call 0x7888a0
// 0069efdc  83c444               add esp, 0x44
// 0069efdf  5e                   pop esi
// 0069efe0  c3                   ret 
// library rbxgs/script\ScriptContext.cpp (function ?sandboxThread@ScriptContext@RBX@@CAXPAUlua_State@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/ScriptContext.cpp
