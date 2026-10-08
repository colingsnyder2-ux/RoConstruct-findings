// roc 2007-08 00771e80  unit: seg_00770000  size: 55 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00771e80
//
// 00771e80  56                   push esi
// 00771e81  6a01                 push 1
// 00771e83  6830527a00           push 0x7a5230
// 00771e88  83ec0c               sub esp, 0xc
// 00771e8b  8bc4                 mov eax, esp
// 00771e8d  b9803d5700           mov ecx, 0x573d80
// 00771e92  8908                 mov dword ptr [eax], ecx
// 00771e94  33d2                 xor edx, edx
// 00771e96  33f6                 xor esi, esi
// 00771e98  895004               mov dword ptr [eax + 4], edx
// 00771e9b  b988288c00           mov ecx, 0x8c2888
// 00771ea0  897008               mov dword ptr [eax + 8], esi
// 00771ea3  e8586be0ff           call 0x578a00
// 00771ea8  6870a37700           push 0x77a370
// 00771ead  e871eeebff           call 0x630d23
// 00771eb2  83c404               add esp, 4
// 00771eb5  5e                   pop esi
// 00771eb6  c3                   ret 
// library rbxgs/v8datamodel\ModelInstance.cpp (function ??__Edesc_makeJoints@RBX@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/ModelInstance.cpp
