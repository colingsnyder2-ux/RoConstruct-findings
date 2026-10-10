// from server: 99% by colin
// roc 2007-08 00772500  unit: seg_00770000  size: 89 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00772500
//
// 00772500  53                   push ebx
// 00772501  55                   push ebp
// 00772502  56                   push esi
// 00772503  57                   push edi
// 00772504  6a05                 push 5
// 00772506  83ec0c               sub esp, 0xc
// 00772509  8bc4                 mov eax, esp
// 0077250b  b910865700           mov ecx, 0x5792f0
// 00772510  8908                 mov dword ptr [eax], ecx
// 00772512  33d2                 xor edx, edx
// 00772514  895004               mov dword ptr [eax + 4], edx
// 00772517  83ec0c               sub esp, 0xc
// 0077251a  33f6                 xor esi, esi
// 0077251c  897008               mov dword ptr [eax + 8], esi
// 0077251f  8bc4                 mov eax, esp
// 00772521  bfa0405700           mov edi, 0x55e280
// 00772526  8938                 mov dword ptr [eax], edi
// 00772528  33db                 xor ebx, ebx
// 0077252a  895804               mov dword ptr [eax + 4], ebx
// 0077252d  33ed                 xor ebp, ebp
// 0077252f  896808               mov dword ptr [eax + 8], ebp
// 00772532  a128048a00           mov eax, dword ptr [0x8a0428]
// 00772537  50                   push eax
// 00772538  68acb07a00           push 0x796154
// 0077253d  b9d4298c00           mov ecx, 0x8c28c0
// 00772542  e8f950e0ff           call 0x578ca0
// 00772547  68f0a17700           push 0x77a0d0
// 0077254c  e8d2e7ebff           call 0x630d23
// 00772551  83c404               add esp, 4
// 00772554  5f                   pop edi
// 00772555  5e                   pop esi
// 00772556  5d                   pop ebp
// 00772557  5b                   pop ebx
// 00772558  c3                   ret 
// library rbxgs/v8datamodel\PartInstance.cpp (function ??__Eprop_Friction@RBX@@YAXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/PartInstance.cpp