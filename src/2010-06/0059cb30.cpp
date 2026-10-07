// roc 2010-06 0059cb30  unit: RBX::PhysicsJob  size: 37 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0059cb30
//
// 0059cb30  51                   push ecx
// 0059cb31  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0059cb35  33c0                 xor eax, eax
// 0059cb37  890424               mov dword ptr [esp], eax
// 0059cb3a  56                   push esi
// 0059cb3b  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0059cb3f  88442404             mov byte ptr [esp + 4], al
// 0059cb43  8b442404             mov eax, dword ptr [esp + 4]
// 0059cb47  50                   push eax
// 0059cb48  51                   push ecx
// 0059cb49  8bce                 mov ecx, esi
// 0059cb4b  e800fcffff           call 0x59c750
// 0059cb50  8bc6                 mov eax, esi
// 0059cb52  5e                   pop esi
// 0059cb53  59                   pop ecx
// 0059cb54  c3                   ret 
// library rbxgs/script\LuaInstanceBridge.cpp (function ??$shared_dynamic_cast@VInstance@RBX@@VObject@2@@boost@@YA?AV?$shared_ptr@VInstance@RBX@@@0@ABV?$shared_ptr@VObject@RBX@@@0@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaInstanceBridge.cpp
