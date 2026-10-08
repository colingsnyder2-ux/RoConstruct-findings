// roc 2009-06 0088f580  unit: seg_00880000  size: 89 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0088f580
//
// 0088f580  53                   push ebx
// 0088f581  55                   push ebp
// 0088f582  56                   push esi
// 0088f583  57                   push edi
// 0088f584  6a01                 push 1
// 0088f586  83ec0c               sub esp, 0xc
// 0088f589  8bc4                 mov eax, esp
// 0088f58b  b9405b6600           mov ecx, 0x665b40
// 0088f590  8908                 mov dword ptr [eax], ecx
// 0088f592  33d2                 xor edx, edx
// 0088f594  895004               mov dword ptr [eax + 4], edx
// 0088f597  83ec0c               sub esp, 0xc
// 0088f59a  33f6                 xor esi, esi
// 0088f59c  897008               mov dword ptr [eax + 8], esi
// 0088f59f  8bc4                 mov eax, esp
// 0088f5a1  bf50596600           mov edi, 0x665950
// 0088f5a6  8938                 mov dword ptr [eax], edi
// 0088f5a8  33db                 xor ebx, ebx
// 0088f5aa  895804               mov dword ptr [eax + 4], ebx
// 0088f5ad  33ed                 xor ebp, ebp
// 0088f5af  896808               mov dword ptr [eax + 8], ebp
// 0088f5b2  a1c04da100           mov eax, dword ptr [0xa14dc0]
// 0088f5b7  50                   push eax
// 0088f5b8  68542b8e00           push 0x8e2b54
// 0088f5bd  b928d4a400           mov ecx, 0xa4d428
// 0088f5c2  e80967ddff           call 0x665cd0
// 0088f5c7  68f0b08900           push 0x89b0f0
// 0088f5cc  e82aa5e8ff           call 0x719afb
// 0088f5d1  83c404               add esp, 4
// 0088f5d4  5f                   pop edi
// 0088f5d5  5e                   pop esi
// 0088f5d6  5d                   pop ebp
// 0088f5d7  5b                   pop ebx
// 0088f5d8  c3                   ret 
// library rbxgs/v8datamodel\PartInstance.cpp (function ??__Eprop_formFactorUi@RBX@@YAXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/PartInstance.cpp
