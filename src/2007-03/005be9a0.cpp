// roc 2007-03 005be9a0  unit: seg_005b0000  size: 31 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005be9a0
//
// 005be9a0  a15c828a00           mov eax, dword ptr [0x8a825c]
// 005be9a5  8b4c2404             mov ecx, dword ptr [esp + 4]
// 005be9a9  50                   push eax
// 005be9aa  6a01                 push 1
// 005be9ac  51                   push ecx
// 005be9ad  e8febaffff           call 0x5ba4b0
// 005be9b2  83c40c               add esp, 0xc
// 005be9b5  8bc8                 mov ecx, eax
// 005be9b7  e8949f1600           call 0x728950
// 005be9bc  33c0                 xor eax, eax
// 005be9be  c3                   ret 
// library rbxgs/script\LuaSignalBridge.cpp (function ?disconnect@SignalConnectionBridge@Lua@RBX@@CAHPAUlua_State@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaSignalBridge.cpp
