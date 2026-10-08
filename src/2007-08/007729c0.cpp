// roc 2007-08 007729c0  unit: seg_00770000  size: 88 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 007729c0
//
// 007729c0  53                   push ebx
// 007729c1  55                   push ebp
// 007729c2  56                   push esi
// 007729c3  57                   push edi
// 007729c4  6a01                 push 1
// 007729c6  83ec0c               sub esp, 0xc
// 007729c9  8bc4                 mov eax, esp
// 007729cb  b9302a5800           mov ecx, 0x582a30
// 007729d0  8908                 mov dword ptr [eax], ecx
// 007729d2  33d2                 xor edx, edx
// 007729d4  895004               mov dword ptr [eax + 4], edx
// 007729d7  83ec0c               sub esp, 0xc
// 007729da  33f6                 xor esi, esi
// 007729dc  897008               mov dword ptr [eax + 8], esi
// 007729df  8bc4                 mov eax, esp
// 007729e1  bf400f5800           mov edi, 0x580f40
// 007729e6  8938                 mov dword ptr [eax], edi
// 007729e8  6840a87a00           push 0x7aa840
// 007729ed  33db                 xor ebx, ebx
// 007729ef  33ed                 xor ebp, ebp
// 007729f1  895804               mov dword ptr [eax + 4], ebx
// 007729f4  68a0c77a00           push 0x7ac7a0
// 007729f9  b984318c00           mov ecx, 0x8c3184
// 007729fe  896808               mov dword ptr [eax + 8], ebp
// 00772a01  e82afbe0ff           call 0x582530
// 00772a06  6890a57700           push 0x77a590
// 00772a0b  e813e3ebff           call 0x630d23
// 00772a10  83c404               add esp, 4
// 00772a13  5f                   pop edi
// 00772a14  5e                   pop esi
// 00772a15  5d                   pop ebp
// 00772a16  5b                   pop ebx
// 00772a17  c3                   ret 
// library rbxgs/v8datamodel\Accoutrement.cpp (function ??__Eprop_AttachmentForward@RBX@@YAXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Accoutrement.cpp
