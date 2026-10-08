// roc 2007-08 007705d0  unit: seg_00770000  size: 60 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 007705d0
//
// 007705d0  56                   push esi
// 007705d1  6a01                 push 1
// 007705d3  6844527a00           push 0x7a5244
// 007705d8  6850527a00           push 0x7a5250
// 007705dd  83ec0c               sub esp, 0xc
// 007705e0  8bc4                 mov eax, esp
// 007705e2  b960ae5b00           mov ecx, 0x5bae60
// 007705e7  8908                 mov dword ptr [eax], ecx
// 007705e9  33d2                 xor edx, edx
// 007705eb  33f6                 xor esi, esi
// 007705ed  895004               mov dword ptr [eax + 4], edx
// 007705f0  b9c80e8c00           mov ecx, 0x8c0ec8
// 007705f5  897008               mov dword ptr [eax + 8], esi
// 007705f8  e8d319dcff           call 0x531fd0
// 007705fd  6820947700           push 0x779420
// 00770602  e81c07ecff           call 0x630d23
// 00770607  83c404               add esp, 4
// 0077060a  5e                   pop esi
// 0077060b  c3                   ret 
// library rbxgs/v8datamodel\ModelInstance.cpp (function ??__Emodel_moveFunction@RBX@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/ModelInstance.cpp
