// roc 2011-06 0095e840  unit: Ogre::RbxMeshPartAdapter  size: 37 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0095e840
//
// 0095e840  51                   push ecx
// 0095e841  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0095e845  33c0                 xor eax, eax
// 0095e847  890424               mov dword ptr [esp], eax
// 0095e84a  56                   push esi
// 0095e84b  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0095e84f  88442404             mov byte ptr [esp + 4], al
// 0095e853  8b442404             mov eax, dword ptr [esp + 4]
// 0095e857  50                   push eax
// 0095e858  51                   push ecx
// 0095e859  8bce                 mov ecx, esi
// 0095e85b  e870fdffff           call 0x95e5d0
// 0095e860  8bc6                 mov eax, esi
// 0095e862  5e                   pop esi
// 0095e863  59                   pop ecx
// 0095e864  c3                   ret 
// library rbxgs/script\LuaInstanceBridge.cpp (function ??$shared_dynamic_cast@VInstance@RBX@@VObject@2@@boost@@YA?AV?$shared_ptr@VInstance@RBX@@@0@ABV?$shared_ptr@VObject@RBX@@@0@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaInstanceBridge.cpp
