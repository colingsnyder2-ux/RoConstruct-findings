// roc 2011-06 0095e8d0  unit: Ogre::RbxMeshPartAdapter  size: 37 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0095e8d0
//
// 0095e8d0  51                   push ecx
// 0095e8d1  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0095e8d5  33c0                 xor eax, eax
// 0095e8d7  890424               mov dword ptr [esp], eax
// 0095e8da  56                   push esi
// 0095e8db  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0095e8df  88442404             mov byte ptr [esp + 4], al
// 0095e8e3  8b442404             mov eax, dword ptr [esp + 4]
// 0095e8e7  50                   push eax
// 0095e8e8  51                   push ecx
// 0095e8e9  8bce                 mov ecx, esi
// 0095e8eb  e890feffff           call 0x95e780
// 0095e8f0  8bc6                 mov eax, esi
// 0095e8f2  5e                   pop esi
// 0095e8f3  59                   pop ecx
// 0095e8f4  c3                   ret 
// library rbxgs/script\LuaInstanceBridge.cpp (function ??$shared_dynamic_cast@VInstance@RBX@@VObject@2@@boost@@YA?AV?$shared_ptr@VInstance@RBX@@@0@ABV?$shared_ptr@VObject@RBX@@@0@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaInstanceBridge.cpp
