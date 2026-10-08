// roc 2007-08 007720e0  unit: seg_00770000  size: 88 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 007720e0
//
// 007720e0  53                   push ebx
// 007720e1  55                   push ebp
// 007720e2  56                   push esi
// 007720e3  57                   push edi
// 007720e4  6a05                 push 5
// 007720e6  83ec0c               sub esp, 0xc
// 007720e9  8bc4                 mov eax, esp
// 007720eb  b980845700           mov ecx, 0x578480
// 007720f0  8908                 mov dword ptr [eax], ecx
// 007720f2  33d2                 xor edx, edx
// 007720f4  895004               mov dword ptr [eax + 4], edx
// 007720f7  83ec0c               sub esp, 0xc
// 007720fa  33f6                 xor esi, esi
// 007720fc  897008               mov dword ptr [eax + 8], esi
// 007720ff  8bc4                 mov eax, esp
// 00772101  bf50fe4c00           mov edi, 0x4cfe50
// 00772106  8938                 mov dword ptr [eax], edi
// 00772108  6840a87a00           push 0x7aa840
// 0077210d  33db                 xor ebx, ebx
// 0077210f  33ed                 xor ebp, ebp
// 00772111  895804               mov dword ptr [eax + 4], ebx
// 00772114  683cb07a00           push 0x7ab03c
// 00772119  b948288c00           mov ecx, 0x8c2848
// 0077211e  896808               mov dword ptr [eax + 8], ebp
// 00772121  e81a55e0ff           call 0x577640
// 00772126  6890a27700           push 0x77a290
// 0077212b  e8f3ebebff           call 0x630d23
// 00772130  83c404               add esp, 4
// 00772133  5f                   pop edi
// 00772134  5e                   pop esi
// 00772135  5d                   pop ebp
// 00772136  5b                   pop ebx
// 00772137  c3                   ret 
// library openrbx-client/App\v8datamodel\PartInstance.cpp (function ??__E?prop_Reflectance@PartInstance@RBX@@2V?$PropDescriptor@VPartInstance@RBX@@M@Reflection@2@B@@YAXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8datamodel/PartInstance.cpp
