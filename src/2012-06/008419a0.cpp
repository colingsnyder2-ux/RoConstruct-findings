// roc 2012-06 008419a0  unit: seg_00840000  size: 31 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 008419a0
//
// 008419a0  a10814de00           mov eax, dword ptr [0xde1408]
// 008419a5  8b4c2404             mov ecx, dword ptr [esp + 4]
// 008419a9  50                   push eax
// 008419aa  6a01                 push 1
// 008419ac  51                   push ecx
// 008419ad  e85e1effff           call 0x833810
// 008419b2  83c40c               add esp, 0xc
// 008419b5  8bc8                 mov ecx, eax
// 008419b7  e864141300           call 0x972e20
// 008419bc  33c0                 xor eax, eax
// 008419be  c3                   ret 
// library rbxgs/script\LuaSignalBridge.cpp (function ?disconnect@SignalConnectionBridge@Lua@RBX@@CAHPAUlua_State@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaSignalBridge.cpp
