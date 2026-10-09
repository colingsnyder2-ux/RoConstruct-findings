// roc 2009-12 0041e3a0  unit: CSelectionTreeCtrl  size: 37 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0041e3a0
//
// 0041e3a0  51                   push ecx
// 0041e3a1  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0041e3a5  33c0                 xor eax, eax
// 0041e3a7  890424               mov dword ptr [esp], eax
// 0041e3aa  56                   push esi
// 0041e3ab  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0041e3af  88442404             mov byte ptr [esp + 4], al
// 0041e3b3  8b442404             mov eax, dword ptr [esp + 4]
// 0041e3b7  50                   push eax
// 0041e3b8  51                   push ecx
// 0041e3b9  8bce                 mov ecx, esi
// 0041e3bb  e890faffff           call 0x41de50
// 0041e3c0  8bc6                 mov eax, esi
// 0041e3c2  5e                   pop esi
// 0041e3c3  59                   pop ecx
// 0041e3c4  c3                   ret 
// library rbxgs/script\LuaInstanceBridge.cpp (function ??$shared_dynamic_cast@VInstance@RBX@@VObject@2@@boost@@YA?AV?$shared_ptr@VInstance@RBX@@@0@ABV?$shared_ptr@VObject@RBX@@@0@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaInstanceBridge.cpp
