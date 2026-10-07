// roc 2011-06 007714a0  unit: seg_00770000  size: 31 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 007714a0
//
// 007714a0  a10cf0c800           mov eax, dword ptr [0xc8f00c]
// 007714a5  8b4c2404             mov ecx, dword ptr [esp + 4]
// 007714a9  50                   push eax
// 007714aa  6a01                 push 1
// 007714ac  51                   push ecx
// 007714ad  e8ce2bffff           call 0x764080
// 007714b2  83c40c               add esp, 0xc
// 007714b5  8bc8                 mov ecx, eax
// 007714b7  e8d4770800           call 0x7f8c90
// 007714bc  33c0                 xor eax, eax
// 007714be  c3                   ret 
// library rbxgs/script\LuaSignalBridge.cpp (function ?disconnect@SignalConnectionBridge@Lua@RBX@@CAHPAUlua_State@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaSignalBridge.cpp
