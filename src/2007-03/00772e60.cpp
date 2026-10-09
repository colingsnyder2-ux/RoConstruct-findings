// roc 2007-03 00772e60  unit: seg_00770000  size: 88 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00772e60
//
// 00772e60  53                   push ebx
// 00772e61  55                   push ebp
// 00772e62  56                   push esi
// 00772e63  57                   push edi
// 00772e64  6a05                 push 5
// 00772e66  83ec0c               sub esp, 0xc
// 00772e69  8bc4                 mov eax, esp
// 00772e6b  b9d06b5700           mov ecx, 0x576bd0
// 00772e70  8908                 mov dword ptr [eax], ecx
// 00772e72  33d2                 xor edx, edx
// 00772e74  895004               mov dword ptr [eax + 4], edx
// 00772e77  83ec0c               sub esp, 0xc
// 00772e7a  33f6                 xor esi, esi
// 00772e7c  897008               mov dword ptr [eax + 8], esi
// 00772e7f  8bc4                 mov eax, esp
// 00772e81  bf60205700           mov edi, 0x572060
// 00772e86  8938                 mov dword ptr [eax], edi
// 00772e88  6814bf7a00           push 0x7abf14
// 00772e8d  33db                 xor ebx, ebx
// 00772e8f  33ed                 xor ebp, ebp
// 00772e91  895804               mov dword ptr [eax + 4], ebx
// 00772e94  68e0c67a00           push 0x7ac6e0
// 00772e99  b908cc8b00           mov ecx, 0x8bcc08
// 00772e9e  896808               mov dword ptr [eax + 8], ebp
// 00772ea1  e89a2fe0ff           call 0x575e40
// 00772ea6  6840a07700           push 0x77a040
// 00772eab  e803c3eaff           call 0x61f1b3
// 00772eb0  83c404               add esp, 4
// 00772eb3  5f                   pop edi
// 00772eb4  5e                   pop esi
// 00772eb5  5d                   pop ebp
// 00772eb6  5b                   pop ebx
// 00772eb7  c3                   ret 
// library openrbx-client/App\v8datamodel\PartInstance.cpp (function ??__E?prop_Transparency@PartInstance@RBX@@2V?$PropDescriptor@VPartInstance@RBX@@M@Reflection@2@B@@YAXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8datamodel/PartInstance.cpp
