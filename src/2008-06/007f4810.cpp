// roc 2008-06 007f4810  unit: seg_007f0000  size: 88 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007f4810
//
// 007f4810  53                   push ebx
// 007f4811  55                   push ebp
// 007f4812  56                   push esi
// 007f4813  57                   push edi
// 007f4814  6a05                 push 5
// 007f4816  83ec0c               sub esp, 0xc
// 007f4819  8bc4                 mov eax, esp
// 007f481b  b9c0dd5900           mov ecx, 0x59ddc0
// 007f4820  8908                 mov dword ptr [eax], ecx
// 007f4822  33d2                 xor edx, edx
// 007f4824  895004               mov dword ptr [eax + 4], edx
// 007f4827  83ec0c               sub esp, 0xc
// 007f482a  33f6                 xor esi, esi
// 007f482c  897008               mov dword ptr [eax + 8], esi
// 007f482f  8bc4                 mov eax, esp
// 007f4831  bf408d5900           mov edi, 0x598d40
// 007f4836  8938                 mov dword ptr [eax], edi
// 007f4838  6844d98200           push 0x82d944
// 007f483d  33db                 xor ebx, ebx
// 007f483f  33ed                 xor ebp, ebp
// 007f4841  895804               mov dword ptr [eax + 4], ebx
// 007f4844  6874318300           push 0x833174
// 007f4849  b9e45f9700           mov ecx, 0x975fe4
// 007f484e  896808               mov dword ptr [eax + 8], ebp
// 007f4851  e81a84daff           call 0x59cc70
// 007f4856  6830de7f00           push 0x7fde30
// 007f485b  e84fcfeaff           call 0x6a17af
// 007f4860  83c404               add esp, 4
// 007f4863  5f                   pop edi
// 007f4864  5e                   pop esi
// 007f4865  5d                   pop ebp
// 007f4866  5b                   pop ebx
// 007f4867  c3                   ret 
// library openrbx-client/App\v8datamodel\PartInstance.cpp (function ??__E?prop_Anchored@PartInstance@RBX@@2V?$PropDescriptor@VPartInstance@RBX@@_N@Reflection@2@B@@YAXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8datamodel/PartInstance.cpp
