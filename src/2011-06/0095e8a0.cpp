// roc 2011-06 0095e8a0  unit: Ogre::RbxMeshPartAdapter  size: 37 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0095e8a0
//
// 0095e8a0  51                   push ecx
// 0095e8a1  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0095e8a5  33c0                 xor eax, eax
// 0095e8a7  890424               mov dword ptr [esp], eax
// 0095e8aa  56                   push esi
// 0095e8ab  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0095e8af  88442404             mov byte ptr [esp + 4], al
// 0095e8b3  8b442404             mov eax, dword ptr [esp + 4]
// 0095e8b7  50                   push eax
// 0095e8b8  51                   push ecx
// 0095e8b9  8bce                 mov ecx, esi
// 0095e8bb  e830feffff           call 0x95e6f0
// 0095e8c0  8bc6                 mov eax, esi
// 0095e8c2  5e                   pop esi
// 0095e8c3  59                   pop ecx
// 0095e8c4  c3                   ret 
// library rbxgs/script\LuaInstanceBridge.cpp (function ??$shared_dynamic_cast@VInstance@RBX@@VObject@2@@boost@@YA?AV?$shared_ptr@VInstance@RBX@@@0@ABV?$shared_ptr@VObject@RBX@@@0@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaInstanceBridge.cpp
