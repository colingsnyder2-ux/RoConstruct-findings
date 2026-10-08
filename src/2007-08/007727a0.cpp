// roc 2007-08 007727a0  unit: seg_00770000  size: 59 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 007727a0
//
// 007727a0  56                   push esi
// 007727a1  33f6                 xor esi, esi
// 007727a3  56                   push esi
// 007727a4  68fcbe7a00           push 0x7abefc
// 007727a9  6824527a00           push 0x7a5224
// 007727ae  83ec0c               sub esp, 0xc
// 007727b1  8bc4                 mov eax, esp
// 007727b3  b9f0bd5700           mov ecx, 0x57bdf0
// 007727b8  8908                 mov dword ptr [eax], ecx
// 007727ba  33d2                 xor edx, edx
// 007727bc  895004               mov dword ptr [eax + 4], edx
// 007727bf  b9482f8c00           mov ecx, 0x8c2f48
// 007727c4  897008               mov dword ptr [eax + 8], esi
// 007727c7  e834c4e0ff           call 0x57ec00
// 007727cc  68c0a47700           push 0x77a4c0
// 007727d1  e84de5ebff           call 0x630d23
// 007727d6  83c404               add esp, 4
// 007727d9  5e                   pop esi
// 007727da  c3                   ret 
// library rbxgs/v8datamodel\Workspace.cpp (function ??__Eworkspace_breakJoints@RBX@@YAXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Workspace.cpp
