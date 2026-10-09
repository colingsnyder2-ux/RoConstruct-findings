// roc 2008-06 007f4690  unit: seg_007f0000  size: 88 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007f4690
//
// 007f4690  53                   push ebx
// 007f4691  55                   push ebp
// 007f4692  56                   push esi
// 007f4693  57                   push edi
// 007f4694  6a05                 push 5
// 007f4696  83ec0c               sub esp, 0xc
// 007f4699  8bc4                 mov eax, esp
// 007f469b  b940df5900           mov ecx, 0x59df40
// 007f46a0  8908                 mov dword ptr [eax], ecx
// 007f46a2  33d2                 xor edx, edx
// 007f46a4  895004               mov dword ptr [eax + 4], edx
// 007f46a7  83ec0c               sub esp, 0xc
// 007f46aa  33f6                 xor esi, esi
// 007f46ac  897008               mov dword ptr [eax + 8], esi
// 007f46af  8bc4                 mov eax, esp
// 007f46b1  bf905b4e00           mov edi, 0x4e5b90
// 007f46b6  8938                 mov dword ptr [eax], edi
// 007f46b8  68ac298300           push 0x8329ac
// 007f46bd  33db                 xor ebx, ebx
// 007f46bf  33ed                 xor ebp, ebp
// 007f46c1  895804               mov dword ptr [eax + 4], ebx
// 007f46c4  6810f78200           push 0x82f710
// 007f46c9  b9d0629700           mov ecx, 0x9762d0
// 007f46ce  896808               mov dword ptr [eax + 8], ebp
// 007f46d1  e8fa83daff           call 0x59cad0
// 007f46d6  68f0dd7f00           push 0x7fddf0
// 007f46db  e8cfd0eaff           call 0x6a17af
// 007f46e0  83c404               add esp, 4
// 007f46e3  5f                   pop edi
// 007f46e4  5e                   pop esi
// 007f46e5  5d                   pop ebp
// 007f46e6  5b                   pop ebx
// 007f46e7  c3                   ret 
// library openrbx-client/App\v8datamodel\PartInstance.cpp (function ??__E?prop_BrickColor@PartInstance@RBX@@2V?$PropDescriptor@VPartInstance@RBX@@VBrickColor@2@@Reflection@2@B@@YAXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8datamodel/PartInstance.cpp
