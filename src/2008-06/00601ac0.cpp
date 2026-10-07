// roc 2008-06 00601ac0  unit: RBX::VTool::?$BoundPropGetSet  size: 37 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00601ac0
//
// 00601ac0  51                   push ecx
// 00601ac1  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00601ac5  33c0                 xor eax, eax
// 00601ac7  890424               mov dword ptr [esp], eax
// 00601aca  56                   push esi
// 00601acb  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00601acf  88442404             mov byte ptr [esp + 4], al
// 00601ad3  8b442404             mov eax, dword ptr [esp + 4]
// 00601ad7  50                   push eax
// 00601ad8  51                   push ecx
// 00601ad9  8bce                 mov ecx, esi
// 00601adb  e880f2ffff           call 0x600d60
// 00601ae0  8bc6                 mov eax, esi
// 00601ae2  5e                   pop esi
// 00601ae3  59                   pop ecx
// 00601ae4  c3                   ret 
// library rbxgs/script\LuaInstanceBridge.cpp (function ??$shared_dynamic_cast@VInstance@RBX@@VObject@2@@boost@@YA?AV?$shared_ptr@VInstance@RBX@@@0@ABV?$shared_ptr@VObject@RBX@@@0@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaInstanceBridge.cpp
