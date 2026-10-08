// roc 2007-08 00534050  unit: RBX::ScriptContext  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00534050
//
// 00534050  8b4108               mov eax, dword ptr [ecx + 8]
// 00534053  85c0                 test eax, eax
// 00534055  740d                 je 0x534064
// 00534057  6a00                 push 0
// 00534059  6a02                 push 2
// 0053405b  50                   push eax
// 0053405c  e88fa30800           call 0x5be3f0
// 00534061  83c40c               add esp, 0xc
// 00534064  c20c00               ret 0xc
// library rbxgs/script\ScriptContext.cpp (function ?onEvent@ScriptContext@RBX@@MAEXPBVRunService@2@VRunTransition@2@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/ScriptContext.cpp
