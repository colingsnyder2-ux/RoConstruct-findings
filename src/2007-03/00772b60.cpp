// roc 2007-03 00772b60  unit: seg_00770000  size: 88 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00772b60
//
// 00772b60  53                   push ebx
// 00772b61  55                   push ebp
// 00772b62  56                   push esi
// 00772b63  57                   push edi
// 00772b64  6a05                 push 5
// 00772b66  83ec0c               sub esp, 0xc
// 00772b69  8bc4                 mov eax, esp
// 00772b6b  b9f0665700           mov ecx, 0x5766f0
// 00772b70  8908                 mov dword ptr [eax], ecx
// 00772b72  33d2                 xor edx, edx
// 00772b74  895004               mov dword ptr [eax + 4], edx
// 00772b77  83ec0c               sub esp, 0xc
// 00772b7a  33f6                 xor esi, esi
// 00772b7c  897008               mov dword ptr [eax + 8], esi
// 00772b7f  8bc4                 mov eax, esp
// 00772b81  bfe0295700           mov edi, 0x5729e0
// 00772b86  8938                 mov dword ptr [eax], edi
// 00772b88  6870a77900           push 0x79a770
// 00772b8d  33db                 xor ebx, ebx
// 00772b8f  33ed                 xor ebp, ebp
// 00772b91  895804               mov dword ptr [eax + 4], ebx
// 00772b94  68b8c67a00           push 0x7ac6b8
// 00772b99  b9a4cd8b00           mov ecx, 0x8bcda4
// 00772b9e  896808               mov dword ptr [eax + 8], ebp
// 00772ba1  e85a30e0ff           call 0x575c00
// 00772ba6  68c09f7700           push 0x779fc0
// 00772bab  e803c6eaff           call 0x61f1b3
// 00772bb0  83c404               add esp, 4
// 00772bb3  5f                   pop edi
// 00772bb4  5e                   pop esi
// 00772bb5  5d                   pop ebp
// 00772bb6  5b                   pop ebx
// 00772bb7  c3                   ret 
// library rbxgs/v8datamodel\PartInstance.cpp (function ??__Eprop_Velocity@RBX@@YAXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/PartInstance.cpp
