// roc 2007-08 00539ec0  unit: RBX::Reflection::VValue::V?$vector::?$holder  size: 56 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00539ec0
//
// 00539ec0  56                   push esi
// 00539ec1  8bf1                 mov esi, ecx
// 00539ec3  e8f83c0300           call 0x56dbc0
// 00539ec8  8906                 mov dword ptr [esi], eax
// 00539eca  8b442408             mov eax, dword ptr [esp + 8]
// 00539ece  50                   push eax
// 00539ecf  8d4c240c             lea ecx, [esp + 0xc]
// 00539ed3  e838fbffff           call 0x539a10
// 00539ed8  8b08                 mov ecx, dword ptr [eax]
// 00539eda  8b5604               mov edx, dword ptr [esi + 4]
// 00539edd  8910                 mov dword ptr [eax], edx
// 00539edf  894e04               mov dword ptr [esi + 4], ecx
// 00539ee2  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00539ee6  85c9                 test ecx, ecx
// 00539ee8  7408                 je 0x539ef2
// 00539eea  8b01                 mov eax, dword ptr [ecx]
// 00539eec  8b10                 mov edx, dword ptr [eax]
// 00539eee  6a01                 push 1
// 00539ef0  ffd2                 call edx
// 00539ef2  8bc6                 mov eax, esi
// 00539ef4  5e                   pop esi
// 00539ef5  c20400               ret 4
// library rbxgs/script\LuaInstanceBridge.cpp (function ??$?4VFunctionRef@Lua@RBX@@@Value@Reflection@RBX@@QAEAAV012@ABVFunctionRef@Lua@2@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaInstanceBridge.cpp
