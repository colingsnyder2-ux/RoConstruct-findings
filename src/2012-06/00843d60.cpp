// roc 2012-06 00843d60  unit: RBX::Lua::VWaitScriptSlot::?$TGenericSlotWrapper  size: 24 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00843d60
//
// 00843d60  a1f413de00           mov eax, dword ptr [0xde13f4]
// 00843d65  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00843d69  50                   push eax
// 00843d6a  6a01                 push 1
// 00843d6c  51                   push ecx
// 00843d6d  e89efafeff           call 0x833810
// 00843d72  83c40c               add esp, 0xc
// 00843d75  33c0                 xor eax, eax
// 00843d77  c3                   ret 
// library rbxgs/script\ScriptContext.cpp (function ?on_gc@?$Bridge@VCoordinateFrame@G3D@@$00@Lua@RBX@@KAHPAUlua_State@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/ScriptContext.cpp
