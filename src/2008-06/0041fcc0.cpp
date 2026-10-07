// roc 2008-06 0041fcc0  unit: CInsertObjectDialog  size: 37 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0041fcc0
//
// 0041fcc0  51                   push ecx
// 0041fcc1  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0041fcc5  33c0                 xor eax, eax
// 0041fcc7  890424               mov dword ptr [esp], eax
// 0041fcca  56                   push esi
// 0041fccb  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0041fccf  88442404             mov byte ptr [esp + 4], al
// 0041fcd3  8b442404             mov eax, dword ptr [esp + 4]
// 0041fcd7  50                   push eax
// 0041fcd8  51                   push ecx
// 0041fcd9  8bce                 mov ecx, esi
// 0041fcdb  e830ffffff           call 0x41fc10
// 0041fce0  8bc6                 mov eax, esi
// 0041fce2  5e                   pop esi
// 0041fce3  59                   pop ecx
// 0041fce4  c3                   ret 
// library rbxgs/script\LuaInstanceBridge.cpp (function ??$shared_dynamic_cast@VInstance@RBX@@VObject@2@@boost@@YA?AV?$shared_ptr@VInstance@RBX@@@0@ABV?$shared_ptr@VObject@RBX@@@0@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaInstanceBridge.cpp
