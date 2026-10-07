// roc 2012-06 008af020  unit: RBX::Flag  size: 37 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 008af020
//
// 008af020  51                   push ecx
// 008af021  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 008af025  33c0                 xor eax, eax
// 008af027  890424               mov dword ptr [esp], eax
// 008af02a  56                   push esi
// 008af02b  8b74240c             mov esi, dword ptr [esp + 0xc]
// 008af02f  88442404             mov byte ptr [esp + 4], al
// 008af033  8b442404             mov eax, dword ptr [esp + 4]
// 008af037  50                   push eax
// 008af038  51                   push ecx
// 008af039  8bce                 mov ecx, esi
// 008af03b  e8a0feffff           call 0x8aeee0
// 008af040  8bc6                 mov eax, esi
// 008af042  5e                   pop esi
// 008af043  59                   pop ecx
// 008af044  c3                   ret 
// library rbxgs/script\LuaInstanceBridge.cpp (function ??$shared_dynamic_cast@VInstance@RBX@@VObject@2@@boost@@YA?AV?$shared_ptr@VInstance@RBX@@@0@ABV?$shared_ptr@VObject@RBX@@@0@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaInstanceBridge.cpp
