// roc 2008-06 007f7a60  unit: seg_007f0000  size: 88 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007f7a60
//
// 007f7a60  53                   push ebx
// 007f7a61  55                   push ebp
// 007f7a62  56                   push esi
// 007f7a63  57                   push edi
// 007f7a64  6a05                 push 5
// 007f7a66  83ec0c               sub esp, 0xc
// 007f7a69  8bc4                 mov eax, esp
// 007f7a6b  b9c0996000           mov ecx, 0x6099c0
// 007f7a70  8908                 mov dword ptr [eax], ecx
// 007f7a72  33d2                 xor edx, edx
// 007f7a74  895004               mov dword ptr [eax + 4], edx
// 007f7a77  83ec0c               sub esp, 0xc
// 007f7a7a  33f6                 xor esi, esi
// 007f7a7c  897008               mov dword ptr [eax + 8], esi
// 007f7a7f  8bc4                 mov eax, esp
// 007f7a81  bf40d25700           mov edi, 0x57d240
// 007f7a86  8938                 mov dword ptr [eax], edi
// 007f7a88  6844d98200           push 0x82d944
// 007f7a8d  33db                 xor ebx, ebx
// 007f7a8f  33ed                 xor ebp, ebp
// 007f7a91  895804               mov dword ptr [eax + 4], ebx
// 007f7a94  6880298400           push 0x842980
// 007f7a99  b994b99700           mov ecx, 0x97b994
// 007f7a9e  896808               mov dword ptr [eax + 8], ebp
// 007f7aa1  e8ea1ae1ff           call 0x609590
// 007f7aa6  6850018000           push 0x800150
// 007f7aab  e8ff9ceaff           call 0x6a17af
// 007f7ab0  83c404               add esp, 4
// 007f7ab3  5f                   pop edi
// 007f7ab4  5e                   pop esi
// 007f7ab5  5d                   pop ebp
// 007f7ab6  5b                   pop ebx
// 007f7ab7  c3                   ret 
// library rbxgs/v8datamodel\PVInstance.cpp (function ??__E?prop_ControllerType@PVInstance@RBX@@2V?$EnumPropDescriptor@VPVInstance@RBX@@W4ControllerType@Controller@2@@Reflection@2@B@@YAXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/PVInstance.cpp
