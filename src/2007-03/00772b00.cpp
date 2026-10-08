// roc 2007-03 00772b00  unit: seg_00770000  size: 88 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00772b00
//
// 00772b00  53                   push ebx
// 00772b01  55                   push ebp
// 00772b02  56                   push esi
// 00772b03  57                   push edi
// 00772b04  6a01                 push 1
// 00772b06  83ec0c               sub esp, 0xc
// 00772b09  8bc4                 mov eax, esp
// 00772b0b  b920665700           mov ecx, 0x576620
// 00772b10  8908                 mov dword ptr [eax], ecx
// 00772b12  33d2                 xor edx, edx
// 00772b14  895004               mov dword ptr [eax + 4], edx
// 00772b17  83ec0c               sub esp, 0xc
// 00772b1a  33f6                 xor esi, esi
// 00772b1c  897008               mov dword ptr [eax + 8], esi
// 00772b1f  8bc4                 mov eax, esp
// 00772b21  bfb0295700           mov edi, 0x5729b0
// 00772b26  8938                 mov dword ptr [eax], edi
// 00772b28  6870a77900           push 0x79a770
// 00772b2d  33db                 xor ebx, ebx
// 00772b2f  33ed                 xor ebp, ebp
// 00772b31  895804               mov dword ptr [eax + 4], ebx
// 00772b34  68acc67a00           push 0x7ac6ac
// 00772b39  b98cca8b00           mov ecx, 0x8bca8c
// 00772b3e  896808               mov dword ptr [eax + 8], ebp
// 00772b41  e8ba30e0ff           call 0x575c00
// 00772b46  68e09f7700           push 0x779fe0
// 00772b4b  e863c6eaff           call 0x61f1b3
// 00772b50  83c404               add esp, 4
// 00772b53  5f                   pop edi
// 00772b54  5e                   pop esi
// 00772b55  5d                   pop ebp
// 00772b56  5b                   pop ebx
// 00772b57  c3                   ret 
// library rbxgs/v8datamodel\PartInstance.cpp (function ??__Eprop_PositionUi@RBX@@YAXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/PartInstance.cpp
