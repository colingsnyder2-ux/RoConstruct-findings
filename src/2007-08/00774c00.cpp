// roc 2007-08 00774c00  unit: seg_00770000  size: 88 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00774c00
//
// 00774c00  53                   push ebx
// 00774c01  55                   push ebp
// 00774c02  56                   push esi
// 00774c03  57                   push edi
// 00774c04  6a01                 push 1
// 00774c06  83ec0c               sub esp, 0xc
// 00774c09  8bc4                 mov eax, esp
// 00774c0b  b9503b5d00           mov ecx, 0x5d3b50
// 00774c10  8908                 mov dword ptr [eax], ecx
// 00774c12  33d2                 xor edx, edx
// 00774c14  895004               mov dword ptr [eax + 4], edx
// 00774c17  83ec0c               sub esp, 0xc
// 00774c1a  33f6                 xor esi, esi
// 00774c1c  897008               mov dword ptr [eax + 8], esi
// 00774c1f  8bc4                 mov eax, esp
// 00774c21  bf301c5d00           mov edi, 0x5d1c30
// 00774c26  8938                 mov dword ptr [eax], edi
// 00774c28  6840a87a00           push 0x7aa840
// 00774c2d  33db                 xor ebx, ebx
// 00774c2f  33ed                 xor ebp, ebp
// 00774c31  895804               mov dword ptr [eax + 4], ebx
// 00774c34  6838b77b00           push 0x7bb738
// 00774c39  b9f8688c00           mov ecx, 0x8c68f8
// 00774c3e  896808               mov dword ptr [eax + 8], ebp
// 00774c41  e82aebe5ff           call 0x5d3770
// 00774c46  68a0bc7700           push 0x77bca0
// 00774c4b  e8d3c0ebff           call 0x630d23
// 00774c50  83c404               add esp, 4
// 00774c53  5f                   pop edi
// 00774c54  5e                   pop esi
// 00774c55  5d                   pop ebp
// 00774c56  5b                   pop ebx
// 00774c57  c3                   ret 
// library rbxgs/v8datamodel\Tool.cpp (function ??__Eprop_GripForward@RBX@@YAXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Tool.cpp
