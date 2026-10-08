// roc 2008-06 007f7640  unit: seg_007f0000  size: 88 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007f7640
//
// 007f7640  53                   push ebx
// 007f7641  55                   push ebp
// 007f7642  56                   push esi
// 007f7643  57                   push edi
// 007f7644  6a04                 push 4
// 007f7646  83ec0c               sub esp, 0xc
// 007f7649  8bc4                 mov eax, esp
// 007f764b  b970fb5f00           mov ecx, 0x5ffb70
// 007f7650  8908                 mov dword ptr [eax], ecx
// 007f7652  33d2                 xor edx, edx
// 007f7654  895004               mov dword ptr [eax + 4], edx
// 007f7657  83ec0c               sub esp, 0xc
// 007f765a  33f6                 xor esi, esi
// 007f765c  897008               mov dword ptr [eax + 8], esi
// 007f765f  8bc4                 mov eax, esp
// 007f7661  bfc0d35f00           mov edi, 0x5fd3c0
// 007f7666  8938                 mov dword ptr [eax], edi
// 007f7668  68ac298300           push 0x8329ac
// 007f766d  33db                 xor ebx, ebx
// 007f766f  33ed                 xor ebp, ebp
// 007f7671  895804               mov dword ptr [eax + 4], ebx
// 007f7674  68301e8400           push 0x841e30
// 007f7679  b9a8b79700           mov ecx, 0x97b7a8
// 007f767e  896808               mov dword ptr [eax + 8], ebp
// 007f7681  e8da71e0ff           call 0x5fe860
// 007f7686  68c0ff7f00           push 0x7fffc0
// 007f768b  e81fa1eaff           call 0x6a17af
// 007f7690  83c404               add esp, 4
// 007f7693  5f                   pop edi
// 007f7694  5e                   pop esi
// 007f7695  5d                   pop ebp
// 007f7696  5b                   pop ebx
// 007f7697  c3                   ret 
// library rbxgs/v8datamodel\Tool.cpp (function ??__Eprop_Grip@RBX@@YAXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Tool.cpp
