// roc 2012-06 006d32f0  unit: VThreadLogManager::?$thread_specific_ptr::PAUdelete_data::?$sp_counted_impl_pd  size: 37 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 006d32f0
//
// 006d32f0  51                   push ecx
// 006d32f1  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 006d32f5  33c0                 xor eax, eax
// 006d32f7  890424               mov dword ptr [esp], eax
// 006d32fa  56                   push esi
// 006d32fb  8b74240c             mov esi, dword ptr [esp + 0xc]
// 006d32ff  88442404             mov byte ptr [esp + 4], al
// 006d3303  8b442404             mov eax, dword ptr [esp + 4]
// 006d3307  50                   push eax
// 006d3308  51                   push ecx
// 006d3309  8bce                 mov ecx, esi
// 006d330b  e810ebffff           call 0x6d1e20
// 006d3310  8bc6                 mov eax, esi
// 006d3312  5e                   pop esi
// 006d3313  59                   pop ecx
// 006d3314  c3                   ret 
// library rbxgs/script\LuaInstanceBridge.cpp (function ??$shared_dynamic_cast@VInstance@RBX@@VObject@2@@boost@@YA?AV?$shared_ptr@VInstance@RBX@@@0@ABV?$shared_ptr@VObject@RBX@@@0@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaInstanceBridge.cpp
