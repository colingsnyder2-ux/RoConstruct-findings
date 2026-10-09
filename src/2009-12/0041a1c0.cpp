// roc 2009-12 0041a1c0  unit: CInsertObjectDialog  size: 37 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0041a1c0
//
// 0041a1c0  51                   push ecx
// 0041a1c1  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0041a1c5  33c0                 xor eax, eax
// 0041a1c7  890424               mov dword ptr [esp], eax
// 0041a1ca  56                   push esi
// 0041a1cb  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0041a1cf  88442404             mov byte ptr [esp + 4], al
// 0041a1d3  8b442404             mov eax, dword ptr [esp + 4]
// 0041a1d7  50                   push eax
// 0041a1d8  51                   push ecx
// 0041a1d9  8bce                 mov ecx, esi
// 0041a1db  e8b0feffff           call 0x41a090
// 0041a1e0  8bc6                 mov eax, esi
// 0041a1e2  5e                   pop esi
// 0041a1e3  59                   pop ecx
// 0041a1e4  c3                   ret 
// library rbxgs/script\LuaInstanceBridge.cpp (function ??$shared_dynamic_cast@VInstance@RBX@@VObject@2@@boost@@YA?AV?$shared_ptr@VInstance@RBX@@@0@ABV?$shared_ptr@VObject@RBX@@@0@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaInstanceBridge.cpp
