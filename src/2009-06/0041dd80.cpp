// roc 2009-06 0041dd80  unit: CSelectionTreeCtrl  size: 37 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0041dd80
//
// 0041dd80  51                   push ecx
// 0041dd81  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0041dd85  33c0                 xor eax, eax
// 0041dd87  890424               mov dword ptr [esp], eax
// 0041dd8a  56                   push esi
// 0041dd8b  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0041dd8f  88442404             mov byte ptr [esp + 4], al
// 0041dd93  8b442404             mov eax, dword ptr [esp + 4]
// 0041dd97  50                   push eax
// 0041dd98  51                   push ecx
// 0041dd99  8bce                 mov ecx, esi
// 0041dd9b  e890faffff           call 0x41d830
// 0041dda0  8bc6                 mov eax, esi
// 0041dda2  5e                   pop esi
// 0041dda3  59                   pop ecx
// 0041dda4  c3                   ret 
// library rbxgs/script\LuaInstanceBridge.cpp (function ??$shared_dynamic_cast@VInstance@RBX@@VObject@2@@boost@@YA?AV?$shared_ptr@VInstance@RBX@@@0@ABV?$shared_ptr@VObject@RBX@@@0@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaInstanceBridge.cpp
