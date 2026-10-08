// roc 2009-12 005d4da0  unit: RBX::VRenderSurfaceTypes::?$Table  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 005d4da0
//
// 005d4da0  64a100000000         mov eax, dword ptr fs:[0]
// 005d4da6  6aff                 push -1
// 005d4da8  684ed59300           push 0x93d54e
// 005d4dad  50                   push eax
// 005d4dae  b801000000           mov eax, 1
// 005d4db3  64892500000000       mov dword ptr fs:[0], esp
// 005d4dba  8405642db800         test byte ptr [0xb82d64], al
// 005d4dc0  7525                 jne 0x5d4de7
// 005d4dc2  0905642db800         or dword ptr [0xb82d64], eax
// 005d4dc8  b9002db800           mov ecx, 0xb82d00
// 005d4dcd  c744240800000000     mov dword ptr [esp + 8], 0
// 005d4dd5  e856f6ffff           call 0x5d4430
// 005d4dda  68a00d9800           push 0x980da0
// 005d4ddf  e845fb2100           call 0x7f4929
// 005d4de4  83c404               add esp, 4
// 005d4de7  8b0c24               mov ecx, dword ptr [esp]
// 005d4dea  b8002db800           mov eax, 0xb82d00
// 005d4def  64890d00000000       mov dword ptr fs:[0], ecx
// 005d4df6  83c40c               add esp, 0xc
// 005d4df9  c3                   ret 
// library rbxgs-appdraw/Fonts.cpp (function ?singleton@ContentProvider@RBX@@SAAAV12@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-appdraw Fonts.cpp
