// roc 2008-06 005d4080  unit: RBX::VShirtGraphic::?$BoundPropGetSet  size: 37 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005d4080
//
// 005d4080  51                   push ecx
// 005d4081  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 005d4085  33c0                 xor eax, eax
// 005d4087  890424               mov dword ptr [esp], eax
// 005d408a  56                   push esi
// 005d408b  8b74240c             mov esi, dword ptr [esp + 0xc]
// 005d408f  88442404             mov byte ptr [esp + 4], al
// 005d4093  8b442404             mov eax, dword ptr [esp + 4]
// 005d4097  50                   push eax
// 005d4098  51                   push ecx
// 005d4099  8bce                 mov ecx, esi
// 005d409b  e81062efff           call 0x4ca2b0
// 005d40a0  8bc6                 mov eax, esi
// 005d40a2  5e                   pop esi
// 005d40a3  59                   pop ecx
// 005d40a4  c3                   ret 
// library rbxgs/script\LuaInstanceBridge.cpp (function ??$shared_dynamic_cast@VInstance@RBX@@VObject@2@@boost@@YA?AV?$shared_ptr@VInstance@RBX@@@0@ABV?$shared_ptr@VObject@RBX@@@0@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaInstanceBridge.cpp
