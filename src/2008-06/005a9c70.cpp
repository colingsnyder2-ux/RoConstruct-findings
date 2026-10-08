// roc 2008-06 005a9c70  unit: RBX::VScriptContext::?$FactoryProduct  size: 196 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005a9c70
//
// 005a9c70  a1dcb19500           mov eax, dword ptr [0x95b1dc]
// 005a9c75  56                   push esi
// 005a9c76  8b742408             mov esi, dword ptr [esp + 8]
// 005a9c7a  50                   push eax
// 005a9c7b  56                   push esi
// 005a9c7c  e80f700600           call 0x610c90
// 005a9c81  6884438300           push 0x834384
// 005a9c86  56                   push esi
// 005a9c87  e8f4850600           call 0x612280
// 005a9c8c  6a00                 push 0
// 005a9c8e  68e08b5a00           push 0x5a8be0
// 005a9c93  56                   push esi
// 005a9c94  e8b7860600           call 0x612350
// 005a9c99  6afd                 push -3
// 005a9c9b  56                   push esi
// 005a9c9c  e8df890600           call 0x612680
// 005a9ca1  68d0448300           push 0x8344d0
// 005a9ca6  56                   push esi
// 005a9ca7  e8d4850600           call 0x612280
// 005a9cac  6a00                 push 0
// 005a9cae  68b08b5a00           push 0x5a8bb0
// 005a9cb3  56                   push esi
// 005a9cb4  e897860600           call 0x612350
// 005a9cb9  6afd                 push -3
// 005a9cbb  56                   push esi
// 005a9cbc  e8bf890600           call 0x612680
// 005a9cc1  83c440               add esp, 0x40
// 005a9cc4  68c8448300           push 0x8344c8
// 005a9cc9  56                   push esi
// 005a9cca  e8b1850600           call 0x612280
// 005a9ccf  6a00                 push 0
// 005a9cd1  68708b5a00           push 0x5a8b70
// 005a9cd6  56                   push esi
// 005a9cd7  e874860600           call 0x612350
// 005a9cdc  6afd                 push -3
// 005a9cde  56                   push esi
// 005a9cdf  e89c890600           call 0x612680
// 005a9ce4  68c0448300           push 0x8344c0
// 005a9ce9  56                   push esi
// 005a9cea  e891850600           call 0x612280
// 005a9cef  6a00                 push 0
// 005a9cf1  68108c5a00           push 0x5a8c10
// 005a9cf6  56                   push esi
// 005a9cf7  e854860600           call 0x612350
// 005a9cfc  6afd                 push -3
// 005a9cfe  56                   push esi
// 005a9cff  e87c890600           call 0x612680
// 005a9d04  68b4448300           push 0x8344b4
// 005a9d09  56                   push esi
// 005a9d0a  e871850600           call 0x612280
// 005a9d0f  83c440               add esp, 0x40
// 005a9d12  6a00                 push 0
// 005a9d14  68908b5a00           push 0x5a8b90
// 005a9d19  56                   push esi
// 005a9d1a  e831860600           call 0x612350
// 005a9d1f  6afd                 push -3
// 005a9d21  56                   push esi
// 005a9d22  e859890600           call 0x612680
// 005a9d27  6afe                 push -2
// 005a9d29  56                   push esi
// 005a9d2a  e8f17e0600           call 0x611c20
// 005a9d2f  83c41c               add esp, 0x1c
// 005a9d32  5e                   pop esi
// 005a9d33  c3                   ret 
// library rbxgs/script\ScriptContext.cpp (function ?registerClass@?$Bridge@V?$shared_ptr@VNode@ThreadRef@Lua@RBX@@@boost@@$00@Lua@RBX@@SAXPAUlua_State@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/ScriptContext.cpp
