// roc 2007-08 00539550  unit: RBX::Reflection::VValue::V?$vector::?$holder  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00539550
//
// 00539550  6aff                 push -1
// 00539552  68f80b7500           push 0x750bf8
// 00539557  64a100000000         mov eax, dword ptr fs:[0]
// 0053955d  50                   push eax
// 0053955e  64892500000000       mov dword ptr fs:[0], esp
// 00539565  83ec08               sub esp, 8
// 00539568  56                   push esi
// 00539569  8bf1                 mov esi, ecx
// 0053956b  8d4c2404             lea ecx, [esp + 4]
// 0053956f  e84c3e0300           call 0x56d3c0
// 00539574  50                   push eax
// 00539575  8b442420             mov eax, dword ptr [esp + 0x20]
// 00539579  50                   push eax
// 0053957a  8bce                 mov ecx, esi
// 0053957c  c744241c00000000     mov dword ptr [esp + 0x1c], 0
// 00539584  e897fdffff           call 0x539320
// 00539589  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0053958d  85c9                 test ecx, ecx
// 0053958f  c7442414ffffffff     mov dword ptr [esp + 0x14], 0xffffffff
// 00539597  7408                 je 0x5395a1
// 00539599  8b11                 mov edx, dword ptr [ecx]
// 0053959b  8b02                 mov eax, dword ptr [edx]
// 0053959d  6a01                 push 1
// 0053959f  ffd0                 call eax
// 005395a1  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 005395a5  8bc6                 mov eax, esi
// 005395a7  5e                   pop esi
// 005395a8  64890d00000000       mov dword ptr fs:[0], ecx
// 005395af  83c414               add esp, 0x14
// 005395b2  c20400               ret 4
// library rbxgs/script\LuaInstanceBridge.cpp (function ??0?$vector@VValue@Reflection@RBX@@V?$allocator@VValue@Reflection@RBX@@@std@@@std@@QAE@I@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaInstanceBridge.cpp
