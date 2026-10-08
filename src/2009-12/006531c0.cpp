// roc 2009-12 006531c0  unit: RBX::Script::W4ScriptExecutionLocation::?$EnumDesc  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 006531c0
//
// 006531c0  64a100000000         mov eax, dword ptr fs:[0]
// 006531c6  6aff                 push -1
// 006531c8  687e2f9400           push 0x942f7e
// 006531cd  50                   push eax
// 006531ce  b801000000           mov eax, 1
// 006531d3  64892500000000       mov dword ptr fs:[0], esp
// 006531da  8405ececb800         test byte ptr [0xb8ecec], al
// 006531e0  7525                 jne 0x653207
// 006531e2  0905ececb800         or dword ptr [0xb8ecec], eax
// 006531e8  b900ecb800           mov ecx, 0xb8ec00
// 006531ed  c744240800000000     mov dword ptr [esp + 8], 0
// 006531f5  e836fe0e00           call 0x743030
// 006531fa  6880389800           push 0x983880
// 006531ff  e825171a00           call 0x7f4929
// 00653204  83c404               add esp, 4
// 00653207  8b0c24               mov ecx, dword ptr [esp]
// 0065320a  b800ecb800           mov eax, 0xb8ec00
// 0065320f  64890d00000000       mov dword ptr fs:[0], ecx
// 00653216  83c40c               add esp, 0xc
// 00653219  c3                   ret 
// library rbxgs-appdraw/Fonts.cpp (function ?singleton@ContentProvider@RBX@@SAAAV12@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-appdraw Fonts.cpp
