// roc 2008-06 005ad270  unit: RBX::Reflection::UTuple::?$holder  size: 63 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005ad270
//
// 005ad270  56                   push esi
// 005ad271  57                   push edi
// 005ad272  8bf9                 mov edi, ecx
// 005ad274  e837fdfbff           call 0x56cfb0
// 005ad279  8907                 mov dword ptr [edi], eax
// 005ad27b  8b44240c             mov eax, dword ptr [esp + 0xc]
// 005ad27f  50                   push eax
// 005ad280  8d4c2410             lea ecx, [esp + 0x10]
// 005ad284  8d7704               lea esi, [edi + 4]
// 005ad287  e8b4fcffff           call 0x5acf40
// 005ad28c  3bc6                 cmp eax, esi
// 005ad28e  7408                 je 0x5ad298
// 005ad290  8b16                 mov edx, dword ptr [esi]
// 005ad292  8b08                 mov ecx, dword ptr [eax]
// 005ad294  8910                 mov dword ptr [eax], edx
// 005ad296  890e                 mov dword ptr [esi], ecx
// 005ad298  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 005ad29c  85c9                 test ecx, ecx
// 005ad29e  7408                 je 0x5ad2a8
// 005ad2a0  8b01                 mov eax, dword ptr [ecx]
// 005ad2a2  8b10                 mov edx, dword ptr [eax]
// 005ad2a4  6a01                 push 1
// 005ad2a6  ffd2                 call edx
// 005ad2a8  8bc7                 mov eax, edi
// 005ad2aa  5f                   pop edi
// 005ad2ab  5e                   pop esi
// 005ad2ac  c20400               ret 4
// library rbxgs/script\LuaInstanceBridge.cpp (function ??$?4VFunctionRef@Lua@RBX@@@Value@Reflection@RBX@@QAEAAV012@ABVFunctionRef@Lua@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaInstanceBridge.cpp
