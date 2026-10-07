// roc 2010-06 0070cdf0  unit: RBX::PAVDebugSettings::?$sp_counted_impl_pd  size: 37 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0070cdf0
//
// 0070cdf0  51                   push ecx
// 0070cdf1  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0070cdf5  33c0                 xor eax, eax
// 0070cdf7  890424               mov dword ptr [esp], eax
// 0070cdfa  56                   push esi
// 0070cdfb  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0070cdff  88442404             mov byte ptr [esp + 4], al
// 0070ce03  8b442404             mov eax, dword ptr [esp + 4]
// 0070ce07  50                   push eax
// 0070ce08  51                   push ecx
// 0070ce09  8bce                 mov ecx, esi
// 0070ce0b  e810f7ffff           call 0x70c520
// 0070ce10  8bc6                 mov eax, esi
// 0070ce12  5e                   pop esi
// 0070ce13  59                   pop ecx
// 0070ce14  c3                   ret 
// library rbxgs/script\LuaInstanceBridge.cpp (function ??$shared_dynamic_cast@VInstance@RBX@@VObject@2@@boost@@YA?AV?$shared_ptr@VInstance@RBX@@@0@ABV?$shared_ptr@VObject@RBX@@@0@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaInstanceBridge.cpp
