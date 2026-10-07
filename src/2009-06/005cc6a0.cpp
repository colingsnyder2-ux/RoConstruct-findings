// roc 2009-06 005cc6a0  unit: RBX::VTaskSchedulerSettings::?$GlobalSettingsItem  size: 76 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005cc6a0
//
// 005cc6a0  6aff                 push -1
// 005cc6a2  68a8688600           push 0x8668a8
// 005cc6a7  64a100000000         mov eax, dword ptr fs:[0]
// 005cc6ad  50                   push eax
// 005cc6ae  64892500000000       mov dword ptr fs:[0], esp
// 005cc6b5  51                   push ecx
// 005cc6b6  56                   push esi
// 005cc6b7  8bf1                 mov esi, ecx
// 005cc6b9  89742404             mov dword ptr [esp + 4], esi
// 005cc6bd  8b442418             mov eax, dword ptr [esp + 0x18]
// 005cc6c1  50                   push eax
// 005cc6c2  8d4e04               lea ecx, [esi + 4]
// 005cc6c5  c744241400000000     mov dword ptr [esp + 0x14], 0
// 005cc6cd  c70660488d00         mov dword ptr [esi], 0x8d4860
// 005cc6d3  e858daffff           call 0x5ca130
// 005cc6d8  8b4c2408             mov ecx, dword ptr [esp + 8]
// 005cc6dc  8bc6                 mov eax, esi
// 005cc6de  5e                   pop esi
// 005cc6df  64890d00000000       mov dword ptr fs:[0], ecx
// 005cc6e6  83c410               add esp, 0x10
// 005cc6e9  c20400               ret 4
// library rbxgs/script\LuaInstanceBridge.cpp (function ??0?$holder@VFunctionRef@Lua@RBX@@@any@boost@@QAE@ABVFunctionRef@Lua@RBX@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaInstanceBridge.cpp
