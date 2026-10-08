// roc 2008-06 007f5070  unit: seg_007f0000  size: 88 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007f5070
//
// 007f5070  53                   push ebx
// 007f5071  55                   push ebp
// 007f5072  56                   push esi
// 007f5073  57                   push edi
// 007f5074  6a01                 push 1
// 007f5076  83ec0c               sub esp, 0xc
// 007f5079  8bc4                 mov eax, esp
// 007f507b  b950275b00           mov ecx, 0x5b2750
// 007f5080  8908                 mov dword ptr [eax], ecx
// 007f5082  33d2                 xor edx, edx
// 007f5084  895004               mov dword ptr [eax + 4], edx
// 007f5087  83ec0c               sub esp, 0xc
// 007f508a  33f6                 xor esi, esi
// 007f508c  897008               mov dword ptr [eax + 8], esi
// 007f508f  8bc4                 mov eax, esp
// 007f5091  bf70095b00           mov edi, 0x5b0970
// 007f5096  8938                 mov dword ptr [eax], edi
// 007f5098  68ac298300           push 0x8329ac
// 007f509d  33db                 xor ebx, ebx
// 007f509f  33ed                 xor ebp, ebp
// 007f50a1  895804               mov dword ptr [eax + 4], ebx
// 007f50a4  68f4508300           push 0x8350f4
// 007f50a9  b93c6d9700           mov ecx, 0x976d3c
// 007f50ae  896808               mov dword ptr [eax + 8], ebp
// 007f50b1  e84acadbff           call 0x5b1b00
// 007f50b6  6820e27f00           push 0x7fe220
// 007f50bb  e8efc6eaff           call 0x6a17af
// 007f50c0  83c404               add esp, 4
// 007f50c3  5f                   pop edi
// 007f50c4  5e                   pop esi
// 007f50c5  5d                   pop ebp
// 007f50c6  5b                   pop ebx
// 007f50c7  c3                   ret 
// library rbxgs/v8datamodel\Accoutrement.cpp (function ??__Eprop_AttachmentForward@RBX@@YAXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Accoutrement.cpp
