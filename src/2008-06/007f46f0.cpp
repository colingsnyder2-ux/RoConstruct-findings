// roc 2008-06 007f46f0  unit: seg_007f0000  size: 88 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007f46f0
//
// 007f46f0  53                   push ebx
// 007f46f1  55                   push ebp
// 007f46f2  56                   push esi
// 007f46f3  57                   push edi
// 007f46f4  6a05                 push 5
// 007f46f6  83ec0c               sub esp, 0xc
// 007f46f9  8bc4                 mov eax, esp
// 007f46fb  b9b0de5900           mov ecx, 0x59deb0
// 007f4700  8908                 mov dword ptr [eax], ecx
// 007f4702  33d2                 xor edx, edx
// 007f4704  895004               mov dword ptr [eax + 4], edx
// 007f4707  83ec0c               sub esp, 0xc
// 007f470a  33f6                 xor esi, esi
// 007f470c  897008               mov dword ptr [eax + 8], esi
// 007f470f  8bc4                 mov eax, esp
// 007f4711  bfe08b5900           mov edi, 0x598be0
// 007f4716  8938                 mov dword ptr [eax], edi
// 007f4718  68ac298300           push 0x8329ac
// 007f471d  33db                 xor ebx, ebx
// 007f471f  33ed                 xor ebp, ebp
// 007f4721  895804               mov dword ptr [eax + 4], ebx
// 007f4724  6850318300           push 0x833150
// 007f4729  b928619700           mov ecx, 0x976128
// 007f472e  896808               mov dword ptr [eax + 8], ebp
// 007f4731  e86a84daff           call 0x59cba0
// 007f4736  68d0dd7f00           push 0x7fddd0
// 007f473b  e86fd0eaff           call 0x6a17af
// 007f4740  83c404               add esp, 4
// 007f4743  5f                   pop edi
// 007f4744  5e                   pop esi
// 007f4745  5d                   pop ebp
// 007f4746  5b                   pop ebx
// 007f4747  c3                   ret 
// library openrbx-client/App\v8datamodel\PartInstance.cpp (function ??__E?prop_Transparency@PartInstance@RBX@@2V?$PropDescriptor@VPartInstance@RBX@@M@Reflection@2@B@@YAXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8datamodel/PartInstance.cpp
