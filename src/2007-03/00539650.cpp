// roc 2007-03 00539650  unit: seg_00530000  size: 56 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00539650
//
// 00539650  56                   push esi
// 00539651  8bf1                 mov esi, ecx
// 00539653  e8182e0300           call 0x56c470
// 00539658  8906                 mov dword ptr [esi], eax
// 0053965a  8b442408             mov eax, dword ptr [esp + 8]
// 0053965e  50                   push eax
// 0053965f  8d4c240c             lea ecx, [esp + 0xc]
// 00539663  e868e7ffff           call 0x537dd0
// 00539668  8b08                 mov ecx, dword ptr [eax]
// 0053966a  8b5604               mov edx, dword ptr [esi + 4]
// 0053966d  8910                 mov dword ptr [eax], edx
// 0053966f  894e04               mov dword ptr [esi + 4], ecx
// 00539672  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00539676  85c9                 test ecx, ecx
// 00539678  7408                 je 0x539682
// 0053967a  8b01                 mov eax, dword ptr [ecx]
// 0053967c  8b10                 mov edx, dword ptr [eax]
// 0053967e  6a01                 push 1
// 00539680  ffd2                 call edx
// 00539682  8bc6                 mov eax, esi
// 00539684  5e                   pop esi
// 00539685  c20400               ret 4
// library rbxgs/script\LuaInstanceBridge.cpp (function ??$?4VFunctionRef@Lua@RBX@@@Value@Reflection@RBX@@QAEAAV012@ABVFunctionRef@Lua@2@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaInstanceBridge.cpp
