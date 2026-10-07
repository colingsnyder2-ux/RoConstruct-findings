// roc 2010-06 00704180  unit: RBX::Animator  size: 37 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00704180
//
// 00704180  51                   push ecx
// 00704181  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00704185  33c0                 xor eax, eax
// 00704187  890424               mov dword ptr [esp], eax
// 0070418a  56                   push esi
// 0070418b  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0070418f  88442404             mov byte ptr [esp + 4], al
// 00704193  8b442404             mov eax, dword ptr [esp + 4]
// 00704197  50                   push eax
// 00704198  51                   push ecx
// 00704199  8bce                 mov ecx, esi
// 0070419b  e8b0fbffff           call 0x703d50
// 007041a0  8bc6                 mov eax, esi
// 007041a2  5e                   pop esi
// 007041a3  59                   pop ecx
// 007041a4  c3                   ret 
// library rbxgs/script\LuaInstanceBridge.cpp (function ??$shared_dynamic_cast@VInstance@RBX@@VObject@2@@boost@@YA?AV?$shared_ptr@VInstance@RBX@@@0@ABV?$shared_ptr@VObject@RBX@@@0@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaInstanceBridge.cpp
