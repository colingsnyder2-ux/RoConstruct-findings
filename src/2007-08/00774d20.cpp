// roc 2007-08 00774d20  unit: seg_00770000  size: 88 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00774d20
//
// 00774d20  53                   push ebx
// 00774d21  55                   push ebp
// 00774d22  56                   push esi
// 00774d23  57                   push edi
// 00774d24  6a04                 push 4
// 00774d26  83ec0c               sub esp, 0xc
// 00774d29  8bc4                 mov eax, esp
// 00774d2b  b920465d00           mov ecx, 0x5d4620
// 00774d30  8908                 mov dword ptr [eax], ecx
// 00774d32  33d2                 xor edx, edx
// 00774d34  895004               mov dword ptr [eax + 4], edx
// 00774d37  83ec0c               sub esp, 0xc
// 00774d3a  33f6                 xor esi, esi
// 00774d3c  897008               mov dword ptr [eax + 8], esi
// 00774d3f  8bc4                 mov eax, esp
// 00774d41  bfa0f54200           mov edi, 0x42f5a0
// 00774d46  8938                 mov dword ptr [eax], edi
// 00774d48  6840a87a00           push 0x7aa840
// 00774d4d  33db                 xor ebx, ebx
// 00774d4f  33ed                 xor ebp, ebp
// 00774d51  895804               mov dword ptr [eax + 4], ebx
// 00774d54  6878ae7b00           push 0x7bae78
// 00774d59  b9f0698c00           mov ecx, 0x8c69f0
// 00774d5e  896808               mov dword ptr [eax + 8], ebp
// 00774d61  e8caeae5ff           call 0x5d3830
// 00774d66  6820bd7700           push 0x77bd20
// 00774d6b  e8b3bfebff           call 0x630d23
// 00774d70  83c404               add esp, 4
// 00774d73  5f                   pop edi
// 00774d74  5e                   pop esi
// 00774d75  5d                   pop ebp
// 00774d76  5b                   pop ebx
// 00774d77  c3                   ret 
// library rbxgs/v8datamodel\Tool.cpp (function ??__Eprop_BackendToolState@RBX@@YAXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Tool.cpp
