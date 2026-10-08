// roc 2009-12 00653150  unit: RBX::Script::W4ScriptExecutionLocation::?$EnumDesc  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00653150
//
// 00653150  64a100000000         mov eax, dword ptr fs:[0]
// 00653156  6aff                 push -1
// 00653158  685e2f9400           push 0x942f5e
// 0065315d  50                   push eax
// 0065315e  b801000000           mov eax, 1
// 00653163  64892500000000       mov dword ptr fs:[0], esp
// 0065316a  8405fcebb800         test byte ptr [0xb8ebfc], al
// 00653170  7525                 jne 0x653197
// 00653172  0905fcebb800         or dword ptr [0xb8ebfc], eax
// 00653178  b910ebb800           mov ecx, 0xb8eb10
// 0065317d  c744240800000000     mov dword ptr [esp + 8], 0
// 00653185  e8e6cefdff           call 0x630070
// 0065318a  6890389800           push 0x983890
// 0065318f  e895171a00           call 0x7f4929
// 00653194  83c404               add esp, 4
// 00653197  8b0c24               mov ecx, dword ptr [esp]
// 0065319a  b810ebb800           mov eax, 0xb8eb10
// 0065319f  64890d00000000       mov dword ptr fs:[0], ecx
// 006531a6  83c40c               add esp, 0xc
// 006531a9  c3                   ret 
// library rbxgs-appdraw/Fonts.cpp (function ?singleton@ContentProvider@RBX@@SAAAV12@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-appdraw Fonts.cpp
