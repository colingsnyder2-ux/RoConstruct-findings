// roc 2011-06 00423e00  unit: CInsertObjectDialog  size: 37 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00423e00
//
// 00423e00  51                   push ecx
// 00423e01  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00423e05  33c0                 xor eax, eax
// 00423e07  890424               mov dword ptr [esp], eax
// 00423e0a  56                   push esi
// 00423e0b  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00423e0f  88442404             mov byte ptr [esp + 4], al
// 00423e13  8b442404             mov eax, dword ptr [esp + 4]
// 00423e17  50                   push eax
// 00423e18  51                   push ecx
// 00423e19  8bce                 mov ecx, esi
// 00423e1b  e8b0feffff           call 0x423cd0
// 00423e20  8bc6                 mov eax, esi
// 00423e22  5e                   pop esi
// 00423e23  59                   pop ecx
// 00423e24  c3                   ret 
// library rbxgs/script\LuaInstanceBridge.cpp (function ??$shared_dynamic_cast@VInstance@RBX@@VObject@2@@boost@@YA?AV?$shared_ptr@VInstance@RBX@@@0@ABV?$shared_ptr@VObject@RBX@@@0@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaInstanceBridge.cpp
