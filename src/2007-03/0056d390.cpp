// roc 2007-03 0056d390  unit: seg_00560000  size: 100 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0056d390
//
// 0056d390  64a100000000         mov eax, dword ptr fs:[0]
// 0056d396  6aff                 push -1
// 0056d398  689e5e7500           push 0x755e9e
// 0056d39d  50                   push eax
// 0056d39e  b801000000           mov eax, 1
// 0056d3a3  64892500000000       mov dword ptr fs:[0], esp
// 0056d3aa  84058cc78b00         test byte ptr [0x8bc78c], al
// 0056d3b0  752f                 jne 0x56d3e1
// 0056d3b2  09058cc78b00         or dword ptr [0x8bc78c], eax
// 0056d3b8  68fc198800           push 0x8819fc
// 0056d3bd  68c8b67a00           push 0x7ab6c8
// 0056d3c2  b97cc78b00           mov ecx, 0x8bc77c
// 0056d3c7  c744241000000000     mov dword ptr [esp + 0x10], 0
// 0056d3cf  e87ceeffff           call 0x56c250
// 0056d3d4  68909c7700           push 0x779c90
// 0056d3d9  e8d51d0b00           call 0x61f1b3
// 0056d3de  83c404               add esp, 4
// 0056d3e1  8b0c24               mov ecx, dword ptr [esp]
// 0056d3e4  b87cc78b00           mov eax, 0x8bc77c
// 0056d3e9  64890d00000000       mov dword ptr fs:[0], ecx
// 0056d3f0  83c40c               add esp, 0xc
// 0056d3f3  c3                   ret 
// library openrbx-client/App\v8tree\enumproperty.cpp (function ??$singleton@VContentId@RBX@@@Type@Reflection@RBX@@SAABV012@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8tree/enumproperty.cpp
