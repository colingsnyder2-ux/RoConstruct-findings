// roc 2007-03 007716f0  unit: seg_00770000  size: 88 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 007716f0
//
// 007716f0  53                   push ebx
// 007716f1  55                   push ebp
// 007716f2  56                   push esi
// 007716f3  57                   push edi
// 007716f4  6a05                 push 5
// 007716f6  83ec0c               sub esp, 0xc
// 007716f9  8bc4                 mov eax, esp
// 007716fb  b9c05a5300           mov ecx, 0x535ac0
// 00771700  8908                 mov dword ptr [eax], ecx
// 00771702  33d2                 xor edx, edx
// 00771704  895004               mov dword ptr [eax + 4], edx
// 00771707  83ec0c               sub esp, 0xc
// 0077170a  33f6                 xor esi, esi
// 0077170c  897008               mov dword ptr [eax + 8], esi
// 0077170f  8bc4                 mov eax, esp
// 00771711  bf80485300           mov edi, 0x534880
// 00771716  8938                 mov dword ptr [eax], edi
// 00771718  6870a77900           push 0x79a770
// 0077171d  33db                 xor ebx, ebx
// 0077171f  33ed                 xor ebp, ebp
// 00771721  895804               mov dword ptr [eax + 4], ebx
// 00771724  68ec557a00           push 0x7a55ec
// 00771729  b9e0b38b00           mov ecx, 0x8bb3e0
// 0077172e  896808               mov dword ptr [eax + 8], ebp
// 00771731  e8ea40dcff           call 0x535820
// 00771736  6830947700           push 0x779430
// 0077173b  e873daeaff           call 0x61f1b3
// 00771740  83c404               add esp, 4
// 00771743  5f                   pop edi
// 00771744  5e                   pop esi
// 00771745  5d                   pop ebp
// 00771746  5b                   pop ebx
// 00771747  c3                   ret 
// library rbxgs/v8datamodel\ModelInstance.cpp (function ??__EprimaryPartProp@RBX@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/ModelInstance.cpp
