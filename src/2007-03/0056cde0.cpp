// roc 2007-03 0056cde0  unit: seg_00560000  size: 100 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0056cde0
//
// 0056cde0  64a100000000         mov eax, dword ptr fs:[0]
// 0056cde6  6aff                 push -1
// 0056cde8  687e5d7500           push 0x755d7e
// 0056cded  50                   push eax
// 0056cdee  b801000000           mov eax, 1
// 0056cdf3  64892500000000       mov dword ptr fs:[0], esp
// 0056cdfa  8405ecc68b00         test byte ptr [0x8bc6ec], al
// 0056ce00  752f                 jne 0x56ce31
// 0056ce02  0905ecc68b00         or dword ptr [0x8bc6ec], eax
// 0056ce08  687c198800           push 0x88197c
// 0056ce0d  6898b67a00           push 0x7ab698
// 0056ce12  b9dcc68b00           mov ecx, 0x8bc6dc
// 0056ce17  c744241000000000     mov dword ptr [esp + 0x10], 0
// 0056ce1f  e82cf4ffff           call 0x56c250
// 0056ce24  68309c7700           push 0x779c30
// 0056ce29  e885230b00           call 0x61f1b3
// 0056ce2e  83c404               add esp, 4
// 0056ce31  8b0c24               mov ecx, dword ptr [esp]
// 0056ce34  b8dcc68b00           mov eax, 0x8bc6dc
// 0056ce39  64890d00000000       mov dword ptr fs:[0], ecx
// 0056ce40  83c40c               add esp, 0xc
// 0056ce43  c3                   ret 
// library rbxgs/reflection\type.cpp (function ??$singleton@X@Type@Reflection@RBX@@SAABV012@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs reflection/type.cpp
