// roc 2009-12 005d5120  unit: RBX::MaterialBaseRefMaterialAdapter  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 005d5120
//
// 005d5120  64a100000000         mov eax, dword ptr fs:[0]
// 005d5126  6aff                 push -1
// 005d5128  680ed69300           push 0x93d60e
// 005d512d  50                   push eax
// 005d512e  b801000000           mov eax, 1
// 005d5133  64892500000000       mov dword ptr fs:[0], esp
// 005d513a  84051c2fb800         test byte ptr [0xb82f1c], al
// 005d5140  7525                 jne 0x5d5167
// 005d5142  09051c2fb800         or dword ptr [0xb82f1c], eax
// 005d5148  b9b82eb800           mov ecx, 0xb82eb8
// 005d514d  c744240800000000     mov dword ptr [esp + 8], 0
// 005d5155  e866f8ffff           call 0x5d49c0
// 005d515a  68e00d9800           push 0x980de0
// 005d515f  e8c5f72100           call 0x7f4929
// 005d5164  83c404               add esp, 4
// 005d5167  8b0c24               mov ecx, dword ptr [esp]
// 005d516a  b8b82eb800           mov eax, 0xb82eb8
// 005d516f  64890d00000000       mov dword ptr fs:[0], ecx
// 005d5176  83c40c               add esp, 0xc
// 005d5179  c3                   ret 
// library rbxgs-appdraw/Fonts.cpp (function ?singleton@ContentProvider@RBX@@SAAAV12@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-appdraw Fonts.cpp
