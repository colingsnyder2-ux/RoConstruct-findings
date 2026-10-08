// roc 2009-06 006330e0  unit: std::strstream  size: 81 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006330e0
//
// 006330e0  56                   push esi
// 006330e1  8b742408             mov esi, dword ptr [esp + 8]
// 006330e5  6a00                 push 0
// 006330e7  6a00                 push 0
// 006330e9  56                   push esi
// 006330ea  e8c1650800           call 0x6b96b0
// 006330ef  6a00                 push 0
// 006330f1  6a00                 push 0
// 006330f3  56                   push esi
// 006330f4  e8b7650800           call 0x6b96b0
// 006330f9  6a07                 push 7
// 006330fb  68fcb28d00           push 0x8db2fc
// 00633100  56                   push esi
// 00633101  e87a620800           call 0x6b9380
// 00633106  68eed8ffff           push 0xffffd8ee
// 0063310b  56                   push esi
// 0063310c  e82f5e0800           call 0x6b8f40
// 00633111  6afd                 push -3
// 00633113  56                   push esi
// 00633114  e8c7660800           call 0x6b97e0
// 00633119  6afe                 push -2
// 0063311b  56                   push esi
// 0063311c  e83f680800           call 0x6b9960
// 00633121  68eed8ffff           push 0xffffd8ee
// 00633126  56                   push esi
// 00633127  e8545d0800           call 0x6b8e80
// 0063312c  83c444               add esp, 0x44
// 0063312f  5e                   pop esi
// 00633130  c3                   ret 
// library rbxgs/script\ScriptContext.cpp (function ?sandboxThread@ScriptContext@RBX@@CAXPAUlua_State@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/ScriptContext.cpp
