// roc 2007-03 00772e00  unit: seg_00770000  size: 88 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00772e00
//
// 00772e00  53                   push ebx
// 00772e01  55                   push ebp
// 00772e02  56                   push esi
// 00772e03  57                   push edi
// 00772e04  6a05                 push 5
// 00772e06  83ec0c               sub esp, 0xc
// 00772e09  8bc4                 mov eax, esp
// 00772e0b  b9306c5700           mov ecx, 0x576c30
// 00772e10  8908                 mov dword ptr [eax], ecx
// 00772e12  33d2                 xor edx, edx
// 00772e14  895004               mov dword ptr [eax + 4], edx
// 00772e17  83ec0c               sub esp, 0xc
// 00772e1a  33f6                 xor esi, esi
// 00772e1c  897008               mov dword ptr [eax + 8], esi
// 00772e1f  8bc4                 mov eax, esp
// 00772e21  bf70424c00           mov edi, 0x4c4270
// 00772e26  8938                 mov dword ptr [eax], edi
// 00772e28  6814bf7a00           push 0x7abf14
// 00772e2d  33db                 xor ebx, ebx
// 00772e2f  33ed                 xor ebp, ebp
// 00772e31  895804               mov dword ptr [eax + 4], ebx
// 00772e34  6818b77a00           push 0x7ab718
// 00772e39  b914cd8b00           mov ecx, 0x8bcd14
// 00772e3e  896808               mov dword ptr [eax + 8], ebp
// 00772e41  e83a2fe0ff           call 0x575d80
// 00772e46  6860a07700           push 0x77a060
// 00772e4b  e863c3eaff           call 0x61f1b3
// 00772e50  83c404               add esp, 4
// 00772e53  5f                   pop edi
// 00772e54  5e                   pop esi
// 00772e55  5d                   pop ebp
// 00772e56  5b                   pop ebx
// 00772e57  c3                   ret 
// library openrbx-client/App\v8datamodel\PartInstance.cpp (function ??__E?prop_BrickColor@PartInstance@RBX@@2V?$PropDescriptor@VPartInstance@RBX@@VBrickColor@2@@Reflection@2@B@@YAXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8datamodel/PartInstance.cpp
