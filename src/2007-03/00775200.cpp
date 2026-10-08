// roc 2007-03 00775200  unit: seg_00770000  size: 88 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00775200
//
// 00775200  53                   push ebx
// 00775201  55                   push ebp
// 00775202  56                   push esi
// 00775203  57                   push edi
// 00775204  6a01                 push 1
// 00775206  83ec0c               sub esp, 0xc
// 00775209  8bc4                 mov eax, esp
// 0077520b  b920215d00           mov ecx, 0x5d2120
// 00775210  8908                 mov dword ptr [eax], ecx
// 00775212  33d2                 xor edx, edx
// 00775214  895004               mov dword ptr [eax + 4], edx
// 00775217  83ec0c               sub esp, 0xc
// 0077521a  33f6                 xor esi, esi
// 0077521c  897008               mov dword ptr [eax + 8], esi
// 0077521f  8bc4                 mov eax, esp
// 00775221  bfe0fc5c00           mov edi, 0x5cfce0
// 00775226  8938                 mov dword ptr [eax], edi
// 00775228  6814bf7a00           push 0x7abf14
// 0077522d  33db                 xor ebx, ebx
// 0077522f  33ed                 xor ebp, ebp
// 00775231  895804               mov dword ptr [eax + 4], ebx
// 00775234  6858bd7b00           push 0x7bbd58
// 00775239  b914008c00           mov ecx, 0x8c0014
// 0077523e  896808               mov dword ptr [eax + 8], ebp
// 00775241  e81acbe5ff           call 0x5d1d60
// 00775246  68e0b57700           push 0x77b5e0
// 0077524b  e8639feaff           call 0x61f1b3
// 00775250  83c404               add esp, 4
// 00775253  5f                   pop edi
// 00775254  5e                   pop esi
// 00775255  5d                   pop ebp
// 00775256  5b                   pop ebx
// 00775257  c3                   ret 
// library rbxgs/v8datamodel\Tool.cpp (function ??__Eprop_GripForward@RBX@@YAXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Tool.cpp
