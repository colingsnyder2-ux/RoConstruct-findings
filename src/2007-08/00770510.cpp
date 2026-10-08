// roc 2007-08 00770510  unit: seg_00770000  size: 55 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00770510
//
// 00770510  56                   push esi
// 00770511  6a01                 push 1
// 00770513  6824527a00           push 0x7a5224
// 00770518  83ec0c               sub esp, 0xc
// 0077051b  8bc4                 mov eax, esp
// 0077051d  b940125300           mov ecx, 0x531240
// 00770522  8908                 mov dword ptr [eax], ecx
// 00770524  33d2                 xor edx, edx
// 00770526  33f6                 xor esi, esi
// 00770528  895004               mov dword ptr [eax + 4], edx
// 0077052b  b9900e8c00           mov ecx, 0x8c0e90
// 00770530  897008               mov dword ptr [eax + 8], esi
// 00770533  e88819dcff           call 0x531ec0
// 00770538  6850947700           push 0x779450
// 0077053d  e8e107ecff           call 0x630d23
// 00770542  83c404               add esp, 4
// 00770545  5e                   pop esi
// 00770546  c3                   ret 
// library rbxgs/v8datamodel\ModelInstance.cpp (function ??__Edesc_breakJoints@RBX@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/ModelInstance.cpp
