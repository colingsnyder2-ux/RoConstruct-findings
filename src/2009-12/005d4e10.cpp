// roc 2009-12 005d4e10  unit: RBX::VRenderSurfaceTypes::?$Table  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 005d4e10
//
// 005d4e10  64a100000000         mov eax, dword ptr fs:[0]
// 005d4e16  6aff                 push -1
// 005d4e18  686ed59300           push 0x93d56e
// 005d4e1d  50                   push eax
// 005d4e1e  b801000000           mov eax, 1
// 005d4e23  64892500000000       mov dword ptr fs:[0], esp
// 005d4e2a  8405cc2db800         test byte ptr [0xb82dcc], al
// 005d4e30  7525                 jne 0x5d4e57
// 005d4e32  0905cc2db800         or dword ptr [0xb82dcc], eax
// 005d4e38  b9682db800           mov ecx, 0xb82d68
// 005d4e3d  c744240800000000     mov dword ptr [esp + 8], 0
// 005d4e45  e846f7ffff           call 0x5d4590
// 005d4e4a  68900d9800           push 0x980d90
// 005d4e4f  e8d5fa2100           call 0x7f4929
// 005d4e54  83c404               add esp, 4
// 005d4e57  8b0c24               mov ecx, dword ptr [esp]
// 005d4e5a  b8682db800           mov eax, 0xb82d68
// 005d4e5f  64890d00000000       mov dword ptr fs:[0], ecx
// 005d4e66  83c40c               add esp, 0xc
// 005d4e69  c3                   ret 
// library rbxgs-appdraw/Fonts.cpp (function ?singleton@ContentProvider@RBX@@SAAAV12@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-appdraw Fonts.cpp
