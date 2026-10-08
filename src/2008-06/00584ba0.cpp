// roc 2008-06 00584ba0  unit: RBX::ModelInstance  size: 81 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00584ba0
//
// 00584ba0  56                   push esi
// 00584ba1  8b742408             mov esi, dword ptr [esp + 8]
// 00584ba5  6a00                 push 0
// 00584ba7  6850dd9200           push 0x92dd50
// 00584bac  687c909200           push 0x92907c
// 00584bb1  6a00                 push 0
// 00584bb3  56                   push esi
// 00584bb4  e80dcc1100           call 0x6a17c6
// 00584bb9  83c414               add esp, 0x14
// 00584bbc  85c0                 test eax, eax
// 00584bbe  7408                 je 0x584bc8
// 00584bc0  8bc8                 mov ecx, eax
// 00584bc2  5e                   pop esi
// 00584bc3  e9a8400100           jmp 0x598c70
// 00584bc8  6a00                 push 0
// 00584bca  68402a9300           push 0x932a40
// 00584bcf  687c909200           push 0x92907c
// 00584bd4  6a00                 push 0
// 00584bd6  56                   push esi
// 00584bd7  e8eacb1100           call 0x6a17c6
// 00584bdc  83c414               add esp, 0x14
// 00584bdf  85c0                 test eax, eax
// 00584be1  740c                 je 0x584bef
// 00584be3  68a04b5800           push 0x584ba0
// 00584be8  8bc8                 mov ecx, eax
// 00584bea  e88178edff           call 0x45c470
// 00584bef  5e                   pop esi
// 00584bf0  c3                   ret 
// library rbxgs/v8datamodel\ModelInstance.cpp (function ?makeJ@RBX@@YAXPAVInstance@1@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/ModelInstance.cpp
