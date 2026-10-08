// roc 2007-08 007704b0  unit: seg_00770000  size: 88 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 007704b0
//
// 007704b0  53                   push ebx
// 007704b1  55                   push ebp
// 007704b2  56                   push esi
// 007704b3  57                   push edi
// 007704b4  6a05                 push 5
// 007704b6  83ec0c               sub esp, 0xc
// 007704b9  8bc4                 mov eax, esp
// 007704bb  b9001a5300           mov ecx, 0x531a00
// 007704c0  8908                 mov dword ptr [eax], ecx
// 007704c2  33d2                 xor edx, edx
// 007704c4  895004               mov dword ptr [eax + 4], edx
// 007704c7  83ec0c               sub esp, 0xc
// 007704ca  33f6                 xor esi, esi
// 007704cc  897008               mov dword ptr [eax + 8], esi
// 007704cf  8bc4                 mov eax, esp
// 007704d1  bf700b5300           mov edi, 0x530b70
// 007704d6  8938                 mov dword ptr [eax], edi
// 007704d8  6898b67900           push 0x79b698
// 007704dd  33db                 xor ebx, ebx
// 007704df  33ed                 xor ebp, ebp
// 007704e1  895804               mov dword ptr [eax + 4], ebx
// 007704e4  6818527a00           push 0x7a5218
// 007704e9  b9540e8c00           mov ecx, 0x8c0e54
// 007704ee  896808               mov dword ptr [eax + 8], ebp
// 007704f1  e8da12dcff           call 0x5317d0
// 007704f6  68c0937700           push 0x7793c0
// 007704fb  e82308ecff           call 0x630d23
// 00770500  83c404               add esp, 4
// 00770503  5f                   pop edi
// 00770504  5e                   pop esi
// 00770505  5d                   pop ebp
// 00770506  5b                   pop ebx
// 00770507  c3                   ret 
// library rbxgs/v8datamodel\ModelInstance.cpp (function ??__EprimaryPartProp@RBX@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/ModelInstance.cpp
