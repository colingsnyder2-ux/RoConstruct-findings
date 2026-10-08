// roc 2007-08 00770450  unit: seg_00770000  size: 88 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00770450
//
// 00770450  53                   push ebx
// 00770451  55                   push ebp
// 00770452  56                   push esi
// 00770453  57                   push edi
// 00770454  6a04                 push 4
// 00770456  83ec0c               sub esp, 0xc
// 00770459  8bc4                 mov eax, esp
// 0077045b  b930fd5200           mov ecx, 0x52fd30
// 00770460  8908                 mov dword ptr [eax], ecx
// 00770462  33d2                 xor edx, edx
// 00770464  895004               mov dword ptr [eax + 4], edx
// 00770467  83ec0c               sub esp, 0xc
// 0077046a  33f6                 xor esi, esi
// 0077046c  897008               mov dword ptr [eax + 8], esi
// 0077046f  8bc4                 mov eax, esp
// 00770471  bf20fd5200           mov edi, 0x52fd20
// 00770476  8938                 mov dword ptr [eax], edi
// 00770478  6898b67900           push 0x79b698
// 0077047d  33db                 xor ebx, ebx
// 0077047f  33ed                 xor ebp, ebp
// 00770481  895804               mov dword ptr [eax + 4], ebx
// 00770484  6808527a00           push 0x7a5208
// 00770489  b9740e8c00           mov ecx, 0x8c0e74
// 0077048e  896808               mov dword ptr [eax + 8], ebp
// 00770491  e87a12dcff           call 0x531710
// 00770496  68e0937700           push 0x7793e0
// 0077049b  e88308ecff           call 0x630d23
// 007704a0  83c404               add esp, 4
// 007704a3  5f                   pop edi
// 007704a4  5e                   pop esi
// 007704a5  5d                   pop ebp
// 007704a6  5b                   pop ebx
// 007704a7  c3                   ret 
// library rbxgs/v8datamodel\ModelInstance.cpp (function ??__Edesc_ModelInPrimary@RBX@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/ModelInstance.cpp
