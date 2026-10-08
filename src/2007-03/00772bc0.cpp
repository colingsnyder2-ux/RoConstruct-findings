// roc 2007-03 00772bc0  unit: seg_00770000  size: 88 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00772bc0
//
// 00772bc0  53                   push ebx
// 00772bc1  55                   push ebp
// 00772bc2  56                   push esi
// 00772bc3  57                   push edi
// 00772bc4  6a05                 push 5
// 00772bc6  83ec0c               sub esp, 0xc
// 00772bc9  8bc4                 mov eax, esp
// 00772bcb  b9b0675700           mov ecx, 0x5767b0
// 00772bd0  8908                 mov dword ptr [eax], ecx
// 00772bd2  33d2                 xor edx, edx
// 00772bd4  895004               mov dword ptr [eax + 4], edx
// 00772bd7  83ec0c               sub esp, 0xc
// 00772bda  33f6                 xor esi, esi
// 00772bdc  897008               mov dword ptr [eax + 8], esi
// 00772bdf  8bc4                 mov eax, esp
// 00772be1  bf002a5700           mov edi, 0x572a00
// 00772be6  8938                 mov dword ptr [eax], edi
// 00772be8  6870a77900           push 0x79a770
// 00772bed  33db                 xor ebx, ebx
// 00772bef  33ed                 xor ebp, ebp
// 00772bf1  895804               mov dword ptr [eax + 4], ebx
// 00772bf4  68c4c67a00           push 0x7ac6c4
// 00772bf9  b988cd8b00           mov ecx, 0x8bcd88
// 00772bfe  896808               mov dword ptr [eax + 8], ebp
// 00772c01  e8fa2fe0ff           call 0x575c00
// 00772c06  68209e7700           push 0x779e20
// 00772c0b  e8a3c5eaff           call 0x61f1b3
// 00772c10  83c404               add esp, 4
// 00772c13  5f                   pop edi
// 00772c14  5e                   pop esi
// 00772c15  5d                   pop ebp
// 00772c16  5b                   pop ebx
// 00772c17  c3                   ret 
// library rbxgs/v8datamodel\PartInstance.cpp (function ??__Eprop_RotVelocity@RBX@@YAXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/PartInstance.cpp
