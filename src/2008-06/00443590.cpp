// roc 2008-06 00443590  unit: RBX::Reflection::H::?$TypedPropertyDescriptor  size: 63 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00443590
//
// 00443590  56                   push esi
// 00443591  57                   push edi
// 00443592  8bf9                 mov edi, ecx
// 00443594  e857981200           call 0x56cdf0
// 00443599  8907                 mov dword ptr [edi], eax
// 0044359b  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0044359f  50                   push eax
// 004435a0  8d4c2410             lea ecx, [esp + 0x10]
// 004435a4  8d7704               lea esi, [edi + 4]
// 004435a7  e8843cfdff           call 0x417230
// 004435ac  3bc6                 cmp eax, esi
// 004435ae  7408                 je 0x4435b8
// 004435b0  8b16                 mov edx, dword ptr [esi]
// 004435b2  8b08                 mov ecx, dword ptr [eax]
// 004435b4  8910                 mov dword ptr [eax], edx
// 004435b6  890e                 mov dword ptr [esi], ecx
// 004435b8  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 004435bc  85c9                 test ecx, ecx
// 004435be  7408                 je 0x4435c8
// 004435c0  8b01                 mov eax, dword ptr [ecx]
// 004435c2  8b10                 mov edx, dword ptr [eax]
// 004435c4  6a01                 push 1
// 004435c6  ffd2                 call edx
// 004435c8  8bc7                 mov eax, edi
// 004435ca  5f                   pop edi
// 004435cb  5e                   pop esi
// 004435cc  c20400               ret 4
// library rbxgs/script\LuaInstanceBridge.cpp (function ??$?4VFunctionRef@Lua@RBX@@@Value@Reflection@RBX@@QAEAAV012@ABVFunctionRef@Lua@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaInstanceBridge.cpp
