// roc 2007-03 00775140  unit: seg_00770000  size: 88 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00775140
//
// 00775140  53                   push ebx
// 00775141  55                   push ebp
// 00775142  56                   push esi
// 00775143  57                   push edi
// 00775144  6a04                 push 4
// 00775146  83ec0c               sub esp, 0xc
// 00775149  8bc4                 mov eax, esp
// 0077514b  b9c01f5d00           mov ecx, 0x5d1fc0
// 00775150  8908                 mov dword ptr [eax], ecx
// 00775152  33d2                 xor edx, edx
// 00775154  895004               mov dword ptr [eax + 4], edx
// 00775157  83ec0c               sub esp, 0xc
// 0077515a  33f6                 xor esi, esi
// 0077515c  897008               mov dword ptr [eax + 8], esi
// 0077515f  8bc4                 mov eax, esp
// 00775161  bf70215700           mov edi, 0x572170
// 00775166  8938                 mov dword ptr [eax], edi
// 00775168  6814bf7a00           push 0x7abf14
// 0077516d  33db                 xor ebx, ebx
// 0077516f  33ed                 xor ebp, ebp
// 00775171  895804               mov dword ptr [eax + 4], ebx
// 00775174  6848bd7b00           push 0x7bbd48
// 00775179  b9f0008c00           mov ecx, 0x8c00f0
// 0077517e  896808               mov dword ptr [eax + 8], ebp
// 00775181  e81acbe5ff           call 0x5d1ca0
// 00775186  6820b67700           push 0x77b620
// 0077518b  e823a0eaff           call 0x61f1b3
// 00775190  83c404               add esp, 4
// 00775193  5f                   pop edi
// 00775194  5e                   pop esi
// 00775195  5d                   pop ebp
// 00775196  5b                   pop ebx
// 00775197  c3                   ret 
// library rbxgs/v8datamodel\Tool.cpp (function ??__Eprop_Grip@RBX@@YAXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Tool.cpp
