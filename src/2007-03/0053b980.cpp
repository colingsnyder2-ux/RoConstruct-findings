// roc 2007-03 0053b980  unit: seg_00530000  size: 56 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0053b980
//
// 0053b980  56                   push esi
// 0053b981  8bf1                 mov esi, ecx
// 0053b983  e8381c0300           call 0x56d5c0
// 0053b988  8906                 mov dword ptr [esi], eax
// 0053b98a  8b442408             mov eax, dword ptr [esp + 8]
// 0053b98e  50                   push eax
// 0053b98f  8d4c240c             lea ecx, [esp + 0xc]
// 0053b993  e8f8faffff           call 0x53b490
// 0053b998  8b08                 mov ecx, dword ptr [eax]
// 0053b99a  8b5604               mov edx, dword ptr [esi + 4]
// 0053b99d  8910                 mov dword ptr [eax], edx
// 0053b99f  894e04               mov dword ptr [esi + 4], ecx
// 0053b9a2  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0053b9a6  85c9                 test ecx, ecx
// 0053b9a8  7408                 je 0x53b9b2
// 0053b9aa  8b01                 mov eax, dword ptr [ecx]
// 0053b9ac  8b10                 mov edx, dword ptr [eax]
// 0053b9ae  6a01                 push 1
// 0053b9b0  ffd2                 call edx
// 0053b9b2  8bc6                 mov eax, esi
// 0053b9b4  5e                   pop esi
// 0053b9b5  c20400               ret 4
// library rbxgs/script\LuaInstanceBridge.cpp (function ??$?4VFunctionRef@Lua@RBX@@@Value@Reflection@RBX@@QAEAAV012@ABVFunctionRef@Lua@2@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaInstanceBridge.cpp
