// roc 2007-03 005365e0  unit: seg_00530000  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005365e0
//
// 005365e0  8b4108               mov eax, dword ptr [ecx + 8]
// 005365e3  85c0                 test eax, eax
// 005365e5  740d                 je 0x5365f4
// 005365e7  6a00                 push 0
// 005365e9  6a02                 push 2
// 005365eb  50                   push eax
// 005365ec  e8cf320800           call 0x5b98c0
// 005365f1  83c40c               add esp, 0xc
// 005365f4  c20c00               ret 0xc
// library rbxgs/script\ScriptContext.cpp (function ?onEvent@ScriptContext@RBX@@MAEXPBVRunService@2@VRunTransition@2@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/ScriptContext.cpp
