// roc 2008-06 0056cca0  unit: G3D::VColor3::?$holder  size: 100 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0056cca0
//
// 0056cca0  64a100000000         mov eax, dword ptr fs:[0]
// 0056cca6  6aff                 push -1
// 0056cca8  687efd7c00           push 0x7cfd7e
// 0056ccad  50                   push eax
// 0056ccae  b801000000           mov eax, 1
// 0056ccb3  64892500000000       mov dword ptr fs:[0], esp
// 0056ccba  8405cc4b9700         test byte ptr [0x974bcc], al
// 0056ccc0  752f                 jne 0x56ccf1
// 0056ccc2  0905cc4b9700         or dword ptr [0x974bcc], eax
// 0056ccc8  68dcbe9200           push 0x92bedc
// 0056cccd  68100e8200           push 0x820e10
// 0056ccd2  b9bc4b9700           mov ecx, 0x974bbc
// 0056ccd7  c744241000000000     mov dword ptr [esp + 0x10], 0
// 0056ccdf  e8acf0ffff           call 0x56bd90
// 0056cce4  6860d27f00           push 0x7fd260
// 0056cce9  e8c14a1300           call 0x6a17af
// 0056ccee  83c404               add esp, 4
// 0056ccf1  8b0c24               mov ecx, dword ptr [esp]
// 0056ccf4  b8bc4b9700           mov eax, 0x974bbc
// 0056ccf9  64890d00000000       mov dword ptr fs:[0], ecx
// 0056cd00  83c40c               add esp, 0xc
// 0056cd03  c3                   ret 
// library rbxgs/v8tree\EnumProperty.cpp (function ??$singleton@M@Type@Reflection@RBX@@SAABV012@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8tree/EnumProperty.cpp
