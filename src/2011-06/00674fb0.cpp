// roc 2011-06 00674fb0  unit: RBX::VVisit::?$BoundFuncDesc  size: 37 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00674fb0
//
// 00674fb0  51                   push ecx
// 00674fb1  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00674fb5  33c0                 xor eax, eax
// 00674fb7  890424               mov dword ptr [esp], eax
// 00674fba  56                   push esi
// 00674fbb  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00674fbf  88442404             mov byte ptr [esp + 4], al
// 00674fc3  8b442404             mov eax, dword ptr [esp + 4]
// 00674fc7  50                   push eax
// 00674fc8  51                   push ecx
// 00674fc9  8bce                 mov ecx, esi
// 00674fcb  e860feffff           call 0x674e30
// 00674fd0  8bc6                 mov eax, esi
// 00674fd2  5e                   pop esi
// 00674fd3  59                   pop ecx
// 00674fd4  c3                   ret 
// library rbxgs/script\LuaInstanceBridge.cpp (function ??$shared_dynamic_cast@VInstance@RBX@@VObject@2@@boost@@YA?AV?$shared_ptr@VInstance@RBX@@@0@ABV?$shared_ptr@VObject@RBX@@@0@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaInstanceBridge.cpp
