// roc 2012-06 00844090  unit: RBX::Lua::VWaitScriptSlot::?$TGenericSlotWrapper  size: 24 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00844090
//
// 00844090  a1d013de00           mov eax, dword ptr [0xde13d0]
// 00844095  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00844099  50                   push eax
// 0084409a  6a01                 push 1
// 0084409c  51                   push ecx
// 0084409d  e86ef7feff           call 0x833810
// 008440a2  83c40c               add esp, 0xc
// 008440a5  33c0                 xor eax, eax
// 008440a7  c3                   ret 
// library rbxgs/script\ScriptContext.cpp (function ?on_gc@?$Bridge@VCoordinateFrame@G3D@@$00@Lua@RBX@@KAHPAUlua_State@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/ScriptContext.cpp
