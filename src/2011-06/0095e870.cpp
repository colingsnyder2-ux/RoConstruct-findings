// roc 2011-06 0095e870  unit: Ogre::RbxMeshPartAdapter  size: 37 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0095e870
//
// 0095e870  51                   push ecx
// 0095e871  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0095e875  33c0                 xor eax, eax
// 0095e877  890424               mov dword ptr [esp], eax
// 0095e87a  56                   push esi
// 0095e87b  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0095e87f  88442404             mov byte ptr [esp + 4], al
// 0095e883  8b442404             mov eax, dword ptr [esp + 4]
// 0095e887  50                   push eax
// 0095e888  51                   push ecx
// 0095e889  8bce                 mov ecx, esi
// 0095e88b  e8d0fdffff           call 0x95e660
// 0095e890  8bc6                 mov eax, esi
// 0095e892  5e                   pop esi
// 0095e893  59                   pop ecx
// 0095e894  c3                   ret 
// library rbxgs/script\LuaInstanceBridge.cpp (function ??$shared_dynamic_cast@VInstance@RBX@@VObject@2@@boost@@YA?AV?$shared_ptr@VInstance@RBX@@@0@ABV?$shared_ptr@VObject@RBX@@@0@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaInstanceBridge.cpp
