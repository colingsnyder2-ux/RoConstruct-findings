// roc 2008-06 007f43f0  unit: seg_007f0000  size: 88 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007f43f0
//
// 007f43f0  53                   push ebx
// 007f43f1  55                   push ebp
// 007f43f2  56                   push esi
// 007f43f3  57                   push edi
// 007f43f4  6a05                 push 5
// 007f43f6  83ec0c               sub esp, 0xc
// 007f43f9  8bc4                 mov eax, esp
// 007f43fb  b910da5900           mov ecx, 0x59da10
// 007f4400  8908                 mov dword ptr [eax], ecx
// 007f4402  33d2                 xor edx, edx
// 007f4404  895004               mov dword ptr [eax + 4], edx
// 007f4407  83ec0c               sub esp, 0xc
// 007f440a  33f6                 xor esi, esi
// 007f440c  897008               mov dword ptr [eax + 8], esi
// 007f440f  8bc4                 mov eax, esp
// 007f4411  bf50985900           mov edi, 0x599850
// 007f4416  8938                 mov dword ptr [eax], edi
// 007f4418  6890248200           push 0x822490
// 007f441d  33db                 xor ebx, ebx
// 007f441f  33ed                 xor ebp, ebp
// 007f4421  895804               mov dword ptr [eax + 4], ebx
// 007f4424  6828318300           push 0x833128
// 007f4429  b92c639700           mov ecx, 0x97632c
// 007f442e  896808               mov dword ptr [eax + 8], ebp
// 007f4431  e8fa84daff           call 0x59c930
// 007f4436  6850dd7f00           push 0x7fdd50
// 007f443b  e86fd3eaff           call 0x6a17af
// 007f4440  83c404               add esp, 4
// 007f4443  5f                   pop edi
// 007f4444  5e                   pop esi
// 007f4445  5d                   pop ebp
// 007f4446  5b                   pop ebx
// 007f4447  c3                   ret 
// library rbxgs/v8datamodel\PartInstance.cpp (function ??__Eprop_Velocity@RBX@@YAXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/PartInstance.cpp
