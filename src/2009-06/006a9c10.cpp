// roc 2009-06 006a9c10  unit: RBX::Kernel  size: 37 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006a9c10
//
// 006a9c10  51                   push ecx
// 006a9c11  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 006a9c15  33c0                 xor eax, eax
// 006a9c17  890424               mov dword ptr [esp], eax
// 006a9c1a  56                   push esi
// 006a9c1b  8b74240c             mov esi, dword ptr [esp + 0xc]
// 006a9c1f  88442404             mov byte ptr [esp + 4], al
// 006a9c23  8b442404             mov eax, dword ptr [esp + 4]
// 006a9c27  50                   push eax
// 006a9c28  51                   push ecx
// 006a9c29  8bce                 mov ecx, esi
// 006a9c2b  e8d0f4ffff           call 0x6a9100
// 006a9c30  8bc6                 mov eax, esi
// 006a9c32  5e                   pop esi
// 006a9c33  59                   pop ecx
// 006a9c34  c3                   ret 
// library rbxgs/script\LuaInstanceBridge.cpp (function ??$shared_dynamic_cast@VInstance@RBX@@VObject@2@@boost@@YA?AV?$shared_ptr@VInstance@RBX@@@0@ABV?$shared_ptr@VObject@RBX@@@0@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaInstanceBridge.cpp
