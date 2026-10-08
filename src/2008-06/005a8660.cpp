// roc 2008-06 005a8660  unit: RBX::Log  size: 81 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005a8660
//
// 005a8660  56                   push esi
// 005a8661  8b742408             mov esi, dword ptr [esp + 8]
// 005a8665  6a00                 push 0
// 005a8667  6a00                 push 0
// 005a8669  56                   push esi
// 005a866a  e8019f0600           call 0x612570
// 005a866f  6a00                 push 0
// 005a8671  6a00                 push 0
// 005a8673  56                   push esi
// 005a8674  e8f79e0600           call 0x612570
// 005a8679  6a07                 push 7
// 005a867b  6884438300           push 0x834384
// 005a8680  56                   push esi
// 005a8681  e8ba9b0600           call 0x612240
// 005a8686  68eed8ffff           push 0xffffd8ee
// 005a868b  56                   push esi
// 005a868c  e83f970600           call 0x611dd0
// 005a8691  6afd                 push -3
// 005a8693  56                   push esi
// 005a8694  e8e79f0600           call 0x612680
// 005a8699  6afe                 push -2
// 005a869b  56                   push esi
// 005a869c  e84fa10600           call 0x6127f0
// 005a86a1  68eed8ffff           push 0xffffd8ee
// 005a86a6  56                   push esi
// 005a86a7  e864960600           call 0x611d10
// 005a86ac  83c444               add esp, 0x44
// 005a86af  5e                   pop esi
// 005a86b0  c3                   ret 
// library rbxgs/script\ScriptContext.cpp (function ?sandboxThread@ScriptContext@RBX@@CAXPAUlua_State@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/ScriptContext.cpp
