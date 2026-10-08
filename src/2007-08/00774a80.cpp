// roc 2007-08 00774a80  unit: seg_00770000  size: 88 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00774a80
//
// 00774a80  53                   push ebx
// 00774a81  55                   push ebp
// 00774a82  56                   push esi
// 00774a83  57                   push edi
// 00774a84  6a05                 push 5
// 00774a86  83ec0c               sub esp, 0xc
// 00774a89  8bc4                 mov eax, esp
// 00774a8b  b920bc5b00           mov ecx, 0x5bbc20
// 00774a90  8908                 mov dword ptr [eax], ecx
// 00774a92  33d2                 xor edx, edx
// 00774a94  895004               mov dword ptr [eax + 4], edx
// 00774a97  83ec0c               sub esp, 0xc
// 00774a9a  33f6                 xor esi, esi
// 00774a9c  897008               mov dword ptr [eax + 8], esi
// 00774a9f  8bc4                 mov eax, esp
// 00774aa1  bf50ae5b00           mov edi, 0x5bae50
// 00774aa6  8938                 mov dword ptr [eax], edi
// 00774aa8  6840a87a00           push 0x7aa840
// 00774aad  33db                 xor ebx, ebx
// 00774aaf  33ed                 xor ebp, ebp
// 00774ab1  895804               mov dword ptr [eax + 4], ebx
// 00774ab4  6818907b00           push 0x7b9018
// 00774ab9  b9dc678c00           mov ecx, 0x8c67dc
// 00774abe  896808               mov dword ptr [eax + 8], ebp
// 00774ac1  e8ca6fe4ff           call 0x5bba90
// 00774ac6  6810bc7700           push 0x77bc10
// 00774acb  e853c2ebff           call 0x630d23
// 00774ad0  83c404               add esp, 4
// 00774ad3  5f                   pop edi
// 00774ad4  5e                   pop esi
// 00774ad5  5d                   pop ebp
// 00774ad6  5b                   pop ebx
// 00774ad7  c3                   ret 
// library rbxgs/v8datamodel\PVInstance.cpp (function ??__Eprop_ControllerFlagShown@RBX@@YAXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/PVInstance.cpp
