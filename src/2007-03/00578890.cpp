// roc 2007-03 00578890  unit: seg_00570000  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00578890
//
// 00578890  64a100000000         mov eax, dword ptr fs:[0]
// 00578896  6aff                 push -1
// 00578898  686e667500           push 0x75666e
// 0057889d  50                   push eax
// 0057889e  b801000000           mov eax, 1
// 005788a3  64892500000000       mov dword ptr fs:[0], esp
// 005788aa  840548d08b00         test byte ptr [0x8bd048], al
// 005788b0  7525                 jne 0x5788d7
// 005788b2  090548d08b00         or dword ptr [0x8bd048], eax
// 005788b8  b9b8cf8b00           mov ecx, 0x8bcfb8
// 005788bd  c744240800000000     mov dword ptr [esp + 8], 0
// 005788c5  e826feffff           call 0x5786f0
// 005788ca  68e0a17700           push 0x77a1e0
// 005788cf  e8df680a00           call 0x61f1b3
// 005788d4  83c404               add esp, 4
// 005788d7  8b0c24               mov ecx, dword ptr [esp]
// 005788da  b8b8cf8b00           mov eax, 0x8bcfb8
// 005788df  64890d00000000       mov dword ptr fs:[0], ecx
// 005788e6  83c40c               add esp, 0xc
// 005788e9  c3                   ret 
// library rbxgs/gui\GuiDraw.cpp (function ?singleton@ContentProvider@RBX@@SAAAV12@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs gui/GuiDraw.cpp
