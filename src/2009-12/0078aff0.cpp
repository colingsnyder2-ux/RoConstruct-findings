// roc 2009-12 0078aff0  unit: RBX::UniversalTool  size: 37 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0078aff0
//
// 0078aff0  56                   push esi
// 0078aff1  8bf1                 mov esi, ecx
// 0078aff3  8d4e04               lea ecx, [esi + 4]
// 0078aff6  e825f7f1ff           call 0x6aa720
// 0078affb  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0078afff  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0078b003  89460c               mov dword ptr [esi + 0xc], eax
// 0078b006  c7067c9e9e00         mov dword ptr [esi], 0x9e9e7c
// 0078b00c  894e10               mov dword ptr [esi + 0x10], ecx
// 0078b00f  8bc6                 mov eax, esi
// 0078b011  5e                   pop esi
// 0078b012  c20800               ret 8
// library rbxgs/script\LuaInstanceBridge.cpp (function ??0LuaArguments@Lua@RBX@@QAE@PAUlua_State@@H@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaInstanceBridge.cpp
