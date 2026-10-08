// roc 2007-08 00537b20  unit: RBX::Lua::ThreadRef::VNode::V?$shared_ptr::?$TItem  size: 56 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00537b20
//
// 00537b20  56                   push esi
// 00537b21  8bf1                 mov esi, ecx
// 00537b23  e8584d0300           call 0x56c880
// 00537b28  8906                 mov dword ptr [esi], eax
// 00537b2a  8b442408             mov eax, dword ptr [esp + 8]
// 00537b2e  50                   push eax
// 00537b2f  8d4c240c             lea ecx, [esp + 0xc]
// 00537b33  e808e3ffff           call 0x535e40
// 00537b38  8b08                 mov ecx, dword ptr [eax]
// 00537b3a  8b5604               mov edx, dword ptr [esi + 4]
// 00537b3d  8910                 mov dword ptr [eax], edx
// 00537b3f  894e04               mov dword ptr [esi + 4], ecx
// 00537b42  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00537b46  85c9                 test ecx, ecx
// 00537b48  7408                 je 0x537b52
// 00537b4a  8b01                 mov eax, dword ptr [ecx]
// 00537b4c  8b10                 mov edx, dword ptr [eax]
// 00537b4e  6a01                 push 1
// 00537b50  ffd2                 call edx
// 00537b52  8bc6                 mov eax, esi
// 00537b54  5e                   pop esi
// 00537b55  c20400               ret 4
// library rbxgs/script\LuaInstanceBridge.cpp (function ??$?4VFunctionRef@Lua@RBX@@@Value@Reflection@RBX@@QAEAAV012@ABVFunctionRef@Lua@2@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaInstanceBridge.cpp
