// roc 2012-06 00843fc0  unit: RBX::Lua::VWaitScriptSlot::?$TGenericSlotWrapper  size: 31 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00843fc0
//
// 00843fc0  a1b413de00           mov eax, dword ptr [0xde13b4]
// 00843fc5  56                   push esi
// 00843fc6  8b742408             mov esi, dword ptr [esp + 8]
// 00843fca  50                   push eax
// 00843fcb  6a01                 push 1
// 00843fcd  56                   push esi
// 00843fce  e83df8feff           call 0x833810
// 00843fd3  56                   push esi
// 00843fd4  50                   push eax
// 00843fd5  e896f4ffff           call 0x843470
// 00843fda  83c414               add esp, 0x14
// 00843fdd  5e                   pop esi
// 00843fde  c3                   ret 
// library rbxgs/script\ScriptContext.cpp (function ?on_tostring@?$Bridge@VCoordinateFrame@G3D@@$00@Lua@RBX@@KAHPAUlua_State@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/ScriptContext.cpp
