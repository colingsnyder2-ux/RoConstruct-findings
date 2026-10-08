// roc 2007-08 00537b90  unit: RBX::Lua::ThreadRef::VNode::V?$shared_ptr::?$TItem  size: 56 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00537b90
//
// 00537b90  56                   push esi
// 00537b91  8bf1                 mov esi, ecx
// 00537b93  e818c70300           call 0x5742b0
// 00537b98  8906                 mov dword ptr [esi], eax
// 00537b9a  8b442408             mov eax, dword ptr [esp + 8]
// 00537b9e  50                   push eax
// 00537b9f  8d4c240c             lea ecx, [esp + 0xc]
// 00537ba3  e878e4ffff           call 0x536020
// 00537ba8  8b08                 mov ecx, dword ptr [eax]
// 00537baa  8b5604               mov edx, dword ptr [esi + 4]
// 00537bad  8910                 mov dword ptr [eax], edx
// 00537baf  894e04               mov dword ptr [esi + 4], ecx
// 00537bb2  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00537bb6  85c9                 test ecx, ecx
// 00537bb8  7408                 je 0x537bc2
// 00537bba  8b01                 mov eax, dword ptr [ecx]
// 00537bbc  8b10                 mov edx, dword ptr [eax]
// 00537bbe  6a01                 push 1
// 00537bc0  ffd2                 call edx
// 00537bc2  8bc6                 mov eax, esi
// 00537bc4  5e                   pop esi
// 00537bc5  c20400               ret 4
// library rbxgs/script\LuaInstanceBridge.cpp (function ??$?4VFunctionRef@Lua@RBX@@@Value@Reflection@RBX@@QAEAAV012@ABVFunctionRef@Lua@2@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaInstanceBridge.cpp
