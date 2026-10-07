// roc 2008-06 004236d0  unit: CSelectionTreeCtrl  size: 37 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004236d0
//
// 004236d0  51                   push ecx
// 004236d1  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 004236d5  33c0                 xor eax, eax
// 004236d7  890424               mov dword ptr [esp], eax
// 004236da  56                   push esi
// 004236db  8b74240c             mov esi, dword ptr [esp + 0xc]
// 004236df  88442404             mov byte ptr [esp + 4], al
// 004236e3  8b442404             mov eax, dword ptr [esp + 4]
// 004236e7  50                   push eax
// 004236e8  51                   push ecx
// 004236e9  8bce                 mov ecx, esi
// 004236eb  e8d0f8ffff           call 0x422fc0
// 004236f0  8bc6                 mov eax, esi
// 004236f2  5e                   pop esi
// 004236f3  59                   pop ecx
// 004236f4  c3                   ret 
// library rbxgs/script\LuaInstanceBridge.cpp (function ??$shared_dynamic_cast@VInstance@RBX@@VObject@2@@boost@@YA?AV?$shared_ptr@VInstance@RBX@@@0@ABV?$shared_ptr@VObject@RBX@@@0@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaInstanceBridge.cpp
