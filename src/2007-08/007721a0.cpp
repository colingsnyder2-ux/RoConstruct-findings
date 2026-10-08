// roc 2007-08 007721a0  unit: seg_00770000  size: 88 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 007721a0
//
// 007721a0  53                   push ebx
// 007721a1  55                   push ebp
// 007721a2  56                   push esi
// 007721a3  57                   push edi
// 007721a4  6a05                 push 5
// 007721a6  83ec0c               sub esp, 0xc
// 007721a9  8bc4                 mov eax, esp
// 007721ab  b9c0825700           mov ecx, 0x5782c0
// 007721b0  8908                 mov dword ptr [eax], ecx
// 007721b2  33d2                 xor edx, edx
// 007721b4  895004               mov dword ptr [eax + 4], edx
// 007721b7  83ec0c               sub esp, 0xc
// 007721ba  33f6                 xor esi, esi
// 007721bc  897008               mov dword ptr [eax + 8], esi
// 007721bf  8bc4                 mov eax, esp
// 007721c1  bf80405700           mov edi, 0x574080
// 007721c6  8938                 mov dword ptr [eax], edi
// 007721c8  6848647a00           push 0x7a6448
// 007721cd  33db                 xor ebx, ebx
// 007721cf  33ed                 xor ebp, ebp
// 007721d1  895804               mov dword ptr [eax + 4], ebx
// 007721d4  6850b07a00           push 0x7ab050
// 007721d9  b910288c00           mov ecx, 0x8c2810
// 007721de  896808               mov dword ptr [eax + 8], ebp
// 007721e1  e81a55e0ff           call 0x577700
// 007721e6  6810a37700           push 0x77a310
// 007721eb  e833ebebff           call 0x630d23
// 007721f0  83c404               add esp, 4
// 007721f3  5f                   pop edi
// 007721f4  5e                   pop esi
// 007721f5  5d                   pop ebp
// 007721f6  5b                   pop ebx
// 007721f7  c3                   ret 
// library openrbx-client/App\v8datamodel\PartInstance.cpp (function ??__E?prop_Anchored@PartInstance@RBX@@2V?$PropDescriptor@VPartInstance@RBX@@_N@Reflection@2@B@@YAXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8datamodel/PartInstance.cpp
