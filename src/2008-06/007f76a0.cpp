// roc 2008-06 007f76a0  unit: seg_007f0000  size: 88 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007f76a0
//
// 007f76a0  53                   push ebx
// 007f76a1  55                   push ebp
// 007f76a2  56                   push esi
// 007f76a3  57                   push edi
// 007f76a4  6a01                 push 1
// 007f76a6  83ec0c               sub esp, 0xc
// 007f76a9  8bc4                 mov eax, esp
// 007f76ab  b900fc5f00           mov ecx, 0x5ffc00
// 007f76b0  8908                 mov dword ptr [eax], ecx
// 007f76b2  33d2                 xor edx, edx
// 007f76b4  895004               mov dword ptr [eax + 4], edx
// 007f76b7  83ec0c               sub esp, 0xc
// 007f76ba  33f6                 xor esi, esi
// 007f76bc  897008               mov dword ptr [eax + 8], esi
// 007f76bf  8bc4                 mov eax, esp
// 007f76c1  bf00d55f00           mov edi, 0x5fd500
// 007f76c6  8938                 mov dword ptr [eax], edi
// 007f76c8  68ac298300           push 0x8329ac
// 007f76cd  33db                 xor ebx, ebx
// 007f76cf  33ed                 xor ebp, ebp
// 007f76d1  895804               mov dword ptr [eax + 4], ebx
// 007f76d4  68381e8400           push 0x841e38
// 007f76d9  b9fcb79700           mov ecx, 0x97b7fc
// 007f76de  896808               mov dword ptr [eax + 8], ebp
// 007f76e1  e84a72e0ff           call 0x5fe930
// 007f76e6  68a0ff7f00           push 0x7fffa0
// 007f76eb  e8bfa0eaff           call 0x6a17af
// 007f76f0  83c404               add esp, 4
// 007f76f3  5f                   pop edi
// 007f76f4  5e                   pop esi
// 007f76f5  5d                   pop ebp
// 007f76f6  5b                   pop ebx
// 007f76f7  c3                   ret 
// library rbxgs/v8datamodel\Tool.cpp (function ??__Eprop_GripPos@RBX@@YAXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Tool.cpp
