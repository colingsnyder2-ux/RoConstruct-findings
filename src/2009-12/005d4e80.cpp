// roc 2009-12 005d4e80  unit: RBX::VRenderSurfaceTypes::?$Table  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 005d4e80
//
// 005d4e80  64a100000000         mov eax, dword ptr fs:[0]
// 005d4e86  6aff                 push -1
// 005d4e88  688ed59300           push 0x93d58e
// 005d4e8d  50                   push eax
// 005d4e8e  b801000000           mov eax, 1
// 005d4e93  64892500000000       mov dword ptr fs:[0], esp
// 005d4e9a  8405342eb800         test byte ptr [0xb82e34], al
// 005d4ea0  7525                 jne 0x5d4ec7
// 005d4ea2  0905342eb800         or dword ptr [0xb82e34], eax
// 005d4ea8  b9d02db800           mov ecx, 0xb82dd0
// 005d4ead  c744240800000000     mov dword ptr [esp + 8], 0
// 005d4eb5  e816f4ffff           call 0x5d42d0
// 005d4eba  68800d9800           push 0x980d80
// 005d4ebf  e865fa2100           call 0x7f4929
// 005d4ec4  83c404               add esp, 4
// 005d4ec7  8b0c24               mov ecx, dword ptr [esp]
// 005d4eca  b8d02db800           mov eax, 0xb82dd0
// 005d4ecf  64890d00000000       mov dword ptr fs:[0], ecx
// 005d4ed6  83c40c               add esp, 0xc
// 005d4ed9  c3                   ret 
// library rbxgs-appdraw/Fonts.cpp (function ?singleton@ContentProvider@RBX@@SAAAV12@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-appdraw Fonts.cpp
