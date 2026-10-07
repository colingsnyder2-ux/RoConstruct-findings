// roc 2008-06 0061fa60  unit: VWaitScriptSlot::?$TGenericSlotWrapper  size: 76 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0061fa60
//
// 0061fa60  6aff                 push -1
// 0061fa62  6838957d00           push 0x7d9538
// 0061fa67  64a100000000         mov eax, dword ptr fs:[0]
// 0061fa6d  50                   push eax
// 0061fa6e  64892500000000       mov dword ptr fs:[0], esp
// 0061fa75  51                   push ecx
// 0061fa76  56                   push esi
// 0061fa77  8bf1                 mov esi, ecx
// 0061fa79  89742404             mov dword ptr [esp + 4], esi
// 0061fa7d  8b442418             mov eax, dword ptr [esp + 0x18]
// 0061fa81  50                   push eax
// 0061fa82  8d4e04               lea ecx, [esi + 4]
// 0061fa85  c744241400000000     mov dword ptr [esp + 0x14], 0
// 0061fa8d  c70694468400         mov dword ptr [esi], 0x844694
// 0061fa93  e8c8feffff           call 0x61f960
// 0061fa98  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0061fa9c  8bc6                 mov eax, esi
// 0061fa9e  5e                   pop esi
// 0061fa9f  64890d00000000       mov dword ptr fs:[0], ecx
// 0061faa6  83c410               add esp, 0x10
// 0061faa9  c20400               ret 4
// library rbxgs/script\LuaInstanceBridge.cpp (function ??0?$holder@VFunctionRef@Lua@RBX@@@any@boost@@QAE@ABVFunctionRef@Lua@RBX@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaInstanceBridge.cpp
