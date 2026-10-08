// roc 2007-08 00774b40  unit: seg_00770000  size: 88 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00774b40
//
// 00774b40  53                   push ebx
// 00774b41  55                   push ebp
// 00774b42  56                   push esi
// 00774b43  57                   push edi
// 00774b44  6a04                 push 4
// 00774b46  83ec0c               sub esp, 0xc
// 00774b49  8bc4                 mov eax, esp
// 00774b4b  b9703a5d00           mov ecx, 0x5d3a70
// 00774b50  8908                 mov dword ptr [eax], ecx
// 00774b52  33d2                 xor edx, edx
// 00774b54  895004               mov dword ptr [eax + 4], edx
// 00774b57  83ec0c               sub esp, 0xc
// 00774b5a  33f6                 xor esi, esi
// 00774b5c  897008               mov dword ptr [eax + 8], esi
// 00774b5f  8bc4                 mov eax, esp
// 00774b61  bf401a5d00           mov edi, 0x5d1a40
// 00774b66  8938                 mov dword ptr [eax], edi
// 00774b68  6840a87a00           push 0x7aa840
// 00774b6d  33db                 xor ebx, ebx
// 00774b6f  33ed                 xor ebp, ebp
// 00774b71  895804               mov dword ptr [eax + 4], ebx
// 00774b74  6828b77b00           push 0x7bb728
// 00774b79  b9b8698c00           mov ecx, 0x8c69b8
// 00774b7e  896808               mov dword ptr [eax + 8], ebp
// 00774b81  e82aebe5ff           call 0x5d36b0
// 00774b86  68e0bc7700           push 0x77bce0
// 00774b8b  e893c1ebff           call 0x630d23
// 00774b90  83c404               add esp, 4
// 00774b93  5f                   pop edi
// 00774b94  5e                   pop esi
// 00774b95  5d                   pop ebp
// 00774b96  5b                   pop ebx
// 00774b97  c3                   ret 
// library rbxgs/v8datamodel\Tool.cpp (function ??__Eprop_Grip@RBX@@YAXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Tool.cpp
