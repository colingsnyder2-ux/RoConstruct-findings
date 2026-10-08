// roc 2007-03 00775000  unit: seg_00770000  size: 60 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00775000
//
// 00775000  56                   push esi
// 00775001  33f6                 xor esi, esi
// 00775003  56                   push esi
// 00775004  83ec0c               sub esp, 0xc
// 00775007  8bc4                 mov eax, esp
// 00775009  56                   push esi
// 0077500a  b9d0655b00           mov ecx, 0x5b65d0
// 0077500f  8908                 mov dword ptr [eax], ecx
// 00775011  33d2                 xor edx, edx
// 00775013  6870a77900           push 0x79a770
// 00775018  895004               mov dword ptr [eax + 4], edx
// 0077501b  6880c07a00           push 0x7ac080
// 00775020  b9f8fe8b00           mov ecx, 0x8bfef8
// 00775025  897008               mov dword ptr [eax + 8], esi
// 00775028  e83318e4ff           call 0x5b6860
// 0077502d  6830b57700           push 0x77b530
// 00775032  e87ca1eaff           call 0x61f1b3
// 00775037  83c404               add esp, 4
// 0077503a  5e                   pop esi
// 0077503b  c3                   ret 
// library rbxgs/v8datamodel\PVInstance.cpp (function ??__Edesc_CoordFrame@RBX@@YAXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/PVInstance.cpp
