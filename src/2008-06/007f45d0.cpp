// roc 2008-06 007f45d0  unit: seg_007f0000  size: 89 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007f45d0
//
// 007f45d0  53                   push ebx
// 007f45d1  55                   push ebp
// 007f45d2  56                   push esi
// 007f45d3  57                   push edi
// 007f45d4  6a01                 push 1
// 007f45d6  83ec0c               sub esp, 0xc
// 007f45d9  8bc4                 mov eax, esp
// 007f45db  b9e0eb5900           mov ecx, 0x59ebe0
// 007f45e0  8908                 mov dword ptr [eax], ecx
// 007f45e2  33d2                 xor edx, edx
// 007f45e4  895004               mov dword ptr [eax + 4], edx
// 007f45e7  83ec0c               sub esp, 0xc
// 007f45ea  33f6                 xor esi, esi
// 007f45ec  897008               mov dword ptr [eax + 8], esi
// 007f45ef  8bc4                 mov eax, esp
// 007f45f1  bf10c45c00           mov edi, 0x5cc410
// 007f45f6  8938                 mov dword ptr [eax], edi
// 007f45f8  33db                 xor ebx, ebx
// 007f45fa  895804               mov dword ptr [eax + 4], ebx
// 007f45fd  33ed                 xor ebp, ebp
// 007f45ff  896808               mov dword ptr [eax + 8], ebp
// 007f4602  a148a29400           mov eax, dword ptr [0x94a248]
// 007f4607  50                   push eax
// 007f4608  6848318300           push 0x833148
// 007f460d  b93c609700           mov ecx, 0x97603c
// 007f4612  e8198bdaff           call 0x59d130
// 007f4617  68f0db7f00           push 0x7fdbf0
// 007f461c  e88ed1eaff           call 0x6a17af
// 007f4621  83c404               add esp, 4
// 007f4624  5f                   pop edi
// 007f4625  5e                   pop esi
// 007f4626  5d                   pop ebp
// 007f4627  5b                   pop ebx
// 007f4628  c3                   ret 
// library rbxgs/v8datamodel\PartInstance.cpp (function ??__Eprop_shapeUi@RBX@@YAXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/PartInstance.cpp
