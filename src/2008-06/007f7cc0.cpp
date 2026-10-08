// roc 2008-06 007f7cc0  unit: seg_007f0000  size: 88 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007f7cc0
//
// 007f7cc0  53                   push ebx
// 007f7cc1  55                   push ebp
// 007f7cc2  56                   push esi
// 007f7cc3  57                   push edi
// 007f7cc4  6a05                 push 5
// 007f7cc6  83ec0c               sub esp, 0xc
// 007f7cc9  8bc4                 mov eax, esp
// 007f7ccb  b9609a6100           mov ecx, 0x619a60
// 007f7cd0  8908                 mov dword ptr [eax], ecx
// 007f7cd2  33d2                 xor edx, edx
// 007f7cd4  895004               mov dword ptr [eax + 4], edx
// 007f7cd7  83ec0c               sub esp, 0xc
// 007f7cda  33f6                 xor esi, esi
// 007f7cdc  897008               mov dword ptr [eax + 8], esi
// 007f7cdf  8bc4                 mov eax, esp
// 007f7ce1  bf80836100           mov edi, 0x618380
// 007f7ce6  8938                 mov dword ptr [eax], edi
// 007f7ce8  6890248200           push 0x822490
// 007f7ced  33db                 xor ebx, ebx
// 007f7cef  33ed                 xor ebp, ebp
// 007f7cf1  895804               mov dword ptr [eax + 4], ebx
// 007f7cf4  6848258200           push 0x822548
// 007f7cf9  b920bf9700           mov ecx, 0x97bf20
// 007f7cfe  896808               mov dword ptr [eax + 8], ebp
// 007f7d01  e8ba14e2ff           call 0x6191c0
// 007f7d06  6810038000           push 0x800310
// 007f7d0b  e89f9aeaff           call 0x6a17af
// 007f7d10  83c404               add esp, 4
// 007f7d13  5f                   pop edi
// 007f7d14  5e                   pop esi
// 007f7d15  5d                   pop ebp
// 007f7d16  5b                   pop ebx
// 007f7d17  c3                   ret 
// library rbxgs/v8datamodel\FlagStand.cpp (function ??__Eprop_Color@RBX@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/FlagStand.cpp
