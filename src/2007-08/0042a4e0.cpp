// roc 2007-08 0042a4e0  unit: MainLogManager  size: 18 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0042a4e0
//
// 0042a4e0  8bc1                 mov eax, ecx
// 0042a4e2  8b88bc000000         mov ecx, dword ptr [eax + 0xbc]
// 0042a4e8  85c9                 test ecx, ecx
// 0042a4ea  7405                 je 0x42a4f1
// 0042a4ec  e9efffffff           jmp 0x42a4e0
// 0042a4f1  c3                   ret 
// library rbxgs/script\ScriptContext.cpp (function ?getRootAncestor@Instance@RBX@@QAEPAV12@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/ScriptContext.cpp
