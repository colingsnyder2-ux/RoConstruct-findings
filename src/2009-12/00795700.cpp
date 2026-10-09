// roc 2009-12 00795700  unit: seg_00790000  size: 31 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00795700
//
// 00795700  a1842bb600           mov eax, dword ptr [0xb62b84]
// 00795705  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00795709  50                   push eax
// 0079570a  6a01                 push 1
// 0079570c  51                   push ecx
// 0079570d  e84e4fffff           call 0x78a660
// 00795712  83c40c               add esp, 0xc
// 00795715  8bc8                 mov ecx, eax
// 00795717  e854ececff           call 0x664370
// 0079571c  33c0                 xor eax, eax
// 0079571e  c3                   ret 
// library rbxgs/script\LuaSignalBridge.cpp (function ?disconnect@SignalConnectionBridge@Lua@RBX@@CAHPAUlua_State@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaSignalBridge.cpp
