// roc 2007-03 00537680  unit: seg_00530000  size: 31 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00537680
//
// 00537680  a15c828a00           mov eax, dword ptr [0x8a825c]
// 00537685  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00537689  50                   push eax
// 0053768a  6a01                 push 1
// 0053768c  51                   push ecx
// 0053768d  e81e2e0800           call 0x5ba4b0
// 00537692  83c40c               add esp, 0xc
// 00537695  8bc8                 mov ecx, eax
// 00537697  e8c4131f00           call 0x728a60
// 0053769c  33c0                 xor eax, eax
// 0053769e  c3                   ret 
// library rbxgs/script\LuaSignalBridge.cpp (function ?disconnect@SignalConnectionBridge@Lua@RBX@@CAHPAUlua_State@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaSignalBridge.cpp
