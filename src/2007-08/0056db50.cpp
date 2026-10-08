// roc 2007-08 0056db50  unit: RBX::VContentId::?$holder  size: 100 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0056db50
//
// 0056db50  64a100000000         mov eax, dword ptr fs:[0]
// 0056db56  6aff                 push -1
// 0056db58  68ee4a7500           push 0x754aee
// 0056db5d  50                   push eax
// 0056db5e  b801000000           mov eax, 1
// 0056db63  64892500000000       mov dword ptr fs:[0], esp
// 0056db6a  840500258c00         test byte ptr [0x8c2500], al
// 0056db70  752f                 jne 0x56dba1
// 0056db72  090500258c00         or dword ptr [0x8c2500], eax
// 0056db78  68f4998900           push 0x8999f4
// 0056db7d  6800a07a00           push 0x7aa000
// 0056db82  b9f0248c00           mov ecx, 0x8c24f0
// 0056db87  c744241000000000     mov dword ptr [esp + 0x10], 0
// 0056db8f  e86ceaffff           call 0x56c600
// 0056db94  68809e7700           push 0x779e80
// 0056db99  e885310c00           call 0x630d23
// 0056db9e  83c404               add esp, 4
// 0056dba1  8b0c24               mov ecx, dword ptr [esp]
// 0056dba4  b8f0248c00           mov eax, 0x8c24f0
// 0056dba9  64890d00000000       mov dword ptr fs:[0], ecx
// 0056dbb0  83c40c               add esp, 0xc
// 0056dbb3  c3                   ret 
// library rbxgs/v8tree\EnumProperty.cpp (function ??$singleton@VColor3@G3D@@@Type@Reflection@RBX@@SAABV012@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8tree/EnumProperty.cpp
