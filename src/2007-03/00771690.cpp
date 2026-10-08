// roc 2007-03 00771690  unit: seg_00770000  size: 88 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00771690
//
// 00771690  53                   push ebx
// 00771691  55                   push ebp
// 00771692  56                   push esi
// 00771693  57                   push edi
// 00771694  6a04                 push 4
// 00771696  83ec0c               sub esp, 0xc
// 00771699  8bc4                 mov eax, esp
// 0077169b  b9103b5300           mov ecx, 0x533b10
// 007716a0  8908                 mov dword ptr [eax], ecx
// 007716a2  33d2                 xor edx, edx
// 007716a4  895004               mov dword ptr [eax + 4], edx
// 007716a7  83ec0c               sub esp, 0xc
// 007716aa  33f6                 xor esi, esi
// 007716ac  897008               mov dword ptr [eax + 8], esi
// 007716af  8bc4                 mov eax, esp
// 007716b1  bf003b5300           mov edi, 0x533b00
// 007716b6  8938                 mov dword ptr [eax], edi
// 007716b8  6870a77900           push 0x79a770
// 007716bd  33db                 xor ebx, ebx
// 007716bf  33ed                 xor ebp, ebp
// 007716c1  895804               mov dword ptr [eax + 4], ebx
// 007716c4  68dc557a00           push 0x7a55dc
// 007716c9  b900b48b00           mov ecx, 0x8bb400
// 007716ce  896808               mov dword ptr [eax + 8], ebp
// 007716d1  e88a40dcff           call 0x535760
// 007716d6  6850947700           push 0x779450
// 007716db  e8d3daeaff           call 0x61f1b3
// 007716e0  83c404               add esp, 4
// 007716e3  5f                   pop edi
// 007716e4  5e                   pop esi
// 007716e5  5d                   pop ebp
// 007716e6  5b                   pop ebx
// 007716e7  c3                   ret 
// library rbxgs/v8datamodel\ModelInstance.cpp (function ??__Edesc_ModelInPrimary@RBX@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/ModelInstance.cpp
