// roc 2007-03 007750a0  unit: seg_00770000  size: 88 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 007750a0
//
// 007750a0  53                   push ebx
// 007750a1  55                   push ebp
// 007750a2  56                   push esi
// 007750a3  57                   push edi
// 007750a4  6a05                 push 5
// 007750a6  83ec0c               sub esp, 0xc
// 007750a9  8bc4                 mov eax, esp
// 007750ab  b9706a5b00           mov ecx, 0x5b6a70
// 007750b0  8908                 mov dword ptr [eax], ecx
// 007750b2  33d2                 xor edx, edx
// 007750b4  895004               mov dword ptr [eax + 4], edx
// 007750b7  83ec0c               sub esp, 0xc
// 007750ba  33f6                 xor esi, esi
// 007750bc  897008               mov dword ptr [eax + 8], esi
// 007750bf  8bc4                 mov eax, esp
// 007750c1  bf40fd5500           mov edi, 0x55fd40
// 007750c6  8938                 mov dword ptr [eax], edi
// 007750c8  6864657a00           push 0x7a6564
// 007750cd  33db                 xor ebx, ebx
// 007750cf  33ed                 xor ebp, ebp
// 007750d1  895804               mov dword ptr [eax + 4], ebx
// 007750d4  6810907b00           push 0x7b9010
// 007750d9  b9d8fe8b00           mov ecx, 0x8bfed8
// 007750de  896808               mov dword ptr [eax + 8], ebp
// 007750e1  e85a1ae4ff           call 0x5b6b40
// 007750e6  68f0b47700           push 0x77b4f0
// 007750eb  e8c3a0eaff           call 0x61f1b3
// 007750f0  83c404               add esp, 4
// 007750f3  5f                   pop edi
// 007750f4  5e                   pop esi
// 007750f5  5d                   pop ebp
// 007750f6  5b                   pop ebx
// 007750f7  c3                   ret 
// library rbxgs/v8datamodel\PVInstance.cpp (function ??__E?prop_ControllerType@PVInstance@RBX@@2V?$EnumPropDescriptor@VPVInstance@RBX@@W4ControllerType@Controller@2@@Reflection@2@B@@YAXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/PVInstance.cpp
