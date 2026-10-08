// roc 2007-08 00774d80  unit: seg_00770000  size: 88 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00774d80
//
// 00774d80  53                   push ebx
// 00774d81  55                   push ebp
// 00774d82  56                   push esi
// 00774d83  57                   push edi
// 00774d84  6a04                 push 4
// 00774d86  83ec0c               sub esp, 0xc
// 00774d89  8bc4                 mov eax, esp
// 00774d8b  b950495d00           mov ecx, 0x5d4950
// 00774d90  8908                 mov dword ptr [eax], ecx
// 00774d92  33d2                 xor edx, edx
// 00774d94  895004               mov dword ptr [eax + 4], edx
// 00774d97  83ec0c               sub esp, 0xc
// 00774d9a  33f6                 xor esi, esi
// 00774d9c  897008               mov dword ptr [eax + 8], esi
// 00774d9f  8bc4                 mov eax, esp
// 00774da1  bf301a5d00           mov edi, 0x5d1a30
// 00774da6  8938                 mov dword ptr [eax], edi
// 00774da8  6840a87a00           push 0x7aa840
// 00774dad  33db                 xor ebx, ebx
// 00774daf  33ed                 xor ebp, ebp
// 00774db1  895804               mov dword ptr [eax + 4], ebx
// 00774db4  6868ae7b00           push 0x7bae68
// 00774db9  b9d4698c00           mov ecx, 0x8c69d4
// 00774dbe  896808               mov dword ptr [eax + 8], ebp
// 00774dc1  e86aeae5ff           call 0x5d3830
// 00774dc6  6800bd7700           push 0x77bd00
// 00774dcb  e853bfebff           call 0x630d23
// 00774dd0  83c404               add esp, 4
// 00774dd3  5f                   pop edi
// 00774dd4  5e                   pop esi
// 00774dd5  5d                   pop ebp
// 00774dd6  5b                   pop ebx
// 00774dd7  c3                   ret 
// library rbxgs/v8datamodel\Tool.cpp (function ??__Eprop_FrontendActivationState@RBX@@YAXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Tool.cpp
