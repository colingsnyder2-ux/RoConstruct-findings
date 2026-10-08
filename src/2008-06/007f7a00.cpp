// roc 2008-06 007f7a00  unit: seg_007f0000  size: 88 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007f7a00
//
// 007f7a00  53                   push ebx
// 007f7a01  55                   push ebp
// 007f7a02  56                   push esi
// 007f7a03  57                   push edi
// 007f7a04  6a05                 push 5
// 007f7a06  83ec0c               sub esp, 0xc
// 007f7a09  8bc4                 mov eax, esp
// 007f7a0b  b9009a6000           mov ecx, 0x609a00
// 007f7a10  8908                 mov dword ptr [eax], ecx
// 007f7a12  33d2                 xor edx, edx
// 007f7a14  895004               mov dword ptr [eax + 4], edx
// 007f7a17  83ec0c               sub esp, 0xc
// 007f7a1a  33f6                 xor esi, esi
// 007f7a1c  897008               mov dword ptr [eax + 8], esi
// 007f7a1f  8bc4                 mov eax, esp
// 007f7a21  bf50896000           mov edi, 0x608950
// 007f7a26  8938                 mov dword ptr [eax], edi
// 007f7a28  68ac298300           push 0x8329ac
// 007f7a2d  33db                 xor ebx, ebx
// 007f7a2f  33ed                 xor ebp, ebp
// 007f7a31  895804               mov dword ptr [eax + 4], ebx
// 007f7a34  686c298400           push 0x84296c
// 007f7a39  b9d4b99700           mov ecx, 0x97b9d4
// 007f7a3e  896808               mov dword ptr [eax + 8], ebp
// 007f7a41  e87a1ae1ff           call 0x6094c0
// 007f7a46  6870018000           push 0x800170
// 007f7a4b  e85f9deaff           call 0x6a17af
// 007f7a50  83c404               add esp, 4
// 007f7a53  5f                   pop edi
// 007f7a54  5e                   pop esi
// 007f7a55  5d                   pop ebp
// 007f7a56  5b                   pop ebx
// 007f7a57  c3                   ret 
// library rbxgs/v8datamodel\PVInstance.cpp (function ??__Eprop_ControllerFlagShown@RBX@@YAXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/PVInstance.cpp
