// roc 2008-06 007f4870  unit: seg_007f0000  size: 88 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007f4870
//
// 007f4870  53                   push ebx
// 007f4871  55                   push ebp
// 007f4872  56                   push esi
// 007f4873  57                   push edi
// 007f4874  6a05                 push 5
// 007f4876  83ec0c               sub esp, 0xc
// 007f4879  8bc4                 mov eax, esp
// 007f487b  b980dd5900           mov ecx, 0x59dd80
// 007f4880  8908                 mov dword ptr [eax], ecx
// 007f4882  33d2                 xor edx, edx
// 007f4884  895004               mov dword ptr [eax + 4], edx
// 007f4887  83ec0c               sub esp, 0xc
// 007f488a  33f6                 xor esi, esi
// 007f488c  897008               mov dword ptr [eax + 8], esi
// 007f488f  8bc4                 mov eax, esp
// 007f4891  bf208d5900           mov edi, 0x598d20
// 007f4896  8938                 mov dword ptr [eax], edi
// 007f4898  6844d98200           push 0x82d944
// 007f489d  33db                 xor ebx, ebx
// 007f489f  33ed                 xor ebp, ebp
// 007f48a1  895804               mov dword ptr [eax + 4], ebx
// 007f48a4  6880318300           push 0x833180
// 007f48a9  b900609700           mov ecx, 0x976000
// 007f48ae  896808               mov dword ptr [eax + 8], ebp
// 007f48b1  e8ba83daff           call 0x59cc70
// 007f48b6  6830dc7f00           push 0x7fdc30
// 007f48bb  e8efceeaff           call 0x6a17af
// 007f48c0  83c404               add esp, 4
// 007f48c3  5f                   pop edi
// 007f48c4  5e                   pop esi
// 007f48c5  5d                   pop ebp
// 007f48c6  5b                   pop ebx
// 007f48c7  c3                   ret 
// library openrbx-client/App\v8datamodel\PartInstance.cpp (function ??__E?prop_CanCollide@PartInstance@RBX@@2V?$PropDescriptor@VPartInstance@RBX@@_N@Reflection@2@B@@YAXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8datamodel/PartInstance.cpp
