// roc 2007-03 00775040  unit: seg_00770000  size: 88 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00775040
//
// 00775040  53                   push ebx
// 00775041  55                   push ebp
// 00775042  56                   push esi
// 00775043  57                   push edi
// 00775044  6a05                 push 5
// 00775046  83ec0c               sub esp, 0xc
// 00775049  8bc4                 mov eax, esp
// 0077504b  b9b06a5b00           mov ecx, 0x5b6ab0
// 00775050  8908                 mov dword ptr [eax], ecx
// 00775052  33d2                 xor edx, edx
// 00775054  895004               mov dword ptr [eax + 4], edx
// 00775057  83ec0c               sub esp, 0xc
// 0077505a  33f6                 xor esi, esi
// 0077505c  897008               mov dword ptr [eax + 8], esi
// 0077505f  8bc4                 mov eax, esp
// 00775061  bfa03a5300           mov edi, 0x533aa0
// 00775066  8938                 mov dword ptr [eax], edi
// 00775068  6814bf7a00           push 0x7abf14
// 0077506d  33db                 xor ebx, ebx
// 0077506f  33ed                 xor ebp, ebp
// 00775071  895804               mov dword ptr [eax + 4], ebx
// 00775074  68fc8f7b00           push 0x7b8ffc
// 00775079  b914ff8b00           mov ecx, 0x8bff14
// 0077507e  896808               mov dword ptr [eax + 8], ebp
// 00775081  e88a18e4ff           call 0x5b6910
// 00775086  6810b57700           push 0x77b510
// 0077508b  e823a1eaff           call 0x61f1b3
// 00775090  83c404               add esp, 4
// 00775093  5f                   pop edi
// 00775094  5e                   pop esi
// 00775095  5d                   pop ebp
// 00775096  5b                   pop ebx
// 00775097  c3                   ret 
// library rbxgs/v8datamodel\PVInstance.cpp (function ??__Eprop_ControllerFlagShown@RBX@@YAXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/PVInstance.cpp
