// roc 2011-06 00764f90  unit: seg_00760000  size: 37 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00764f90
//
// 00764f90  56                   push esi
// 00764f91  8bf1                 mov esi, ecx
// 00764f93  8d4e04               lea ecx, [esi + 4]
// 00764f96  e81582ecff           call 0x62d1b0
// 00764f9b  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00764f9f  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00764fa3  89460c               mov dword ptr [esi + 0xc], eax
// 00764fa6  c7066466ab00         mov dword ptr [esi], 0xab6664
// 00764fac  894e10               mov dword ptr [esi + 0x10], ecx
// 00764faf  8bc6                 mov eax, esi
// 00764fb1  5e                   pop esi
// 00764fb2  c20800               ret 8
// library rbxgs/script\LuaInstanceBridge.cpp (function ??0LuaArguments@Lua@RBX@@QAE@PAUlua_State@@H@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaInstanceBridge.cpp
