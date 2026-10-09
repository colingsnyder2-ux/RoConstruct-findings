// roc 2007-03 00772f20  unit: seg_00770000  size: 88 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00772f20
//
// 00772f20  53                   push ebx
// 00772f21  55                   push ebp
// 00772f22  56                   push esi
// 00772f23  57                   push edi
// 00772f24  6a05                 push 5
// 00772f26  83ec0c               sub esp, 0xc
// 00772f29  8bc4                 mov eax, esp
// 00772f2b  b9006b5700           mov ecx, 0x576b00
// 00772f30  8908                 mov dword ptr [eax], ecx
// 00772f32  33d2                 xor edx, edx
// 00772f34  895004               mov dword ptr [eax + 4], edx
// 00772f37  83ec0c               sub esp, 0xc
// 00772f3a  33f6                 xor esi, esi
// 00772f3c  897008               mov dword ptr [eax + 8], esi
// 00772f3f  8bc4                 mov eax, esp
// 00772f41  bf90205700           mov edi, 0x572090
// 00772f46  8938                 mov dword ptr [eax], edi
// 00772f48  6864657a00           push 0x7a6564
// 00772f4d  33db                 xor ebx, ebx
// 00772f4f  33ed                 xor ebp, ebp
// 00772f51  895804               mov dword ptr [eax + 4], ebx
// 00772f54  68fcc67a00           push 0x7ac6fc
// 00772f59  b9b0cb8b00           mov ecx, 0x8bcbb0
// 00772f5e  896808               mov dword ptr [eax + 8], ebp
// 00772f61  e89a2fe0ff           call 0x575f00
// 00772f66  68c0a07700           push 0x77a0c0
// 00772f6b  e843c2eaff           call 0x61f1b3
// 00772f70  83c404               add esp, 4
// 00772f73  5f                   pop edi
// 00772f74  5e                   pop esi
// 00772f75  5d                   pop ebp
// 00772f76  5b                   pop ebx
// 00772f77  c3                   ret 
// library openrbx-client/App\v8datamodel\PartInstance.cpp (function ??__E?prop_Locked@PartInstance@RBX@@2V?$PropDescriptor@VPartInstance@RBX@@_N@Reflection@2@B@@YAXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8datamodel/PartInstance.cpp
