// roc 2008-06 005ab9a0  unit: RBX::Lua::ThreadRef::VNode::V?$shared_ptr::?$TItem  size: 63 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005ab9a0
//
// 005ab9a0  56                   push esi
// 005ab9a1  57                   push edi
// 005ab9a2  8bf9                 mov edi, ecx
// 005ab9a4  e87783feff           call 0x593d20
// 005ab9a9  8907                 mov dword ptr [edi], eax
// 005ab9ab  8b44240c             mov eax, dword ptr [esp + 0xc]
// 005ab9af  50                   push eax
// 005ab9b0  8d4c2410             lea ecx, [esp + 0x10]
// 005ab9b4  8d7704               lea esi, [edi + 4]
// 005ab9b7  e8148cfeff           call 0x5945d0
// 005ab9bc  3bc6                 cmp eax, esi
// 005ab9be  7408                 je 0x5ab9c8
// 005ab9c0  8b16                 mov edx, dword ptr [esi]
// 005ab9c2  8b08                 mov ecx, dword ptr [eax]
// 005ab9c4  8910                 mov dword ptr [eax], edx
// 005ab9c6  890e                 mov dword ptr [esi], ecx
// 005ab9c8  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 005ab9cc  85c9                 test ecx, ecx
// 005ab9ce  7408                 je 0x5ab9d8
// 005ab9d0  8b01                 mov eax, dword ptr [ecx]
// 005ab9d2  8b10                 mov edx, dword ptr [eax]
// 005ab9d4  6a01                 push 1
// 005ab9d6  ffd2                 call edx
// 005ab9d8  8bc7                 mov eax, edi
// 005ab9da  5f                   pop edi
// 005ab9db  5e                   pop esi
// 005ab9dc  c20400               ret 4
// library rbxgs/script\LuaInstanceBridge.cpp (function ??$?4VFunctionRef@Lua@RBX@@@Value@Reflection@RBX@@QAEAAV012@ABVFunctionRef@Lua@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaInstanceBridge.cpp
