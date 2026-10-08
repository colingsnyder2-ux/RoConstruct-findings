// roc 2007-03 00775320  unit: seg_00770000  size: 88 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00775320
//
// 00775320  53                   push ebx
// 00775321  55                   push ebp
// 00775322  56                   push esi
// 00775323  57                   push edi
// 00775324  6a04                 push 4
// 00775326  83ec0c               sub esp, 0xc
// 00775329  8bc4                 mov eax, esp
// 0077532b  b9602b5d00           mov ecx, 0x5d2b60
// 00775330  8908                 mov dword ptr [eax], ecx
// 00775332  33d2                 xor edx, edx
// 00775334  895004               mov dword ptr [eax + 4], edx
// 00775337  83ec0c               sub esp, 0xc
// 0077533a  33f6                 xor esi, esi
// 0077533c  897008               mov dword ptr [eax + 8], esi
// 0077533f  8bc4                 mov eax, esp
// 00775341  bf90fc5c00           mov edi, 0x5cfc90
// 00775346  8938                 mov dword ptr [eax], edi
// 00775348  6814bf7a00           push 0x7abf14
// 0077534d  33db                 xor ebx, ebx
// 0077534f  33ed                 xor ebp, ebp
// 00775351  895804               mov dword ptr [eax + 4], ebx
// 00775354  6878bd7b00           push 0x7bbd78
// 00775359  b9b8008c00           mov ecx, 0x8c00b8
// 0077535e  896808               mov dword ptr [eax + 8], ebp
// 00775361  e8bacae5ff           call 0x5d1e20
// 00775366  6860b67700           push 0x77b660
// 0077536b  e8439eeaff           call 0x61f1b3
// 00775370  83c404               add esp, 4
// 00775373  5f                   pop edi
// 00775374  5e                   pop esi
// 00775375  5d                   pop ebp
// 00775376  5b                   pop ebx
// 00775377  c3                   ret 
// library rbxgs/v8datamodel\Tool.cpp (function ??__Eprop_FrontendActivationState@RBX@@YAXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Tool.cpp
