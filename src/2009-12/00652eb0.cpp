// roc 2009-12 00652eb0  unit: RBX::Script::W4ScriptExecutionLocation::?$EnumDesc  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00652eb0
//
// 00652eb0  64a100000000         mov eax, dword ptr fs:[0]
// 00652eb6  6aff                 push -1
// 00652eb8  689e2e9400           push 0x942e9e
// 00652ebd  50                   push eax
// 00652ebe  b801000000           mov eax, 1
// 00652ec3  64892500000000       mov dword ptr fs:[0], esp
// 00652eca  84055ce6b800         test byte ptr [0xb8e65c], al
// 00652ed0  7525                 jne 0x652ef7
// 00652ed2  09055ce6b800         or dword ptr [0xb8e65c], eax
// 00652ed8  b970e5b800           mov ecx, 0xb8e570
// 00652edd  c744240800000000     mov dword ptr [esp + 8], 0
// 00652ee5  e816fe1100           call 0x772d00
// 00652eea  68f0389800           push 0x9838f0
// 00652eef  e8351a1a00           call 0x7f4929
// 00652ef4  83c404               add esp, 4
// 00652ef7  8b0c24               mov ecx, dword ptr [esp]
// 00652efa  b870e5b800           mov eax, 0xb8e570
// 00652eff  64890d00000000       mov dword ptr fs:[0], ecx
// 00652f06  83c40c               add esp, 0xc
// 00652f09  c3                   ret 
// library rbxgs-appdraw/Fonts.cpp (function ?singleton@ContentProvider@RBX@@SAAAV12@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-appdraw Fonts.cpp
