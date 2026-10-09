// roc 2008-06 007f4750  unit: seg_007f0000  size: 88 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007f4750
//
// 007f4750  53                   push ebx
// 007f4751  55                   push ebp
// 007f4752  56                   push esi
// 007f4753  57                   push edi
// 007f4754  6a05                 push 5
// 007f4756  83ec0c               sub esp, 0xc
// 007f4759  8bc4                 mov eax, esp
// 007f475b  b910df5900           mov ecx, 0x59df10
// 007f4760  8908                 mov dword ptr [eax], ecx
// 007f4762  33d2                 xor edx, edx
// 007f4764  895004               mov dword ptr [eax + 4], edx
// 007f4767  83ec0c               sub esp, 0xc
// 007f476a  33f6                 xor esi, esi
// 007f476c  897008               mov dword ptr [eax + 8], esi
// 007f476f  8bc4                 mov eax, esp
// 007f4771  bf805b4e00           mov edi, 0x4e5b80
// 007f4776  8938                 mov dword ptr [eax], edi
// 007f4778  68ac298300           push 0x8329ac
// 007f477d  33db                 xor ebx, ebx
// 007f477f  33ed                 xor ebp, ebp
// 007f4781  895804               mov dword ptr [eax + 4], ebx
// 007f4784  6860318300           push 0x833160
// 007f4789  b91c609700           mov ecx, 0x97601c
// 007f478e  896808               mov dword ptr [eax + 8], ebp
// 007f4791  e80a84daff           call 0x59cba0
// 007f4796  68b0dd7f00           push 0x7fddb0
// 007f479b  e80fd0eaff           call 0x6a17af
// 007f47a0  83c404               add esp, 4
// 007f47a3  5f                   pop edi
// 007f47a4  5e                   pop esi
// 007f47a5  5d                   pop ebp
// 007f47a6  5b                   pop ebx
// 007f47a7  c3                   ret 
// library openrbx-client/App\v8datamodel\PartInstance.cpp (function ??__E?prop_Reflectance@PartInstance@RBX@@2V?$PropDescriptor@VPartInstance@RBX@@M@Reflection@2@B@@YAXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8datamodel/PartInstance.cpp
