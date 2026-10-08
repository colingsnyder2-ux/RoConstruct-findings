// roc 2008-06 007f4450  unit: seg_007f0000  size: 88 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007f4450
//
// 007f4450  53                   push ebx
// 007f4451  55                   push ebp
// 007f4452  56                   push esi
// 007f4453  57                   push edi
// 007f4454  6a05                 push 5
// 007f4456  83ec0c               sub esp, 0xc
// 007f4459  8bc4                 mov eax, esp
// 007f445b  b9d0da5900           mov ecx, 0x59dad0
// 007f4460  8908                 mov dword ptr [eax], ecx
// 007f4462  33d2                 xor edx, edx
// 007f4464  895004               mov dword ptr [eax + 4], edx
// 007f4467  83ec0c               sub esp, 0xc
// 007f446a  33f6                 xor esi, esi
// 007f446c  897008               mov dword ptr [eax + 8], esi
// 007f446f  8bc4                 mov eax, esp
// 007f4471  bf70985900           mov edi, 0x599870
// 007f4476  8938                 mov dword ptr [eax], edi
// 007f4478  6890248200           push 0x822490
// 007f447d  33db                 xor ebx, ebx
// 007f447f  33ed                 xor ebp, ebp
// 007f4481  895804               mov dword ptr [eax + 4], ebx
// 007f4484  6834318300           push 0x833134
// 007f4489  b910639700           mov ecx, 0x976310
// 007f448e  896808               mov dword ptr [eax + 8], ebp
// 007f4491  e89a84daff           call 0x59c930
// 007f4496  68d0db7f00           push 0x7fdbd0
// 007f449b  e80fd3eaff           call 0x6a17af
// 007f44a0  83c404               add esp, 4
// 007f44a3  5f                   pop edi
// 007f44a4  5e                   pop esi
// 007f44a5  5d                   pop ebp
// 007f44a6  5b                   pop ebx
// 007f44a7  c3                   ret 
// library rbxgs/v8datamodel\PartInstance.cpp (function ??__Eprop_RotVelocity@RBX@@YAXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/PartInstance.cpp
