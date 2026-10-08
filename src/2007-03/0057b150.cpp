// roc 2007-03 0057b150  unit: seg_00570000  size: 115 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0057b150
//
// 0057b150  64a100000000         mov eax, dword ptr fs:[0]
// 0057b156  6aff                 push -1
// 0057b158  68ee687500           push 0x7568ee
// 0057b15d  50                   push eax
// 0057b15e  b801000000           mov eax, 1
// 0057b163  64892500000000       mov dword ptr fs:[0], esp
// 0057b16a  840520d38b00         test byte ptr [0x8bd320], al
// 0057b170  753e                 jne 0x57b1b0
// 0057b172  090520d38b00         or dword ptr [0x8bd320], eax
// 0057b178  68709e7900           push 0x799e70
// 0057b17d  6804b38800           push 0x88b304
// 0057b182  68c09f7900           push 0x799fc0
// 0057b187  b910d38b00           mov ecx, 0x8bd310
// 0057b18c  c744241400000000     mov dword ptr [esp + 0x14], 0
// 0057b194  e8e799f0ff           call 0x484b80
// 0057b199  6800a27700           push 0x77a200
// 0057b19e  c70510d38b006c9e7900 mov dword ptr [0x8bd310], 0x799e6c
// 0057b1a8  e806400a00           call 0x61f1b3
// 0057b1ad  83c404               add esp, 4
// 0057b1b0  8b0c24               mov ecx, dword ptr [esp]
// 0057b1b3  b810d38b00           mov eax, 0x8bd310
// 0057b1b8  64890d00000000       mov dword ptr fs:[0], ecx
// 0057b1bf  83c40c               add esp, 0xc
// 0057b1c2  c3                   ret 
// library rbxgs/v8datamodel\ModelInstance.cpp (function ??$singleton@PAVModelInstance@RBX@@@RefType@Reflection@RBX@@SAABV012@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/ModelInstance.cpp
