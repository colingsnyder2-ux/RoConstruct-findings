// roc 2007-08 00774c60  unit: seg_00770000  size: 88 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00774c60
//
// 00774c60  53                   push ebx
// 00774c61  55                   push ebp
// 00774c62  56                   push esi
// 00774c63  57                   push edi
// 00774c64  6a01                 push 1
// 00774c66  83ec0c               sub esp, 0xc
// 00774c69  8bc4                 mov eax, esp
// 00774c6b  b9d03c5d00           mov ecx, 0x5d3cd0
// 00774c70  8908                 mov dword ptr [eax], ecx
// 00774c72  33d2                 xor edx, edx
// 00774c74  895004               mov dword ptr [eax + 4], edx
// 00774c77  83ec0c               sub esp, 0xc
// 00774c7a  33f6                 xor esi, esi
// 00774c7c  897008               mov dword ptr [eax + 8], esi
// 00774c7f  8bc4                 mov eax, esp
// 00774c81  bf801c5d00           mov edi, 0x5d1c80
// 00774c86  8938                 mov dword ptr [eax], edi
// 00774c88  6840a87a00           push 0x7aa840
// 00774c8d  33db                 xor ebx, ebx
// 00774c8f  33ed                 xor ebp, ebp
// 00774c91  895804               mov dword ptr [eax + 4], ebx
// 00774c94  6844b77b00           push 0x7bb744
// 00774c99  b99c698c00           mov ecx, 0x8c699c
// 00774c9e  896808               mov dword ptr [eax + 8], ebp
// 00774ca1  e8caeae5ff           call 0x5d3770
// 00774ca6  6860bc7700           push 0x77bc60
// 00774cab  e873c0ebff           call 0x630d23
// 00774cb0  83c404               add esp, 4
// 00774cb3  5f                   pop edi
// 00774cb4  5e                   pop esi
// 00774cb5  5d                   pop ebp
// 00774cb6  5b                   pop ebx
// 00774cb7  c3                   ret 
// library rbxgs/v8datamodel\Tool.cpp (function ??__Eprop_GripUp@RBX@@YAXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Tool.cpp
