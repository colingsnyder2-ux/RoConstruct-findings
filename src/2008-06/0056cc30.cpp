// roc 2008-06 0056cc30  unit: G3D::VColor3::?$holder  size: 100 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0056cc30
//
// 0056cc30  64a100000000         mov eax, dword ptr fs:[0]
// 0056cc36  6aff                 push -1
// 0056cc38  685efd7c00           push 0x7cfd5e
// 0056cc3d  50                   push eax
// 0056cc3e  b801000000           mov eax, 1
// 0056cc43  64892500000000       mov dword ptr fs:[0], esp
// 0056cc4a  8405b84b9700         test byte ptr [0x974bb8], al
// 0056cc50  752f                 jne 0x56cc81
// 0056cc52  0905b84b9700         or dword ptr [0x974bb8], eax
// 0056cc58  6844969200           push 0x929644
// 0056cc5d  68ec0d8200           push 0x820dec
// 0056cc62  b9a84b9700           mov ecx, 0x974ba8
// 0056cc67  c744241000000000     mov dword ptr [esp + 0x10], 0
// 0056cc6f  e81cf1ffff           call 0x56bd90
// 0056cc74  6850d27f00           push 0x7fd250
// 0056cc79  e8314b1300           call 0x6a17af
// 0056cc7e  83c404               add esp, 4
// 0056cc81  8b0c24               mov ecx, dword ptr [esp]
// 0056cc84  b8a84b9700           mov eax, 0x974ba8
// 0056cc89  64890d00000000       mov dword ptr fs:[0], ecx
// 0056cc90  83c40c               add esp, 0xc
// 0056cc93  c3                   ret 
// library rbxgs/v8tree\EnumProperty.cpp (function ??$singleton@_N@Type@Reflection@RBX@@SAABV012@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8tree/EnumProperty.cpp
