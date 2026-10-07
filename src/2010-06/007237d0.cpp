// roc 2010-06 007237d0  unit: RBX::UniversalTool  size: 37 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 007237d0
//
// 007237d0  56                   push esi
// 007237d1  8bf1                 mov esi, ecx
// 007237d3  8d4e04               lea ecx, [esi + 4]
// 007237d6  e8a54fefff           call 0x618780
// 007237db  8b44240c             mov eax, dword ptr [esp + 0xc]
// 007237df  8b4c2408             mov ecx, dword ptr [esp + 8]
// 007237e3  89460c               mov dword ptr [esi + 0xc], eax
// 007237e6  c70664d0a400         mov dword ptr [esi], 0xa4d064
// 007237ec  894e10               mov dword ptr [esi + 0x10], ecx
// 007237ef  8bc6                 mov eax, esi
// 007237f1  5e                   pop esi
// 007237f2  c20800               ret 8
// library rbxgs/script\LuaInstanceBridge.cpp (function ??0LuaArguments@Lua@RBX@@QAE@PAUlua_State@@H@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaInstanceBridge.cpp
