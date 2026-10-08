// roc 2007-08 00770590  unit: seg_00770000  size: 60 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00770590
//
// 00770590  56                   push esi
// 00770591  6a01                 push 1
// 00770593  6844527a00           push 0x7a5244
// 00770598  683c527a00           push 0x7a523c
// 0077059d  83ec0c               sub esp, 0xc
// 007705a0  8bc4                 mov eax, esp
// 007705a2  b960ae5b00           mov ecx, 0x5bae60
// 007705a7  8908                 mov dword ptr [eax], ecx
// 007705a9  33d2                 xor edx, edx
// 007705ab  33f6                 xor esi, esi
// 007705ad  895004               mov dword ptr [eax + 4], edx
// 007705b0  b9100e8c00           mov ecx, 0x8c0e10
// 007705b5  897008               mov dword ptr [eax + 8], esi
// 007705b8  e8131adcff           call 0x531fd0
// 007705bd  6840947700           push 0x779440
// 007705c2  e85c07ecff           call 0x630d23
// 007705c7  83c404               add esp, 4
// 007705ca  5e                   pop esi
// 007705cb  c3                   ret 
// library rbxgs/v8datamodel\ModelInstance.cpp (function ??__Emodel_moveFunctionOld@RBX@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/ModelInstance.cpp
