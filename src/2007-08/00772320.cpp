// roc 2007-08 00772320  unit: seg_00770000  size: 89 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00772320
//
// 00772320  53                   push ebx
// 00772321  55                   push ebp
// 00772322  56                   push esi
// 00772323  57                   push edi
// 00772324  6a01                 push 1
// 00772326  83ec0c               sub esp, 0xc
// 00772329  8bc4                 mov eax, esp
// 0077232b  b9a0815700           mov ecx, 0x5781a0
// 00772330  8908                 mov dword ptr [eax], ecx
// 00772332  33d2                 xor edx, edx
// 00772334  895004               mov dword ptr [eax + 4], edx
// 00772337  83ec0c               sub esp, 0xc
// 0077233a  33f6                 xor esi, esi
// 0077233c  897008               mov dword ptr [eax + 8], esi
// 0077233f  8bc4                 mov eax, esp
// 00772341  bf20405700           mov edi, 0x574020
// 00772346  8938                 mov dword ptr [eax], edi
// 00772348  33db                 xor ebx, ebx
// 0077234a  895804               mov dword ptr [eax + 4], ebx
// 0077234d  33ed                 xor ebp, ebp
// 0077234f  896808               mov dword ptr [eax + 8], ebp
// 00772352  a128048a00           mov eax, dword ptr [0x8a0428]
// 00772357  50                   push eax
// 00772358  6884b07a00           push 0x7ab084
// 0077235d  b9282a8c00           mov ecx, 0x8c2a28
// 00772362  e85954e0ff           call 0x5777c0
// 00772367  6870a17700           push 0x77a170
// 0077236c  e8b2e9ebff           call 0x630d23
// 00772371  83c404               add esp, 4
// 00772374  5f                   pop edi
// 00772375  5e                   pop esi
// 00772376  5d                   pop ebp
// 00772377  5b                   pop ebx
// 00772378  c3                   ret 
// library rbxgs/v8datamodel\PartInstance.cpp (function ??__Eprop_SizeUi@RBX@@YAXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/PartInstance.cpp
