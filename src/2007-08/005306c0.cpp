// roc 2007-08 005306c0  unit: RBX::ModelInstance  size: 115 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005306c0
//
// 005306c0  64a100000000         mov eax, dword ptr fs:[0]
// 005306c6  6aff                 push -1
// 005306c8  68be067500           push 0x7506be
// 005306cd  50                   push eax
// 005306ce  b801000000           mov eax, 1
// 005306d3  64892500000000       mov dword ptr fs:[0], esp
// 005306da  8405500f8c00         test byte ptr [0x8c0f50], al
// 005306e0  753e                 jne 0x530720
// 005306e2  0905500f8c00         or dword ptr [0x8c0f50], eax
// 005306e8  68a8ac7900           push 0x79aca8
// 005306ed  68d8c28800           push 0x88c2d8
// 005306f2  6884ae7900           push 0x79ae84
// 005306f7  b9400f8c00           mov ecx, 0x8c0f40
// 005306fc  c744241400000000     mov dword ptr [esp + 0x14], 0
// 00530704  e87760f5ff           call 0x486780
// 00530709  68b0937700           push 0x7793b0
// 0053070e  c705400f8c00a4ac7900 mov dword ptr [0x8c0f40], 0x79aca4
// 00530718  e806061000           call 0x630d23
// 0053071d  83c404               add esp, 4
// 00530720  8b0c24               mov ecx, dword ptr [esp]
// 00530723  b8400f8c00           mov eax, 0x8c0f40
// 00530728  64890d00000000       mov dword ptr fs:[0], ecx
// 0053072f  83c40c               add esp, 0xc
// 00530732  c3                   ret 
// library rbxgs/v8datamodel\ModelInstance.cpp (function ??$singleton@PAVModelInstance@RBX@@@RefType@Reflection@RBX@@SAABV012@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/ModelInstance.cpp
