// roc 2012-06 00844210  unit: RBX::Lua::VWaitScriptSlot::?$TGenericSlotWrapper  size: 31 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00844210
//
// 00844210  a1e813de00           mov eax, dword ptr [0xde13e8]
// 00844215  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00844219  50                   push eax
// 0084421a  6a01                 push 1
// 0084421c  51                   push ecx
// 0084421d  e8eef5feff           call 0x833810
// 00844222  83c40c               add esp, 0xc
// 00844225  8bc8                 mov ecx, eax
// 00844227  e8b4e5d2ff           call 0x5727e0
// 0084422c  33c0                 xor eax, eax
// 0084422e  c3                   ret 
// library rbxgs/script\LuaSignalBridge.cpp (function ?disconnect@SignalConnectionBridge@Lua@RBX@@CAHPAUlua_State@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaSignalBridge.cpp
