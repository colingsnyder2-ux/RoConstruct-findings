// roc 2007-03 005396c0  unit: seg_00530000  size: 56 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005396c0
//
// 005396c0  56                   push esi
// 005396c1  8bf1                 mov esi, ecx
// 005396c3  e838960300           call 0x572d00
// 005396c8  8906                 mov dword ptr [esi], eax
// 005396ca  8b442408             mov eax, dword ptr [esp + 8]
// 005396ce  50                   push eax
// 005396cf  8d4c240c             lea ecx, [esp + 0xc]
// 005396d3  e8e8e8ffff           call 0x537fc0
// 005396d8  8b08                 mov ecx, dword ptr [eax]
// 005396da  8b5604               mov edx, dword ptr [esi + 4]
// 005396dd  8910                 mov dword ptr [eax], edx
// 005396df  894e04               mov dword ptr [esi + 4], ecx
// 005396e2  8b4c2408             mov ecx, dword ptr [esp + 8]
// 005396e6  85c9                 test ecx, ecx
// 005396e8  7408                 je 0x5396f2
// 005396ea  8b01                 mov eax, dword ptr [ecx]
// 005396ec  8b10                 mov edx, dword ptr [eax]
// 005396ee  6a01                 push 1
// 005396f0  ffd2                 call edx
// 005396f2  8bc6                 mov eax, esi
// 005396f4  5e                   pop esi
// 005396f5  c20400               ret 4
// library rbxgs/script\LuaInstanceBridge.cpp (function ??$?4VFunctionRef@Lua@RBX@@@Value@Reflection@RBX@@QAEAAV012@ABVFunctionRef@Lua@2@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaInstanceBridge.cpp
