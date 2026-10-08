// roc 2008-06 007f7e90  unit: seg_007f0000  size: 88 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007f7e90
//
// 007f7e90  53                   push ebx
// 007f7e91  55                   push ebp
// 007f7e92  56                   push esi
// 007f7e93  57                   push edi
// 007f7e94  6a05                 push 5
// 007f7e96  83ec0c               sub esp, 0xc
// 007f7e99  8bc4                 mov eax, esp
// 007f7e9b  b9c0cd6200           mov ecx, 0x62cdc0
// 007f7ea0  8908                 mov dword ptr [eax], ecx
// 007f7ea2  33d2                 xor edx, edx
// 007f7ea4  895004               mov dword ptr [eax + 4], edx
// 007f7ea7  83ec0c               sub esp, 0xc
// 007f7eaa  33f6                 xor esi, esi
// 007f7eac  897008               mov dword ptr [eax + 8], esi
// 007f7eaf  8bc4                 mov eax, esp
// 007f7eb1  bff0b86200           mov edi, 0x62b8f0
// 007f7eb6  8938                 mov dword ptr [eax], edi
// 007f7eb8  6890248200           push 0x822490
// 007f7ebd  33db                 xor ebx, ebx
// 007f7ebf  33ed                 xor ebp, ebp
// 007f7ec1  895804               mov dword ptr [eax + 4], ebx
// 007f7ec4  6848258200           push 0x822548
// 007f7ec9  b994c09700           mov ecx, 0x97c094
// 007f7ece  896808               mov dword ptr [eax + 8], ebp
// 007f7ed1  e8ea45e3ff           call 0x62c4c0
// 007f7ed6  6850048000           push 0x800450
// 007f7edb  e8cf98eaff           call 0x6a17af
// 007f7ee0  83c404               add esp, 4
// 007f7ee3  5f                   pop edi
// 007f7ee4  5e                   pop esi
// 007f7ee5  5d                   pop ebp
// 007f7ee6  5b                   pop ebx
// 007f7ee7  c3                   ret 
// library rbxgs/v8datamodel\FlagStand.cpp (function ??__Eprop_Color@RBX@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/FlagStand.cpp
