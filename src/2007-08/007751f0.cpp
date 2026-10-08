// roc 2007-08 007751f0  unit: seg_00770000  size: 88 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 007751f0
//
// 007751f0  53                   push ebx
// 007751f1  55                   push ebp
// 007751f2  56                   push esi
// 007751f3  57                   push edi
// 007751f4  6a05                 push 5
// 007751f6  83ec0c               sub esp, 0xc
// 007751f9  8bc4                 mov eax, esp
// 007751fb  b9a0a85e00           mov ecx, 0x5ea8a0
// 00775200  8908                 mov dword ptr [eax], ecx
// 00775202  33d2                 xor edx, edx
// 00775204  895004               mov dword ptr [eax + 4], edx
// 00775207  83ec0c               sub esp, 0xc
// 0077520a  33f6                 xor esi, esi
// 0077520c  897008               mov dword ptr [eax + 8], esi
// 0077520f  8bc4                 mov eax, esp
// 00775211  bf20985e00           mov edi, 0x5e9820
// 00775216  8938                 mov dword ptr [eax], edi
// 00775218  6898b67900           push 0x79b698
// 0077521d  33db                 xor ebx, ebx
// 0077521f  33ed                 xor ebp, ebp
// 00775221  895804               mov dword ptr [eax + 4], ebx
// 00775224  68f0b67900           push 0x79b6f0
// 00775229  b9f46f8c00           mov ecx, 0x8c6ff4
// 0077522e  896808               mov dword ptr [eax + 8], ebp
// 00775231  e8aa55e7ff           call 0x5ea7e0
// 00775236  68a0bf7700           push 0x77bfa0
// 0077523b  e8e3baebff           call 0x630d23
// 00775240  83c404               add esp, 4
// 00775243  5f                   pop edi
// 00775244  5e                   pop esi
// 00775245  5d                   pop ebp
// 00775246  5b                   pop ebx
// 00775247  c3                   ret 
// library rbxgs/v8datamodel\FlagStand.cpp (function ??__Eprop_Color@RBX@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/FlagStand.cpp
