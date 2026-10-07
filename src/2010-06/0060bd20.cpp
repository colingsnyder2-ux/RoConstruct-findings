// roc 2010-06 0060bd20  unit: RBX::ScriptContext  size: 76 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0060bd20
//
// 0060bd20  6aff                 push -1
// 0060bd22  6868a09900           push 0x99a068
// 0060bd27  64a100000000         mov eax, dword ptr fs:[0]
// 0060bd2d  50                   push eax
// 0060bd2e  64892500000000       mov dword ptr fs:[0], esp
// 0060bd35  51                   push ecx
// 0060bd36  56                   push esi
// 0060bd37  8bf1                 mov esi, ecx
// 0060bd39  89742404             mov dword ptr [esp + 4], esi
// 0060bd3d  8b442418             mov eax, dword ptr [esp + 0x18]
// 0060bd41  50                   push eax
// 0060bd42  8d4e04               lea ecx, [esi + 4]
// 0060bd45  c744241400000000     mov dword ptr [esp + 0x14], 0
// 0060bd4d  c7062415a300         mov dword ptr [esi], 0xa31524
// 0060bd53  e8e8ee0a00           call 0x6bac40
// 0060bd58  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0060bd5c  8bc6                 mov eax, esi
// 0060bd5e  5e                   pop esi
// 0060bd5f  64890d00000000       mov dword ptr fs:[0], ecx
// 0060bd66  83c410               add esp, 0x10
// 0060bd69  c20400               ret 4
// library rbxgs/script\LuaInstanceBridge.cpp (function ??0?$holder@VFunctionRef@Lua@RBX@@@any@boost@@QAE@ABVFunctionRef@Lua@RBX@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaInstanceBridge.cpp
