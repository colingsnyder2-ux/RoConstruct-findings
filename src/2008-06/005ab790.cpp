// roc 2008-06 005ab790  unit: RBX::Lua::ThreadRef::VNode::V?$shared_ptr::?$TItem  size: 161 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005ab790
//
// 005ab790  a174af9500           mov eax, dword ptr [0x95af74]
// 005ab795  56                   push esi
// 005ab796  8b742408             mov esi, dword ptr [esp + 8]
// 005ab79a  50                   push eax
// 005ab79b  56                   push esi
// 005ab79c  e8ef540600           call 0x610c90
// 005ab7a1  6884438300           push 0x834384
// 005ab7a6  56                   push esi
// 005ab7a7  e8d46a0600           call 0x612280
// 005ab7ac  6a00                 push 0
// 005ab7ae  68008a5a00           push 0x5a8a00
// 005ab7b3  56                   push esi
// 005ab7b4  e8976b0600           call 0x612350
// 005ab7b9  6afd                 push -3
// 005ab7bb  56                   push esi
// 005ab7bc  e8bf6e0600           call 0x612680
// 005ab7c1  68d0448300           push 0x8344d0
// 005ab7c6  56                   push esi
// 005ab7c7  e8b46a0600           call 0x612280
// 005ab7cc  6a00                 push 0
// 005ab7ce  68d0895a00           push 0x5a89d0
// 005ab7d3  56                   push esi
// 005ab7d4  e8776b0600           call 0x612350
// 005ab7d9  6afd                 push -3
// 005ab7db  56                   push esi
// 005ab7dc  e89f6e0600           call 0x612680
// 005ab7e1  83c440               add esp, 0x40
// 005ab7e4  68c8448300           push 0x8344c8
// 005ab7e9  56                   push esi
// 005ab7ea  e8916a0600           call 0x612280
// 005ab7ef  6a00                 push 0
// 005ab7f1  6890ad5a00           push 0x5aad90
// 005ab7f6  56                   push esi
// 005ab7f7  e8546b0600           call 0x612350
// 005ab7fc  6afd                 push -3
// 005ab7fe  56                   push esi
// 005ab7ff  e87c6e0600           call 0x612680
// 005ab804  68b4448300           push 0x8344b4
// 005ab809  56                   push esi
// 005ab80a  e8716a0600           call 0x612280
// 005ab80f  6a00                 push 0
// 005ab811  68409d5a00           push 0x5a9d40
// 005ab816  56                   push esi
// 005ab817  e8346b0600           call 0x612350
// 005ab81c  6afd                 push -3
// 005ab81e  56                   push esi
// 005ab81f  e85c6e0600           call 0x612680
// 005ab824  6afe                 push -2
// 005ab826  56                   push esi
// 005ab827  e8f4630600           call 0x611c20
// 005ab82c  83c440               add esp, 0x40
// 005ab82f  5e                   pop esi
// 005ab830  c3                   ret 
// library rbxgs/script\ScriptContext.cpp (function ?registerClass@?$Bridge@V?$shared_ptr@VSignalInstance@Reflection@RBX@@@boost@@$0A@@Lua@RBX@@SAXPAUlua_State@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/ScriptContext.cpp
