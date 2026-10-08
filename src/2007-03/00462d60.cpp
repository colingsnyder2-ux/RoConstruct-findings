// roc 2007-03 00462d60  unit: seg_00460000  size: 56 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00462d60
//
// 00462d60  56                   push esi
// 00462d61  8bf1                 mov esi, ecx
// 00462d63  e898a61000           call 0x56d400
// 00462d68  8906                 mov dword ptr [esi], eax
// 00462d6a  8b442408             mov eax, dword ptr [esp + 8]
// 00462d6e  50                   push eax
// 00462d6f  8d4c240c             lea ecx, [esp + 0xc]
// 00462d73  e83824fbff           call 0x4151b0
// 00462d78  8b08                 mov ecx, dword ptr [eax]
// 00462d7a  8b5604               mov edx, dword ptr [esi + 4]
// 00462d7d  8910                 mov dword ptr [eax], edx
// 00462d7f  894e04               mov dword ptr [esi + 4], ecx
// 00462d82  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00462d86  85c9                 test ecx, ecx
// 00462d88  7408                 je 0x462d92
// 00462d8a  8b01                 mov eax, dword ptr [ecx]
// 00462d8c  8b10                 mov edx, dword ptr [eax]
// 00462d8e  6a01                 push 1
// 00462d90  ffd2                 call edx
// 00462d92  8bc6                 mov eax, esi
// 00462d94  5e                   pop esi
// 00462d95  c20400               ret 4
// library rbxgs/script\LuaInstanceBridge.cpp (function ??$?4VFunctionRef@Lua@RBX@@@Value@Reflection@RBX@@QAEAAV012@ABVFunctionRef@Lua@2@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaInstanceBridge.cpp
