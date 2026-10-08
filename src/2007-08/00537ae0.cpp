// roc 2007-08 00537ae0  unit: RBX::Lua::ThreadRef::VNode::V?$shared_ptr::?$TItem  size: 56 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00537ae0
//
// 00537ae0  56                   push esi
// 00537ae1  8bf1                 mov esi, ecx
// 00537ae3  e8185f0300           call 0x56da00
// 00537ae8  8906                 mov dword ptr [esi], eax
// 00537aea  8b442408             mov eax, dword ptr [esp + 8]
// 00537aee  50                   push eax
// 00537aef  8d4c240c             lea ecx, [esp + 0xc]
// 00537af3  e8a8c6edff           call 0x4141a0
// 00537af8  8b08                 mov ecx, dword ptr [eax]
// 00537afa  8b5604               mov edx, dword ptr [esi + 4]
// 00537afd  8910                 mov dword ptr [eax], edx
// 00537aff  894e04               mov dword ptr [esi + 4], ecx
// 00537b02  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00537b06  85c9                 test ecx, ecx
// 00537b08  7408                 je 0x537b12
// 00537b0a  8b01                 mov eax, dword ptr [ecx]
// 00537b0c  8b10                 mov edx, dword ptr [eax]
// 00537b0e  6a01                 push 1
// 00537b10  ffd2                 call edx
// 00537b12  8bc6                 mov eax, esi
// 00537b14  5e                   pop esi
// 00537b15  c20400               ret 4
// library rbxgs/script\LuaInstanceBridge.cpp (function ??$?4VFunctionRef@Lua@RBX@@@Value@Reflection@RBX@@QAEAAV012@ABVFunctionRef@Lua@2@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaInstanceBridge.cpp
