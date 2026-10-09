// roc 2008-06 007f47b0  unit: seg_007f0000  size: 88 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007f47b0
//
// 007f47b0  53                   push ebx
// 007f47b1  55                   push ebp
// 007f47b2  56                   push esi
// 007f47b3  57                   push edi
// 007f47b4  6a05                 push 5
// 007f47b6  83ec0c               sub esp, 0xc
// 007f47b9  8bc4                 mov eax, esp
// 007f47bb  b9f0dd5900           mov ecx, 0x59ddf0
// 007f47c0  8908                 mov dword ptr [eax], ecx
// 007f47c2  33d2                 xor edx, edx
// 007f47c4  895004               mov dword ptr [eax + 4], edx
// 007f47c7  83ec0c               sub esp, 0xc
// 007f47ca  33f6                 xor esi, esi
// 007f47cc  897008               mov dword ptr [eax + 8], esi
// 007f47cf  8bc4                 mov eax, esp
// 007f47d1  bf108c5900           mov edi, 0x598c10
// 007f47d6  8938                 mov dword ptr [eax], edi
// 007f47d8  6844d98200           push 0x82d944
// 007f47dd  33db                 xor ebx, ebx
// 007f47df  33ed                 xor ebp, ebp
// 007f47e1  895804               mov dword ptr [eax + 4], ebx
// 007f47e4  686c318300           push 0x83316c
// 007f47e9  b9cc609700           mov ecx, 0x9760cc
// 007f47ee  896808               mov dword ptr [eax + 8], ebp
// 007f47f1  e87a84daff           call 0x59cc70
// 007f47f6  6850de7f00           push 0x7fde50
// 007f47fb  e8afcfeaff           call 0x6a17af
// 007f4800  83c404               add esp, 4
// 007f4803  5f                   pop edi
// 007f4804  5e                   pop esi
// 007f4805  5d                   pop ebp
// 007f4806  5b                   pop ebx
// 007f4807  c3                   ret 
// library openrbx-client/App\v8datamodel\PartInstance.cpp (function ??__E?prop_Locked@PartInstance@RBX@@2V?$PropDescriptor@VPartInstance@RBX@@_N@Reflection@2@B@@YAXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8datamodel/PartInstance.cpp
