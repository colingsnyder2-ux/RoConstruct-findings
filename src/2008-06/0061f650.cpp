// roc 2008-06 0061f650  unit: boost::signals::Vconnection::?$sp_counted_impl_p  size: 76 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0061f650
//
// 0061f650  6aff                 push -1
// 0061f652  6838957d00           push 0x7d9538
// 0061f657  64a100000000         mov eax, dword ptr fs:[0]
// 0061f65d  50                   push eax
// 0061f65e  64892500000000       mov dword ptr fs:[0], esp
// 0061f665  51                   push ecx
// 0061f666  56                   push esi
// 0061f667  8bf1                 mov esi, ecx
// 0061f669  89742404             mov dword ptr [esp + 4], esi
// 0061f66d  8b442418             mov eax, dword ptr [esp + 0x18]
// 0061f671  50                   push eax
// 0061f672  8d4e04               lea ecx, [esi + 4]
// 0061f675  c744241400000000     mov dword ptr [esp + 0x14], 0
// 0061f67d  c70688468400         mov dword ptr [esi], 0x844688
// 0061f683  e888fdffff           call 0x61f410
// 0061f688  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0061f68c  8bc6                 mov eax, esi
// 0061f68e  5e                   pop esi
// 0061f68f  64890d00000000       mov dword ptr fs:[0], ecx
// 0061f696  83c410               add esp, 0x10
// 0061f699  c20400               ret 4
// library rbxgs/script\LuaInstanceBridge.cpp (function ??0?$holder@VFunctionRef@Lua@RBX@@@any@boost@@QAE@ABVFunctionRef@Lua@RBX@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaInstanceBridge.cpp
