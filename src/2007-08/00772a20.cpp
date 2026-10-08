// roc 2007-08 00772a20  unit: seg_00770000  size: 88 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00772a20
//
// 00772a20  53                   push ebx
// 00772a21  55                   push ebp
// 00772a22  56                   push esi
// 00772a23  57                   push edi
// 00772a24  6a01                 push 1
// 00772a26  83ec0c               sub esp, 0xc
// 00772a29  8bc4                 mov eax, esp
// 00772a2b  b9b02b5800           mov ecx, 0x582bb0
// 00772a30  8908                 mov dword ptr [eax], ecx
// 00772a32  33d2                 xor edx, edx
// 00772a34  895004               mov dword ptr [eax + 4], edx
// 00772a37  83ec0c               sub esp, 0xc
// 00772a3a  33f6                 xor esi, esi
// 00772a3c  897008               mov dword ptr [eax + 8], esi
// 00772a3f  8bc4                 mov eax, esp
// 00772a41  bf900f5800           mov edi, 0x580f90
// 00772a46  8938                 mov dword ptr [eax], edi
// 00772a48  6840a87a00           push 0x7aa840
// 00772a4d  33db                 xor ebx, ebx
// 00772a4f  33ed                 xor ebp, ebp
// 00772a51  895804               mov dword ptr [eax + 4], ebx
// 00772a54  68b4c77a00           push 0x7ac7b4
// 00772a59  b9f8308c00           mov ecx, 0x8c30f8
// 00772a5e  896808               mov dword ptr [eax + 8], ebp
// 00772a61  e8cafae0ff           call 0x582530
// 00772a66  6850a57700           push 0x77a550
// 00772a6b  e8b3e2ebff           call 0x630d23
// 00772a70  83c404               add esp, 4
// 00772a73  5f                   pop edi
// 00772a74  5e                   pop esi
// 00772a75  5d                   pop ebp
// 00772a76  5b                   pop ebx
// 00772a77  c3                   ret 
// library rbxgs/v8datamodel\Accoutrement.cpp (function ??__Eprop_AttachmentUp@RBX@@YAXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Accoutrement.cpp
