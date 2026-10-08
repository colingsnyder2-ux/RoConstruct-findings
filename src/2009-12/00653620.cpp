// roc 2009-12 00653620  unit: RBX::Script::W4ScriptExecutionLocation::?$EnumDesc  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00653620
//
// 00653620  64a100000000         mov eax, dword ptr fs:[0]
// 00653626  6aff                 push -1
// 00653628  68be309400           push 0x9430be
// 0065362d  50                   push eax
// 0065362e  b801000000           mov eax, 1
// 00653633  64892500000000       mov dword ptr fs:[0], esp
// 0065363a  84054cf6b800         test byte ptr [0xb8f64c], al
// 00653640  7525                 jne 0x653667
// 00653642  09054cf6b800         or dword ptr [0xb8f64c], eax
// 00653648  b960f5b800           mov ecx, 0xb8f560
// 0065364d  c744240800000000     mov dword ptr [esp + 8], 0
// 00653655  e8b6f31100           call 0x772a10
// 0065365a  68e0379800           push 0x9837e0
// 0065365f  e8c5121a00           call 0x7f4929
// 00653664  83c404               add esp, 4
// 00653667  8b0c24               mov ecx, dword ptr [esp]
// 0065366a  b860f5b800           mov eax, 0xb8f560
// 0065366f  64890d00000000       mov dword ptr fs:[0], ecx
// 00653676  83c40c               add esp, 0xc
// 00653679  c3                   ret 
// library rbxgs-appdraw/Fonts.cpp (function ?singleton@ContentProvider@RBX@@SAAAV12@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-appdraw Fonts.cpp
