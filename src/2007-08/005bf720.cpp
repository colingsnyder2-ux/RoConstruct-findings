// roc 2007-08 005bf720  unit: boost::detail::H::?$sp_counted_impl_p  size: 68 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005bf720
//
// 005bf720  56                   push esi
// 005bf721  8b742408             mov esi, dword ptr [esp + 8]
// 005bf725  6a00                 push 0
// 005bf727  6a00                 push 0
// 005bf729  56                   push esi
// 005bf72a  e8b1e7ffff           call 0x5bdee0
// 005bf72f  6aff                 push -1
// 005bf731  56                   push esi
// 005bf732  e809e0ffff           call 0x5bd740
// 005bf737  6afe                 push -2
// 005bf739  56                   push esi
// 005bf73a  e821eaffff           call 0x5be160
// 005bf73f  6a06                 push 6
// 005bf741  68b0917b00           push 0x7b91b0
// 005bf746  56                   push esi
// 005bf747  e864e4ffff           call 0x5bdbb0
// 005bf74c  8b442434             mov eax, dword ptr [esp + 0x34]
// 005bf750  50                   push eax
// 005bf751  56                   push esi
// 005bf752  e899e4ffff           call 0x5bdbf0
// 005bf757  6afd                 push -3
// 005bf759  56                   push esi
// 005bf75a  e891e8ffff           call 0x5bdff0
// 005bf75f  83c438               add esp, 0x38
// 005bf762  5e                   pop esi
// 005bf763  c3                   ret 
// library rbxgs/script\LuaInstanceBridge.cpp (function ?newweaktable@Lua@RBX@@YAXPAUlua_State@@PBD@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaInstanceBridge.cpp
