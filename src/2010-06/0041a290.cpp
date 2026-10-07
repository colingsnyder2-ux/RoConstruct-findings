// roc 2010-06 0041a290  unit: CInsertObjectDialog  size: 37 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0041a290
//
// 0041a290  51                   push ecx
// 0041a291  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0041a295  33c0                 xor eax, eax
// 0041a297  890424               mov dword ptr [esp], eax
// 0041a29a  56                   push esi
// 0041a29b  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0041a29f  88442404             mov byte ptr [esp + 4], al
// 0041a2a3  8b442404             mov eax, dword ptr [esp + 4]
// 0041a2a7  50                   push eax
// 0041a2a8  51                   push ecx
// 0041a2a9  8bce                 mov ecx, esi
// 0041a2ab  e8b0feffff           call 0x41a160
// 0041a2b0  8bc6                 mov eax, esi
// 0041a2b2  5e                   pop esi
// 0041a2b3  59                   pop ecx
// 0041a2b4  c3                   ret 
// library rbxgs/script\LuaInstanceBridge.cpp (function ??$shared_dynamic_cast@VInstance@RBX@@VObject@2@@boost@@YA?AV?$shared_ptr@VInstance@RBX@@@0@ABV?$shared_ptr@VObject@RBX@@@0@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaInstanceBridge.cpp
