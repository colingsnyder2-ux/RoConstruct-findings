// roc 2007-08 005a56b0  unit: RBX::Humanoid  size: 16 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005a56b0
//
// 005a56b0  8b4c2404             mov ecx, dword ptr [esp + 4]
// 005a56b4  85c9                 test ecx, ecx
// 005a56b6  7405                 je 0x5a56bd
// 005a56b8  e963aaffff           jmp 0x5a0120
// 005a56bd  33c0                 xor eax, eax
// 005a56bf  c3                   ret 
// library rbxgs/script\Script.cpp (function ??$find@VScriptContext@RBX@@@ServiceProvider@RBX@@SAPAVScriptContext@1@PBV01@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
