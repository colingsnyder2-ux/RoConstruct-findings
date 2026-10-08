// roc 2007-08 0056c7a0  unit: RBX::Lua::ThreadRef  size: 27 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0056c7a0
//
// 0056c7a0  8b442408             mov eax, dword ptr [esp + 8]
// 0056c7a4  8b4820               mov ecx, dword ptr [eax + 0x20]
// 0056c7a7  8b542404             mov edx, dword ptr [esp + 4]
// 0056c7ab  51                   push ecx
// 0056c7ac  68f0d8ffff           push 0xffffd8f0
// 0056c7b1  52                   push edx
// 0056c7b2  e8e9160500           call 0x5bdea0
// 0056c7b7  83c40c               add esp, 0xc
// 0056c7ba  c3                   ret 
// library rbxgs/script\ThreadRef.cpp (function ?lua_pushfunction@Lua@RBX@@YAXPAUlua_State@@ABVFunctionRef@12@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/ThreadRef.cpp
