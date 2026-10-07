// roc 2011-06 007b7000  unit: RBX::SpatialFilter  size: 37 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 007b7000
//
// 007b7000  51                   push ecx
// 007b7001  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 007b7005  33c0                 xor eax, eax
// 007b7007  890424               mov dword ptr [esp], eax
// 007b700a  56                   push esi
// 007b700b  8b74240c             mov esi, dword ptr [esp + 0xc]
// 007b700f  88442404             mov byte ptr [esp + 4], al
// 007b7013  8b442404             mov eax, dword ptr [esp + 4]
// 007b7017  50                   push eax
// 007b7018  51                   push ecx
// 007b7019  8bce                 mov ecx, esi
// 007b701b  e880feffff           call 0x7b6ea0
// 007b7020  8bc6                 mov eax, esi
// 007b7022  5e                   pop esi
// 007b7023  59                   pop ecx
// 007b7024  c3                   ret 
// library rbxgs/script\LuaInstanceBridge.cpp (function ??$shared_dynamic_cast@VInstance@RBX@@VObject@2@@boost@@YA?AV?$shared_ptr@VInstance@RBX@@@0@ABV?$shared_ptr@VObject@RBX@@@0@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaInstanceBridge.cpp
