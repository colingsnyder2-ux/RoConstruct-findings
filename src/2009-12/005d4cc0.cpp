// roc 2009-12 005d4cc0  unit: RBX::VRenderSurfaceTypes::?$Table  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 005d4cc0
//
// 005d4cc0  64a100000000         mov eax, dword ptr fs:[0]
// 005d4cc6  6aff                 push -1
// 005d4cc8  680ed59300           push 0x93d50e
// 005d4ccd  50                   push eax
// 005d4cce  b801000000           mov eax, 1
// 005d4cd3  64892500000000       mov dword ptr fs:[0], esp
// 005d4cda  8405942cb800         test byte ptr [0xb82c94], al
// 005d4ce0  7525                 jne 0x5d4d07
// 005d4ce2  0905942cb800         or dword ptr [0xb82c94], eax
// 005d4ce8  b9302cb800           mov ecx, 0xb82c30
// 005d4ced  c744240800000000     mov dword ptr [esp + 8], 0
// 005d4cf5  e826f5ffff           call 0x5d4220
// 005d4cfa  68c00d9800           push 0x980dc0
// 005d4cff  e825fc2100           call 0x7f4929
// 005d4d04  83c404               add esp, 4
// 005d4d07  8b0c24               mov ecx, dword ptr [esp]
// 005d4d0a  b8302cb800           mov eax, 0xb82c30
// 005d4d0f  64890d00000000       mov dword ptr fs:[0], ecx
// 005d4d16  83c40c               add esp, 0xc
// 005d4d19  c3                   ret 
// library rbxgs-appdraw/Fonts.cpp (function ?singleton@ContentProvider@RBX@@SAAAV12@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-appdraw Fonts.cpp
