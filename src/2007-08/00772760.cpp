// roc 2007-08 00772760  unit: seg_00770000  size: 59 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00772760
//
// 00772760  56                   push esi
// 00772761  33f6                 xor esi, esi
// 00772763  56                   push esi
// 00772764  68fcbe7a00           push 0x7abefc
// 00772769  6830527a00           push 0x7a5230
// 0077276e  83ec0c               sub esp, 0xc
// 00772771  8bc4                 mov eax, esp
// 00772773  b950bd5700           mov ecx, 0x57bd50
// 00772778  8908                 mov dword ptr [eax], ecx
// 0077277a  33d2                 xor edx, edx
// 0077277c  895004               mov dword ptr [eax + 4], edx
// 0077277f  b9082f8c00           mov ecx, 0x8c2f08
// 00772784  897008               mov dword ptr [eax + 8], esi
// 00772787  e874c4e0ff           call 0x57ec00
// 0077278c  6810a57700           push 0x77a510
// 00772791  e88de5ebff           call 0x630d23
// 00772796  83c404               add esp, 4
// 00772799  5e                   pop esi
// 0077279a  c3                   ret 
// library rbxgs/v8datamodel\Workspace.cpp (function ??__Eworkspace_makeJoints@RBX@@YAXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Workspace.cpp
