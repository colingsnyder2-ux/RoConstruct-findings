// roc 2007-08 0057b280  unit: RBX::RootInstance  size: 115 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0057b280
//
// 0057b280  64a100000000         mov eax, dword ptr fs:[0]
// 0057b286  6aff                 push -1
// 0057b288  68ce557500           push 0x7555ce
// 0057b28d  50                   push eax
// 0057b28e  b801000000           mov eax, 1
// 0057b293  64892500000000       mov dword ptr fs:[0], esp
// 0057b29a  840550308c00         test byte ptr [0x8c3050], al
// 0057b2a0  753e                 jne 0x57b2e0
// 0057b2a2  090550308c00         or dword ptr [0x8c3050], eax
// 0057b2a8  68a8ac7900           push 0x79aca8
// 0057b2ad  68d8c28800           push 0x88c2d8
// 0057b2b2  6884ae7900           push 0x79ae84
// 0057b2b7  b940308c00           mov ecx, 0x8c3040
// 0057b2bc  c744241400000000     mov dword ptr [esp + 0x14], 0
// 0057b2c4  e8b7b4f0ff           call 0x486780
// 0057b2c9  6880a47700           push 0x77a480
// 0057b2ce  c70540308c00a4ac7900 mov dword ptr [0x8c3040], 0x79aca4
// 0057b2d8  e8465a0b00           call 0x630d23
// 0057b2dd  83c404               add esp, 4
// 0057b2e0  8b0c24               mov ecx, dword ptr [esp]
// 0057b2e3  b840308c00           mov eax, 0x8c3040
// 0057b2e8  64890d00000000       mov dword ptr fs:[0], ecx
// 0057b2ef  83c40c               add esp, 0xc
// 0057b2f2  c3                   ret 
// library rbxgs/v8datamodel\ModelInstance.cpp (function ??$singleton@PAVModelInstance@RBX@@@RefType@Reflection@RBX@@SAABV012@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/ModelInstance.cpp
