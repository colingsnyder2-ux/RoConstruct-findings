// roc 2007-08 00771de0  unit: seg_00770000  size: 88 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00771de0
//
// 00771de0  53                   push ebx
// 00771de1  55                   push ebp
// 00771de2  56                   push esi
// 00771de3  57                   push edi
// 00771de4  6a05                 push 5
// 00771de6  83ec0c               sub esp, 0xc
// 00771de9  8bc4                 mov eax, esp
// 00771deb  b900805700           mov ecx, 0x578000
// 00771df0  8908                 mov dword ptr [eax], ecx
// 00771df2  33d2                 xor edx, edx
// 00771df4  895004               mov dword ptr [eax + 4], edx
// 00771df7  83ec0c               sub esp, 0xc
// 00771dfa  33f6                 xor esi, esi
// 00771dfc  897008               mov dword ptr [eax + 8], esi
// 00771dff  8bc4                 mov eax, esp
// 00771e01  bff03f5700           mov edi, 0x573ff0
// 00771e06  8938                 mov dword ptr [eax], edi
// 00771e08  6898b67900           push 0x79b698
// 00771e0d  33db                 xor ebx, ebx
// 00771e0f  33ed                 xor ebp, ebp
// 00771e11  895804               mov dword ptr [eax + 4], ebx
// 00771e14  6810b07a00           push 0x7ab010
// 00771e19  b9b82a8c00           mov ecx, 0x8c2ab8
// 00771e1e  896808               mov dword ptr [eax + 8], ebp
// 00771e21  e8da55e0ff           call 0x577400
// 00771e26  6890a07700           push 0x77a090
// 00771e2b  e8f3eeebff           call 0x630d23
// 00771e30  83c404               add esp, 4
// 00771e33  5f                   pop edi
// 00771e34  5e                   pop esi
// 00771e35  5d                   pop ebp
// 00771e36  5b                   pop ebx
// 00771e37  c3                   ret 
// library rbxgs/v8datamodel\PartInstance.cpp (function ??__Eprop_RotVelocity@RBX@@YAXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/PartInstance.cpp
