// roc 2007-08 00539420  unit: RBX::VScriptContext::?$FactoryProduct  size: 76 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00539420
//
// 00539420  6aff                 push -1
// 00539422  68f8b57500           push 0x75b5f8
// 00539427  64a100000000         mov eax, dword ptr fs:[0]
// 0053942d  50                   push eax
// 0053942e  64892500000000       mov dword ptr fs:[0], esp
// 00539435  51                   push ecx
// 00539436  56                   push esi
// 00539437  8bf1                 mov esi, ecx
// 00539439  89742404             mov dword ptr [esp + 4], esi
// 0053943d  8b442418             mov eax, dword ptr [esp + 0x18]
// 00539441  50                   push eax
// 00539442  8d4e04               lea ecx, [esi + 4]
// 00539445  c744241400000000     mov dword ptr [esp + 0x14], 0
// 0053944d  c706c8587a00         mov dword ptr [esi], 0x7a58c8
// 00539453  e858fcffff           call 0x5390b0
// 00539458  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0053945c  8bc6                 mov eax, esi
// 0053945e  5e                   pop esi
// 0053945f  64890d00000000       mov dword ptr fs:[0], ecx
// 00539466  83c410               add esp, 0x10
// 00539469  c20400               ret 4
// library rbxgs/script\LuaInstanceBridge.cpp (function ??0?$holder@VFunctionRef@Lua@RBX@@@any@boost@@QAE@ABVFunctionRef@Lua@RBX@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaInstanceBridge.cpp
