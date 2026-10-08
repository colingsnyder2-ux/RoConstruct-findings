// roc 2007-08 00774a40  unit: seg_00770000  size: 60 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00774a40
//
// 00774a40  56                   push esi
// 00774a41  33f6                 xor esi, esi
// 00774a43  56                   push esi
// 00774a44  83ec0c               sub esp, 0xc
// 00774a47  8bc4                 mov eax, esp
// 00774a49  56                   push esi
// 00774a4a  b950b75b00           mov ecx, 0x5bb750
// 00774a4f  8908                 mov dword ptr [eax], ecx
// 00774a51  33d2                 xor edx, edx
// 00774a53  6898b67900           push 0x79b698
// 00774a58  895004               mov dword ptr [eax + 4], edx
// 00774a5b  68c0a97a00           push 0x7aa9c0
// 00774a60  b9c0678c00           mov ecx, 0x8c67c0
// 00774a65  897008               mov dword ptr [eax + 8], esi
// 00774a68  e8736fe4ff           call 0x5bb9e0
// 00774a6d  6830bc7700           push 0x77bc30
// 00774a72  e8acc2ebff           call 0x630d23
// 00774a77  83c404               add esp, 4
// 00774a7a  5e                   pop esi
// 00774a7b  c3                   ret 
// library rbxgs/v8datamodel\PVInstance.cpp (function ??__Edesc_CoordFrame@RBX@@YAXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/PVInstance.cpp
