// roc 2008-06 005ab840  unit: RBX::Lua::ThreadRef::VNode::V?$shared_ptr::?$TItem  size: 161 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005ab840
//
// 005ab840  a1e4b19500           mov eax, dword ptr [0x95b1e4]
// 005ab845  56                   push esi
// 005ab846  8b742408             mov esi, dword ptr [esp + 8]
// 005ab84a  50                   push eax
// 005ab84b  56                   push esi
// 005ab84c  e83f540600           call 0x610c90
// 005ab851  6884438300           push 0x834384
// 005ab856  56                   push esi
// 005ab857  e8246a0600           call 0x612280
// 005ab85c  6a00                 push 0
// 005ab85e  68b09d5a00           push 0x5a9db0
// 005ab863  56                   push esi
// 005ab864  e8e76a0600           call 0x612350
// 005ab869  6afd                 push -3
// 005ab86b  56                   push esi
// 005ab86c  e80f6e0600           call 0x612680
// 005ab871  68d0448300           push 0x8344d0
// 005ab876  56                   push esi
// 005ab877  e8046a0600           call 0x612280
// 005ab87c  6a00                 push 0
// 005ab87e  68809d5a00           push 0x5a9d80
// 005ab883  56                   push esi
// 005ab884  e8c76a0600           call 0x612350
// 005ab889  6afd                 push -3
// 005ab88b  56                   push esi
// 005ab88c  e8ef6d0600           call 0x612680
// 005ab891  83c440               add esp, 0x40
// 005ab894  68c8448300           push 0x8344c8
// 005ab899  56                   push esi
// 005ab89a  e8e1690600           call 0x612280
// 005ab89f  6a00                 push 0
// 005ab8a1  68e0ad5a00           push 0x5aade0
// 005ab8a6  56                   push esi
// 005ab8a7  e8a46a0600           call 0x612350
// 005ab8ac  6afd                 push -3
// 005ab8ae  56                   push esi
// 005ab8af  e8cc6d0600           call 0x612680
// 005ab8b4  68b4448300           push 0x8344b4
// 005ab8b9  56                   push esi
// 005ab8ba  e8c1690600           call 0x612280
// 005ab8bf  6a00                 push 0
// 005ab8c1  68609d5a00           push 0x5a9d60
// 005ab8c6  56                   push esi
// 005ab8c7  e8846a0600           call 0x612350
// 005ab8cc  6afd                 push -3
// 005ab8ce  56                   push esi
// 005ab8cf  e8ac6d0600           call 0x612680
// 005ab8d4  6afe                 push -2
// 005ab8d6  56                   push esi
// 005ab8d7  e844630600           call 0x611c20
// 005ab8dc  83c440               add esp, 0x40
// 005ab8df  5e                   pop esi
// 005ab8e0  c3                   ret 
// library rbxgs/script\ScriptContext.cpp (function ?registerClass@?$Bridge@V?$shared_ptr@VSignalInstance@Reflection@RBX@@@boost@@$0A@@Lua@RBX@@SAXPAUlua_State@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/ScriptContext.cpp
