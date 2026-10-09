// roc 2009-12 006a1a10  unit: RBX::VScriptContext::?$FactoryProduct  size: 89 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 006a1a10
//
// 006a1a10  6aff                 push -1
// 006a1a12  68eba59400           push 0x94a5eb
// 006a1a17  64a100000000         mov eax, dword ptr fs:[0]
// 006a1a1d  50                   push eax
// 006a1a1e  64892500000000       mov dword ptr fs:[0], esp
// 006a1a25  51                   push ecx
// 006a1a26  56                   push esi
// 006a1a27  6a28                 push 0x28
// 006a1a29  8bf1                 mov esi, ecx
// 006a1a2b  e8301e1500           call 0x7f3860
// 006a1a30  83c404               add esp, 4
// 006a1a33  89442404             mov dword ptr [esp + 4], eax
// 006a1a37  c744241000000000     mov dword ptr [esp + 0x10], 0
// 006a1a3f  85c0                 test eax, eax
// 006a1a41  740e                 je 0x6a1a51
// 006a1a43  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 006a1a47  51                   push ecx
// 006a1a48  8bc8                 mov ecx, eax
// 006a1a4a  e851e7ffff           call 0x6a01a0
// 006a1a4f  eb02                 jmp 0x6a1a53
// 006a1a51  33c0                 xor eax, eax
// 006a1a53  8b4c2408             mov ecx, dword ptr [esp + 8]
// 006a1a57  8906                 mov dword ptr [esi], eax
// 006a1a59  8bc6                 mov eax, esi
// 006a1a5b  5e                   pop esi
// 006a1a5c  64890d00000000       mov dword ptr fs:[0], ecx
// 006a1a63  83c410               add esp, 0x10
// 006a1a66  c20400               ret 4
// library rbxgs/script\LuaInstanceBridge.cpp (function ??$?0VFunctionRef@Lua@RBX@@@any@boost@@QAE@ABVFunctionRef@Lua@RBX@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaInstanceBridge.cpp
