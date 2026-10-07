// roc 2012-06 007957f0  unit: RBX::HUMAN::VHumanoidState::?$sp_counted_impl_p  size: 37 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 007957f0
//
// 007957f0  51                   push ecx
// 007957f1  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 007957f5  33c0                 xor eax, eax
// 007957f7  890424               mov dword ptr [esp], eax
// 007957fa  56                   push esi
// 007957fb  8b74240c             mov esi, dword ptr [esp + 0xc]
// 007957ff  88442404             mov byte ptr [esp + 4], al
// 00795803  8b442404             mov eax, dword ptr [esp + 4]
// 00795807  50                   push eax
// 00795808  51                   push ecx
// 00795809  8bce                 mov ecx, esi
// 0079580b  e860f9ffff           call 0x795170
// 00795810  8bc6                 mov eax, esi
// 00795812  5e                   pop esi
// 00795813  59                   pop ecx
// 00795814  c3                   ret 
// library rbxgs/script\LuaInstanceBridge.cpp (function ??$shared_dynamic_cast@VInstance@RBX@@VObject@2@@boost@@YA?AV?$shared_ptr@VInstance@RBX@@@0@ABV?$shared_ptr@VObject@RBX@@@0@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaInstanceBridge.cpp
