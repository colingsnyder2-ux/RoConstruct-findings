// roc 2007-03 007735c0  unit: seg_00770000  size: 91 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 007735c0
//
// 007735c0  53                   push ebx
// 007735c1  55                   push ebp
// 007735c2  56                   push esi
// 007735c3  57                   push edi
// 007735c4  6a05                 push 5
// 007735c6  83ec0c               sub esp, 0xc
// 007735c9  8bc4                 mov eax, esp
// 007735cb  b9f0d05700           mov ecx, 0x57d0f0
// 007735d0  8908                 mov dword ptr [eax], ecx
// 007735d2  33d2                 xor edx, edx
// 007735d4  895004               mov dword ptr [eax + 4], edx
// 007735d7  83ec0c               sub esp, 0xc
// 007735da  33f6                 xor esi, esi
// 007735dc  897008               mov dword ptr [eax + 8], esi
// 007735df  8bc4                 mov eax, esp
// 007735e1  bf20ab5700           mov edi, 0x57ab20
// 007735e6  8938                 mov dword ptr [eax], edi
// 007735e8  6870a77900           push 0x79a770
// 007735ed  bb30020000           mov ebx, 0x230
// 007735f2  33ed                 xor ebp, ebp
// 007735f4  895804               mov dword ptr [eax + 4], ebx
// 007735f7  68b8d87a00           push 0x7ad8b8
// 007735fc  b9e8d28b00           mov ecx, 0x8bd2e8
// 00773601  896808               mov dword ptr [eax + 8], ebp
// 00773604  e8f79de0ff           call 0x57d400
// 00773609  6810a27700           push 0x77a210
// 0077360e  e8a0bbeaff           call 0x61f1b3
// 00773613  83c404               add esp, 4
// 00773616  5f                   pop edi
// 00773617  5e                   pop esi
// 00773618  5d                   pop ebp
// 00773619  5b                   pop ebx
// 0077361a  c3                   ret 
// library rbxgs/v8datamodel\Workspace.cpp (function ??__EcurrentCameraProxyProp@RBX@@YAXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Workspace.cpp
