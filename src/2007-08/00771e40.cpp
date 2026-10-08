// roc 2007-08 00771e40  unit: seg_00770000  size: 55 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00771e40
//
// 00771e40  56                   push esi
// 00771e41  6a01                 push 1
// 00771e43  6824527a00           push 0x7a5224
// 00771e48  83ec0c               sub esp, 0xc
// 00771e4b  8bc4                 mov eax, esp
// 00771e4d  b9603d5700           mov ecx, 0x573d60
// 00771e52  8908                 mov dword ptr [eax], ecx
// 00771e54  33d2                 xor edx, edx
// 00771e56  33f6                 xor esi, esi
// 00771e58  895004               mov dword ptr [eax + 4], edx
// 00771e5b  b9f0298c00           mov ecx, 0x8c29f0
// 00771e60  897008               mov dword ptr [eax + 8], esi
// 00771e63  e8986be0ff           call 0x578a00
// 00771e68  6890a37700           push 0x77a390
// 00771e6d  e8b1eeebff           call 0x630d23
// 00771e72  83c404               add esp, 4
// 00771e75  5e                   pop esi
// 00771e76  c3                   ret 
// library rbxgs/v8datamodel\ModelInstance.cpp (function ??__Edesc_breakJoints@RBX@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/ModelInstance.cpp
