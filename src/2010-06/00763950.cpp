// roc 2010-06 00763950  unit: RBX::Assembly  size: 37 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00763950
//
// 00763950  51                   push ecx
// 00763951  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00763955  33c0                 xor eax, eax
// 00763957  890424               mov dword ptr [esp], eax
// 0076395a  56                   push esi
// 0076395b  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0076395f  88442404             mov byte ptr [esp + 4], al
// 00763963  8b442404             mov eax, dword ptr [esp + 4]
// 00763967  50                   push eax
// 00763968  51                   push ecx
// 00763969  8bce                 mov ecx, esi
// 0076396b  e8f0feffff           call 0x763860
// 00763970  8bc6                 mov eax, esi
// 00763972  5e                   pop esi
// 00763973  59                   pop ecx
// 00763974  c3                   ret 
// library rbxgs/script\LuaInstanceBridge.cpp (function ??$shared_dynamic_cast@VInstance@RBX@@VObject@2@@boost@@YA?AV?$shared_ptr@VInstance@RBX@@@0@ABV?$shared_ptr@VObject@RBX@@@0@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaInstanceBridge.cpp
