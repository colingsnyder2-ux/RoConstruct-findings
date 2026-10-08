// roc 2007-08 00772720  unit: seg_00770000  size: 59 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00772720
//
// 00772720  56                   push esi
// 00772721  33f6                 xor esi, esi
// 00772723  56                   push esi
// 00772724  6880797800           push 0x787980
// 00772729  68ecbe7a00           push 0x7abeec
// 0077272e  83ec0c               sub esp, 0xc
// 00772731  8bc4                 mov eax, esp
// 00772733  b950dd5700           mov ecx, 0x57dd50
// 00772738  8908                 mov dword ptr [eax], ecx
// 0077273a  33d2                 xor edx, edx
// 0077273c  895004               mov dword ptr [eax + 4], edx
// 0077273f  b9882f8c00           mov ecx, 0x8c2f88
// 00772744  897008               mov dword ptr [eax + 8], esi
// 00772747  e854c2e0ff           call 0x57e9a0
// 0077274c  6840a57700           push 0x77a540
// 00772751  e8cde5ebff           call 0x630d23
// 00772756  83c404               add esp, 4
// 00772759  5e                   pop esi
// 0077275a  c3                   ret 
// library rbxgs/v8datamodel\Workspace.cpp (function ??__Eworkspace_insertContent@RBX@@YAXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Workspace.cpp
