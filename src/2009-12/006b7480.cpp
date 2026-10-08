// roc 2009-12 006b7480  unit: RBX::Soundscape::VSoundChannel::?$BoundFuncDesc  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 006b7480
//
// 006b7480  64a100000000         mov eax, dword ptr fs:[0]
// 006b7486  6aff                 push -1
// 006b7488  68ee879400           push 0x9487ee
// 006b748d  50                   push eax
// 006b748e  b801000000           mov eax, 1
// 006b7493  64892500000000       mov dword ptr fs:[0], esp
// 006b749a  84059420b900         test byte ptr [0xb92094], al
// 006b74a0  7525                 jne 0x6b74c7
// 006b74a2  09059420b900         or dword ptr [0xb92094], eax
// 006b74a8  b9a81fb900           mov ecx, 0xb91fa8
// 006b74ad  c744240800000000     mov dword ptr [esp + 8], 0
// 006b74b5  e8f6f9ffff           call 0x6b6eb0
// 006b74ba  68c0579800           push 0x9857c0
// 006b74bf  e865d41300           call 0x7f4929
// 006b74c4  83c404               add esp, 4
// 006b74c7  8b0c24               mov ecx, dword ptr [esp]
// 006b74ca  b8a81fb900           mov eax, 0xb91fa8
// 006b74cf  64890d00000000       mov dword ptr fs:[0], ecx
// 006b74d6  83c40c               add esp, 0xc
// 006b74d9  c3                   ret 
// library rbxgs-appdraw/Fonts.cpp (function ?singleton@ContentProvider@RBX@@SAAAV12@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-appdraw Fonts.cpp
