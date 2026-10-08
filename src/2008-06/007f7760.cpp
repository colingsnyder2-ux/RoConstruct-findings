// roc 2008-06 007f7760  unit: seg_007f0000  size: 88 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007f7760
//
// 007f7760  53                   push ebx
// 007f7761  55                   push ebp
// 007f7762  56                   push esi
// 007f7763  57                   push edi
// 007f7764  6a01                 push 1
// 007f7766  83ec0c               sub esp, 0xc
// 007f7769  8bc4                 mov eax, esp
// 007f776b  b9d0fd5f00           mov ecx, 0x5ffdd0
// 007f7770  8908                 mov dword ptr [eax], ecx
// 007f7772  33d2                 xor edx, edx
// 007f7774  895004               mov dword ptr [eax + 4], edx
// 007f7777  83ec0c               sub esp, 0xc
// 007f777a  33f6                 xor esi, esi
// 007f777c  897008               mov dword ptr [eax + 8], esi
// 007f777f  8bc4                 mov eax, esp
// 007f7781  bf80d55f00           mov edi, 0x5fd580
// 007f7786  8938                 mov dword ptr [eax], edi
// 007f7788  68ac298300           push 0x8329ac
// 007f778d  33db                 xor ebx, ebx
// 007f778f  33ed                 xor ebp, ebp
// 007f7791  895804               mov dword ptr [eax + 4], ebx
// 007f7794  684c1e8400           push 0x841e4c
// 007f7799  b98cb79700           mov ecx, 0x97b78c
// 007f779e  896808               mov dword ptr [eax + 8], ebp
// 007f77a1  e88a71e0ff           call 0x5fe930
// 007f77a6  6840ff7f00           push 0x7fff40
// 007f77ab  e8ff9feaff           call 0x6a17af
// 007f77b0  83c404               add esp, 4
// 007f77b3  5f                   pop edi
// 007f77b4  5e                   pop esi
// 007f77b5  5d                   pop ebp
// 007f77b6  5b                   pop ebx
// 007f77b7  c3                   ret 
// library rbxgs/v8datamodel\Tool.cpp (function ??__Eprop_GripUp@RBX@@YAXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Tool.cpp
