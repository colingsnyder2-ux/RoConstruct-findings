// roc 2008-06 007f4930  unit: seg_007f0000  size: 89 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007f4930
//
// 007f4930  53                   push ebx
// 007f4931  55                   push ebp
// 007f4932  56                   push esi
// 007f4933  57                   push edi
// 007f4934  6a01                 push 1
// 007f4936  83ec0c               sub esp, 0xc
// 007f4939  8bc4                 mov eax, esp
// 007f493b  b970dc5900           mov ecx, 0x59dc70
// 007f4940  8908                 mov dword ptr [eax], ecx
// 007f4942  33d2                 xor edx, edx
// 007f4944  895004               mov dword ptr [eax + 4], edx
// 007f4947  83ec0c               sub esp, 0xc
// 007f494a  33f6                 xor esi, esi
// 007f494c  897008               mov dword ptr [eax + 8], esi
// 007f494f  8bc4                 mov eax, esp
// 007f4951  bfe08c5900           mov edi, 0x598ce0
// 007f4956  8938                 mov dword ptr [eax], edi
// 007f4958  33db                 xor ebx, ebx
// 007f495a  895804               mov dword ptr [eax + 4], ebx
// 007f495d  33ed                 xor ebp, ebp
// 007f495f  896808               mov dword ptr [eax + 8], ebp
// 007f4962  a148a29400           mov eax, dword ptr [0x94a248]
// 007f4967  50                   push eax
// 007f4968  68a0318300           push 0x8331a0
// 007f496d  b950629700           mov ecx, 0x976250
// 007f4972  e8c983daff           call 0x59cd40
// 007f4977  6890dc7f00           push 0x7fdc90
// 007f497c  e82eceeaff           call 0x6a17af
// 007f4981  83c404               add esp, 4
// 007f4984  5f                   pop edi
// 007f4985  5e                   pop esi
// 007f4986  5d                   pop ebp
// 007f4987  5b                   pop ebx
// 007f4988  c3                   ret 
// library rbxgs/v8datamodel\PartInstance.cpp (function ??__Eprop_SizeUi@RBX@@YAXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/PartInstance.cpp
