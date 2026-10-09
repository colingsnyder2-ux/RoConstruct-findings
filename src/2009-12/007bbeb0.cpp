// roc 2009-12 007bbeb0  unit: RBX::SpatialFilter  size: 37 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 007bbeb0
//
// 007bbeb0  51                   push ecx
// 007bbeb1  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 007bbeb5  33c0                 xor eax, eax
// 007bbeb7  890424               mov dword ptr [esp], eax
// 007bbeba  56                   push esi
// 007bbebb  8b74240c             mov esi, dword ptr [esp + 0xc]
// 007bbebf  88442404             mov byte ptr [esp + 4], al
// 007bbec3  8b442404             mov eax, dword ptr [esp + 4]
// 007bbec7  50                   push eax
// 007bbec8  51                   push ecx
// 007bbec9  8bce                 mov ecx, esi
// 007bbecb  e850ffffff           call 0x7bbe20
// 007bbed0  8bc6                 mov eax, esi
// 007bbed2  5e                   pop esi
// 007bbed3  59                   pop ecx
// 007bbed4  c3                   ret 
// library rbxgs/script\LuaInstanceBridge.cpp (function ??$shared_dynamic_cast@VInstance@RBX@@VObject@2@@boost@@YA?AV?$shared_ptr@VInstance@RBX@@@0@ABV?$shared_ptr@VObject@RBX@@@0@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaInstanceBridge.cpp
