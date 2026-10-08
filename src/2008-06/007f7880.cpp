// roc 2008-06 007f7880  unit: seg_007f0000  size: 88 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007f7880
//
// 007f7880  53                   push ebx
// 007f7881  55                   push ebp
// 007f7882  56                   push esi
// 007f7883  57                   push edi
// 007f7884  6a04                 push 4
// 007f7886  83ec0c               sub esp, 0xc
// 007f7889  8bc4                 mov eax, esp
// 007f788b  b920046000           mov ecx, 0x600420
// 007f7890  8908                 mov dword ptr [eax], ecx
// 007f7892  33d2                 xor edx, edx
// 007f7894  895004               mov dword ptr [eax + 4], edx
// 007f7897  83ec0c               sub esp, 0xc
// 007f789a  33f6                 xor esi, esi
// 007f789c  897008               mov dword ptr [eax + 8], esi
// 007f789f  8bc4                 mov eax, esp
// 007f78a1  bfa0d35f00           mov edi, 0x5fd3a0
// 007f78a6  8938                 mov dword ptr [eax], edi
// 007f78a8  68ac298300           push 0x8329ac
// 007f78ad  33db                 xor ebx, ebx
// 007f78af  33ed                 xor ebp, ebp
// 007f78b1  895804               mov dword ptr [eax + 4], ebx
// 007f78b4  68d8168400           push 0x8416d8
// 007f78b9  b9c4b79700           mov ecx, 0x97b7c4
// 007f78be  896808               mov dword ptr [eax + 8], ebp
// 007f78c1  e83a71e0ff           call 0x5fea00
// 007f78c6  68e0ff7f00           push 0x7fffe0
// 007f78cb  e8df9eeaff           call 0x6a17af
// 007f78d0  83c404               add esp, 4
// 007f78d3  5f                   pop edi
// 007f78d4  5e                   pop esi
// 007f78d5  5d                   pop ebp
// 007f78d6  5b                   pop ebx
// 007f78d7  c3                   ret 
// library rbxgs/v8datamodel\Tool.cpp (function ??__Eprop_FrontendActivationState@RBX@@YAXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Tool.cpp
