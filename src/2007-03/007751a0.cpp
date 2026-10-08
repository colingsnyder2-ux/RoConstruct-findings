// roc 2007-03 007751a0  unit: seg_00770000  size: 88 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 007751a0
//
// 007751a0  53                   push ebx
// 007751a1  55                   push ebp
// 007751a2  56                   push esi
// 007751a3  57                   push edi
// 007751a4  6a01                 push 1
// 007751a6  83ec0c               sub esp, 0xc
// 007751a9  8bc4                 mov eax, esp
// 007751ab  b9d0205d00           mov ecx, 0x5d20d0
// 007751b0  8908                 mov dword ptr [eax], ecx
// 007751b2  33d2                 xor edx, edx
// 007751b4  895004               mov dword ptr [eax + 4], edx
// 007751b7  83ec0c               sub esp, 0xc
// 007751ba  33f6                 xor esi, esi
// 007751bc  897008               mov dword ptr [eax + 8], esi
// 007751bf  8bc4                 mov eax, esp
// 007751c1  bfb0fc5c00           mov edi, 0x5cfcb0
// 007751c6  8938                 mov dword ptr [eax], edi
// 007751c8  6814bf7a00           push 0x7abf14
// 007751cd  33db                 xor ebx, ebx
// 007751cf  33ed                 xor ebp, ebp
// 007751d1  895804               mov dword ptr [eax + 4], ebx
// 007751d4  6850bd7b00           push 0x7bbd50
// 007751d9  b90c018c00           mov ecx, 0x8c010c
// 007751de  896808               mov dword ptr [eax + 8], ebp
// 007751e1  e87acbe5ff           call 0x5d1d60
// 007751e6  6800b67700           push 0x77b600
// 007751eb  e8c39feaff           call 0x61f1b3
// 007751f0  83c404               add esp, 4
// 007751f3  5f                   pop edi
// 007751f4  5e                   pop esi
// 007751f5  5d                   pop ebp
// 007751f6  5b                   pop ebx
// 007751f7  c3                   ret 
// library rbxgs/v8datamodel\Tool.cpp (function ??__Eprop_GripPos@RBX@@YAXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Tool.cpp
