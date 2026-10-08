// roc 2008-06 00593c40  unit: RBX::Lua::ThreadRef  size: 27 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00593c40
//
// 00593c40  8b442408             mov eax, dword ptr [esp + 8]
// 00593c44  8b4820               mov ecx, dword ptr [eax + 0x20]
// 00593c47  8b542404             mov edx, dword ptr [esp + 4]
// 00593c4b  51                   push ecx
// 00593c4c  68f0d8ffff           push 0xffffd8f0
// 00593c51  52                   push edx
// 00593c52  e8d9e80700           call 0x612530
// 00593c57  83c40c               add esp, 0xc
// 00593c5a  c3                   ret 
// library rbxgs/script\ThreadRef.cpp (function ?lua_pushfunction@Lua@RBX@@YAXPAUlua_State@@ABVFunctionRef@12@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/ThreadRef.cpp
