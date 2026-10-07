// roc 2009-06 00667890  unit: RBX::Humanoid  size: 37 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00667890
//
// 00667890  51                   push ecx
// 00667891  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00667895  33c0                 xor eax, eax
// 00667897  890424               mov dword ptr [esp], eax
// 0066789a  56                   push esi
// 0066789b  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0066789f  88442404             mov byte ptr [esp + 4], al
// 006678a3  8b442404             mov eax, dword ptr [esp + 4]
// 006678a7  50                   push eax
// 006678a8  51                   push ecx
// 006678a9  8bce                 mov ecx, esi
// 006678ab  e82013eaff           call 0x508bd0
// 006678b0  8bc6                 mov eax, esi
// 006678b2  5e                   pop esi
// 006678b3  59                   pop ecx
// 006678b4  c3                   ret 
// library rbxgs/script\LuaInstanceBridge.cpp (function ??$shared_dynamic_cast@VInstance@RBX@@VObject@2@@boost@@YA?AV?$shared_ptr@VInstance@RBX@@@0@ABV?$shared_ptr@VObject@RBX@@@0@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaInstanceBridge.cpp
