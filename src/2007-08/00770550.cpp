// roc 2007-08 00770550  unit: seg_00770000  size: 55 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00770550
//
// 00770550  56                   push esi
// 00770551  6a01                 push 1
// 00770553  6830527a00           push 0x7a5230
// 00770558  83ec0c               sub esp, 0xc
// 0077055b  8bc4                 mov eax, esp
// 0077055d  b9d0115300           mov ecx, 0x5311d0
// 00770562  8908                 mov dword ptr [eax], ecx
// 00770564  33d2                 xor edx, edx
// 00770566  33f6                 xor esi, esi
// 00770568  895004               mov dword ptr [eax + 4], edx
// 0077056b  b9080f8c00           mov ecx, 0x8c0f08
// 00770570  897008               mov dword ptr [eax + 8], esi
// 00770573  e84819dcff           call 0x531ec0
// 00770578  6830947700           push 0x779430
// 0077057d  e8a107ecff           call 0x630d23
// 00770582  83c404               add esp, 4
// 00770585  5e                   pop esi
// 00770586  c3                   ret 
// library rbxgs/v8datamodel\ModelInstance.cpp (function ??__Edesc_makeJoints@RBX@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/ModelInstance.cpp
