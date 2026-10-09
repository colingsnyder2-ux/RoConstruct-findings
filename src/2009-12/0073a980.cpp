// roc 2009-12 0073a980  unit: RBX::VContentId::?$TypedPropertyDescriptor  size: 27 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0073a980
//
// 0073a980  8b442408             mov eax, dword ptr [esp + 8]
// 0073a984  8b4820               mov ecx, dword ptr [eax + 0x20]
// 0073a987  8b542404             mov edx, dword ptr [esp + 4]
// 0073a98b  51                   push ecx
// 0073a98c  68f0d8ffff           push 0xffffd8f0
// 0073a991  52                   push edx
// 0073a992  e8f9e60400           call 0x789090
// 0073a997  83c40c               add esp, 0xc
// 0073a99a  c3                   ret 
// library rbxgs/script\ThreadRef.cpp (function ?lua_pushfunction@Lua@RBX@@YAXPAUlua_State@@ABVFunctionRef@12@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/ThreadRef.cpp
