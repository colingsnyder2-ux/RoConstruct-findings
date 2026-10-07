// roc 2007-08 00587080  unit: RBX::Reflection::_N::?$TypedPropertyDescriptor  size: 100 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00587080
//
// 00587080  64a100000000         mov eax, dword ptr fs:[0]
// 00587086  6aff                 push -1
// 00587088  681e5f7500           push 0x755f1e
// 0058708d  50                   push eax
// 0058708e  b801000000           mov eax, 1
// 00587093  64892500000000       mov dword ptr fs:[0], esp
// 0058709a  840524338c00         test byte ptr [0x8c3324], al
// 005870a0  752f                 jne 0x5870d1
// 005870a2  090524338c00         or dword ptr [0x8c3324], eax
// 005870a8  68f0ab8900           push 0x89abf0
// 005870ad  6870cf7a00           push 0x7acf70
// 005870b2  b914338c00           mov ecx, 0x8c3314
// 005870b7  c744241000000000     mov dword ptr [esp + 0x10], 0
// 005870bf  e83c55feff           call 0x56c600
// 005870c4  6880a67700           push 0x77a680
// 005870c9  e8559c0a00           call 0x630d23
// 005870ce  83c404               add esp, 4
// 005870d1  8b0c24               mov ecx, dword ptr [esp]
// 005870d4  b814338c00           mov eax, 0x8c3314
// 005870d9  64890d00000000       mov dword ptr fs:[0], ecx
// 005870e0  83c40c               add esp, 0xc
// 005870e3  c3                   ret 
// library rbxgs/reflection\reflection_property.cpp (function ??$singleton@PBVPropertyDescriptor@Reflection@RBX@@@Type@Reflection@RBX@@SAABV012@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs reflection/reflection_property.cpp
