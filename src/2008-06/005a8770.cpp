// roc 2008-06 005a8770  unit: RBX::ScriptContext  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005a8770
//
// 005a8770  8b4108               mov eax, dword ptr [ecx + 8]
// 005a8773  85c0                 test eax, eax
// 005a8775  740d                 je 0x5a8784
// 005a8777  6a00                 push 0
// 005a8779  6a02                 push 2
// 005a877b  50                   push eax
// 005a877c  e8ffa20600           call 0x612a80
// 005a8781  83c40c               add esp, 0xc
// 005a8784  c20c00               ret 0xc
// library rbxgs/script\ScriptContext.cpp (function ?onEvent@ScriptContext@RBX@@MAEXPBVRunService@2@VRunTransition@2@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/ScriptContext.cpp
