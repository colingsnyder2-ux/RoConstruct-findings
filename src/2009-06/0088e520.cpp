// roc 2009-06 0088e520  unit: seg_00880000  size: 88 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0088e520
//
// 0088e520  53                   push ebx
// 0088e521  55                   push ebp
// 0088e522  56                   push esi
// 0088e523  57                   push edi
// 0088e524  6a01                 push 1
// 0088e526  83ec0c               sub esp, 0xc
// 0088e529  8bc4                 mov eax, esp
// 0088e52b  b9c00d6600           mov ecx, 0x660dc0
// 0088e530  8908                 mov dword ptr [eax], ecx
// 0088e532  33d2                 xor edx, edx
// 0088e534  895004               mov dword ptr [eax + 4], edx
// 0088e537  83ec0c               sub esp, 0xc
// 0088e53a  33f6                 xor esi, esi
// 0088e53c  897008               mov dword ptr [eax + 8], esi
// 0088e53f  8bc4                 mov eax, esp
// 0088e541  bf60c56500           mov edi, 0x65c560
// 0088e546  8938                 mov dword ptr [eax], edi
// 0088e548  68584e8c00           push 0x8c4e58
// 0088e54d  33db                 xor ebx, ebx
// 0088e54f  33ed                 xor ebp, ebp
// 0088e551  895804               mov dword ptr [eax + 4], ebx
// 0088e554  68e4f88d00           push 0x8df8e4
// 0088e559  b948cca400           mov ecx, 0xa4cc48
// 0088e55e  896808               mov dword ptr [eax + 8], ebp
// 0088e561  e8aa13ddff           call 0x65f910
// 0088e566  6880aa8900           push 0x89aa80
// 0088e56b  e88bb5e8ff           call 0x719afb
// 0088e570  83c404               add esp, 4
// 0088e573  5f                   pop edi
// 0088e574  5e                   pop esi
// 0088e575  5d                   pop ebp
// 0088e576  5b                   pop ebx
// 0088e577  c3                   ret 
// library rbxgs/v8datamodel\PartInstance.cpp (function ??__Eprop_PositionUi@RBX@@YAXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/PartInstance.cpp
