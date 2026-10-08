// roc 2009-12 005d5190  unit: RBX::MaterialBaseRefMaterialAdapter  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 005d5190
//
// 005d5190  64a100000000         mov eax, dword ptr fs:[0]
// 005d5196  6aff                 push -1
// 005d5198  682ed69300           push 0x93d62e
// 005d519d  50                   push eax
// 005d519e  b801000000           mov eax, 1
// 005d51a3  64892500000000       mov dword ptr fs:[0], esp
// 005d51aa  8405842fb800         test byte ptr [0xb82f84], al
// 005d51b0  7525                 jne 0x5d51d7
// 005d51b2  0905842fb800         or dword ptr [0xb82f84], eax
// 005d51b8  b9202fb800           mov ecx, 0xb82f20
// 005d51bd  c744240800000000     mov dword ptr [esp + 8], 0
// 005d51c5  e8a6f8ffff           call 0x5d4a70
// 005d51ca  68d00d9800           push 0x980dd0
// 005d51cf  e855f72100           call 0x7f4929
// 005d51d4  83c404               add esp, 4
// 005d51d7  8b0c24               mov ecx, dword ptr [esp]
// 005d51da  b8202fb800           mov eax, 0xb82f20
// 005d51df  64890d00000000       mov dword ptr fs:[0], ecx
// 005d51e6  83c40c               add esp, 0xc
// 005d51e9  c3                   ret 
// library rbxgs-appdraw/Fonts.cpp (function ?singleton@ContentProvider@RBX@@SAAAV12@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-appdraw Fonts.cpp
