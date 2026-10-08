// roc 2007-08 007727e0  unit: seg_00770000  size: 59 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 007727e0
//
// 007727e0  56                   push esi
// 007727e1  33f6                 xor esi, esi
// 007727e3  56                   push esi
// 007727e4  6870b67900           push 0x79b670
// 007727e9  6804bf7a00           push 0x7abf04
// 007727ee  83ec0c               sub esp, 0xc
// 007727f1  8bc4                 mov eax, esp
// 007727f3  b9a0b45700           mov ecx, 0x57b4a0
// 007727f8  8908                 mov dword ptr [eax], ecx
// 007727fa  33d2                 xor edx, edx
// 007727fc  895004               mov dword ptr [eax + 4], edx
// 007727ff  b9e82f8c00           mov ecx, 0x8c2fe8
// 00772804  897008               mov dword ptr [eax + 8], esi
// 00772807  e8b4c5e0ff           call 0x57edc0
// 0077280c  6820a57700           push 0x77a520
// 00772811  e80de5ebff           call 0x630d23
// 00772816  83c404               add esp, 4
// 00772819  5e                   pop esi
// 0077281a  c3                   ret 
// library rbxgs/v8datamodel\Workspace.cpp (function ??__Eworkspace_SetThrottleEnabled@RBX@@YAXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Workspace.cpp
