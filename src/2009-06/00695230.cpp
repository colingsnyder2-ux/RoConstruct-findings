// roc 2009-06 00695230  unit: RBX::Lua::ThreadRef  size: 27 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00695230
//
// 00695230  8b442408             mov eax, dword ptr [esp + 8]
// 00695234  8b4820               mov ecx, dword ptr [eax + 0x20]
// 00695237  8b542404             mov edx, dword ptr [esp + 4]
// 0069523b  51                   push ecx
// 0069523c  68f0d8ffff           push 0xffffd8f0
// 00695241  52                   push edx
// 00695242  e829440200           call 0x6b9670
// 00695247  83c40c               add esp, 0xc
// 0069524a  c3                   ret 
// library rbxgs/script\ThreadRef.cpp (function ?lua_pushfunction@Lua@RBX@@YAXPAUlua_State@@ABVFunctionRef@12@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/ThreadRef.cpp
