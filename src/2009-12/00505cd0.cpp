// roc 2009-12 00505cd0  unit: rbx::signals::Z::$$A6AXN::?$signal::slot  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00505cd0
//
// 00505cd0  64a100000000         mov eax, dword ptr fs:[0]
// 00505cd6  6aff                 push -1
// 00505cd8  68fe679300           push 0x9367fe
// 00505cdd  50                   push eax
// 00505cde  b801000000           mov eax, 1
// 00505ce3  64892500000000       mov dword ptr fs:[0], esp
// 00505cea  8405d4e3b700         test byte ptr [0xb7e3d4], al
// 00505cf0  7525                 jne 0x505d17
// 00505cf2  0905d4e3b700         or dword ptr [0xb7e3d4], eax
// 00505cf8  b9e8e2b700           mov ecx, 0xb7e2e8
// 00505cfd  c744240800000000     mov dword ptr [esp + 8], 0
// 00505d05  e8e6d9ffff           call 0x5036f0
// 00505d0a  6860f39700           push 0x97f360
// 00505d0f  e815ec2e00           call 0x7f4929
// 00505d14  83c404               add esp, 4
// 00505d17  8b0c24               mov ecx, dword ptr [esp]
// 00505d1a  b8e8e2b700           mov eax, 0xb7e2e8
// 00505d1f  64890d00000000       mov dword ptr fs:[0], ecx
// 00505d26  83c40c               add esp, 0xc
// 00505d29  c3                   ret 
// library rbxgs-appdraw/Fonts.cpp (function ?singleton@ContentProvider@RBX@@SAAAV12@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-appdraw Fonts.cpp
