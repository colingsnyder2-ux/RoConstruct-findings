// roc 2009-12 005d4ef0  unit: RBX::VRenderSurfaceTypes::?$Table  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 005d4ef0
//
// 005d4ef0  64a100000000         mov eax, dword ptr fs:[0]
// 005d4ef6  6aff                 push -1
// 005d4ef8  68aed59300           push 0x93d5ae
// 005d4efd  50                   push eax
// 005d4efe  b801000000           mov eax, 1
// 005d4f03  64892500000000       mov dword ptr fs:[0], esp
// 005d4f0a  84059c2eb800         test byte ptr [0xb82e9c], al
// 005d4f10  7525                 jne 0x5d4f37
// 005d4f12  09059c2eb800         or dword ptr [0xb82e9c], eax
// 005d4f18  b9382eb800           mov ecx, 0xb82e38
// 005d4f1d  c744240800000000     mov dword ptr [esp + 8], 0
// 005d4f25  e856f4ffff           call 0x5d4380
// 005d4f2a  68700d9800           push 0x980d70
// 005d4f2f  e8f5f92100           call 0x7f4929
// 005d4f34  83c404               add esp, 4
// 005d4f37  8b0c24               mov ecx, dword ptr [esp]
// 005d4f3a  b8382eb800           mov eax, 0xb82e38
// 005d4f3f  64890d00000000       mov dword ptr fs:[0], ecx
// 005d4f46  83c40c               add esp, 0xc
// 005d4f49  c3                   ret 
// library rbxgs-appdraw/Fonts.cpp (function ?singleton@ContentProvider@RBX@@SAAAV12@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-appdraw Fonts.cpp
