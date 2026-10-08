// roc 2010-06 006ba040  unit: RBX::VTextureId::?$TypedPropertyDescriptor  size: 27 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 006ba040
//
// 006ba040  8b442408             mov eax, dword ptr [esp + 8]
// 006ba044  8b4820               mov ecx, dword ptr [eax + 0x20]
// 006ba047  8b542404             mov edx, dword ptr [esp + 4]
// 006ba04b  51                   push ecx
// 006ba04c  68f0d8ffff           push 0xffffd8f0
// 006ba051  52                   push edx
// 006ba052  e8e9770600           call 0x721840
// 006ba057  83c40c               add esp, 0xc
// 006ba05a  c3                   ret 
// library rbxgs/script\ThreadRef.cpp (function ?lua_pushfunction@Lua@RBX@@YAXPAUlua_State@@ABVFunctionRef@12@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/ThreadRef.cpp
