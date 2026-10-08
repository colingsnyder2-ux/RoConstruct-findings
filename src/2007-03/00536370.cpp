// roc 2007-03 00536370  unit: seg_00530000  size: 24 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00536370
//
// 00536370  8b81f8000000         mov eax, dword ptr [ecx + 0xf8]
// 00536376  85c0                 test eax, eax
// 00536378  740d                 je 0x536387
// 0053637a  6a00                 push 0
// 0053637c  6a02                 push 2
// 0053637e  50                   push eax
// 0053637f  e83c350800           call 0x5b98c0
// 00536384  83c40c               add esp, 0xc
// 00536387  c3                   ret 
// library rbxgs/script\ScriptContext.cpp (function ?gc@ScriptContext@RBX@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/ScriptContext.cpp
