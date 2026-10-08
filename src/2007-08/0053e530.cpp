// roc 2007-08 0053e530  unit: RBX::Reflection::Metadata::VItem::?$BoundPropGetSet  size: 115 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0053e530
//
// 0053e530  64a100000000         mov eax, dword ptr fs:[0]
// 0053e536  6aff                 push -1
// 0053e538  68be127500           push 0x7512be
// 0053e53d  50                   push eax
// 0053e53e  b801000000           mov eax, 1
// 0053e543  64892500000000       mov dword ptr fs:[0], esp
// 0053e54a  8405c4138c00         test byte ptr [0x8c13c4], al
// 0053e550  753e                 jne 0x53e590
// 0053e552  0905c4138c00         or dword ptr [0x8c13c4], eax
// 0053e558  68a8ac7900           push 0x79aca8
// 0053e55d  68d8c28800           push 0x88c2d8
// 0053e562  6884ae7900           push 0x79ae84
// 0053e567  b9b4138c00           mov ecx, 0x8c13b4
// 0053e56c  c744241400000000     mov dword ptr [esp + 0x14], 0
// 0053e574  e80782f4ff           call 0x486780
// 0053e579  6880957700           push 0x779580
// 0053e57e  c705b4138c00a4ac7900 mov dword ptr [0x8c13b4], 0x79aca4
// 0053e588  e896270f00           call 0x630d23
// 0053e58d  83c404               add esp, 4
// 0053e590  8b0c24               mov ecx, dword ptr [esp]
// 0053e593  b8b4138c00           mov eax, 0x8c13b4
// 0053e598  64890d00000000       mov dword ptr fs:[0], ecx
// 0053e59f  83c40c               add esp, 0xc
// 0053e5a2  c3                   ret 
// library rbxgs/v8datamodel\ModelInstance.cpp (function ??$singleton@PAVModelInstance@RBX@@@RefType@Reflection@RBX@@SAABV012@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/ModelInstance.cpp
