// roc 2009-12 005d4d30  unit: RBX::VRenderSurfaceTypes::?$Table  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 005d4d30
//
// 005d4d30  64a100000000         mov eax, dword ptr fs:[0]
// 005d4d36  6aff                 push -1
// 005d4d38  682ed59300           push 0x93d52e
// 005d4d3d  50                   push eax
// 005d4d3e  b801000000           mov eax, 1
// 005d4d43  64892500000000       mov dword ptr fs:[0], esp
// 005d4d4a  8405fc2cb800         test byte ptr [0xb82cfc], al
// 005d4d50  7525                 jne 0x5d4d77
// 005d4d52  0905fc2cb800         or dword ptr [0xb82cfc], eax
// 005d4d58  b9982cb800           mov ecx, 0xb82c98
// 005d4d5d  c744240800000000     mov dword ptr [esp + 8], 0
// 005d4d65  e876f7ffff           call 0x5d44e0
// 005d4d6a  68b00d9800           push 0x980db0
// 005d4d6f  e8b5fb2100           call 0x7f4929
// 005d4d74  83c404               add esp, 4
// 005d4d77  8b0c24               mov ecx, dword ptr [esp]
// 005d4d7a  b8982cb800           mov eax, 0xb82c98
// 005d4d7f  64890d00000000       mov dword ptr fs:[0], ecx
// 005d4d86  83c40c               add esp, 0xc
// 005d4d89  c3                   ret 
// library rbxgs-appdraw/Fonts.cpp (function ?singleton@ContentProvider@RBX@@SAAAV12@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-appdraw Fonts.cpp
