// roc 2007-08 00534960  unit: RBX::ScriptContext  size: 76 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00534960
//
// 00534960  6aff                 push -1
// 00534962  68f8b57500           push 0x75b5f8
// 00534967  64a100000000         mov eax, dword ptr fs:[0]
// 0053496d  50                   push eax
// 0053496e  64892500000000       mov dword ptr fs:[0], esp
// 00534975  51                   push ecx
// 00534976  56                   push esi
// 00534977  8bf1                 mov esi, ecx
// 00534979  89742404             mov dword ptr [esp + 4], esi
// 0053497d  8b442418             mov eax, dword ptr [esp + 0x18]
// 00534981  50                   push eax
// 00534982  8d4e04               lea ecx, [esi + 4]
// 00534985  c744241400000000     mov dword ptr [esp + 0x14], 0
// 0053498d  c7063c577a00         mov dword ptr [esi], 0x7a573c
// 00534993  e858850300           call 0x56cef0
// 00534998  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0053499c  8bc6                 mov eax, esi
// 0053499e  5e                   pop esi
// 0053499f  64890d00000000       mov dword ptr fs:[0], ecx
// 005349a6  83c410               add esp, 0x10
// 005349a9  c20400               ret 4
// library rbxgs/script\LuaInstanceBridge.cpp (function ??0?$holder@VFunctionRef@Lua@RBX@@@any@boost@@QAE@ABVFunctionRef@Lua@RBX@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaInstanceBridge.cpp
