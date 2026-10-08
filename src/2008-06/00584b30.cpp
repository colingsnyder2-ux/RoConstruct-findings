// roc 2008-06 00584b30  unit: RBX::ModelInstance  size: 81 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00584b30
//
// 00584b30  56                   push esi
// 00584b31  8b742408             mov esi, dword ptr [esp + 8]
// 00584b35  6a00                 push 0
// 00584b37  6850dd9200           push 0x92dd50
// 00584b3c  687c909200           push 0x92907c
// 00584b41  6a00                 push 0
// 00584b43  56                   push esi
// 00584b44  e87dcc1100           call 0x6a17c6
// 00584b49  83c414               add esp, 0x14
// 00584b4c  85c0                 test eax, eax
// 00584b4e  7408                 je 0x584b58
// 00584b50  8bc8                 mov ecx, eax
// 00584b52  5e                   pop esi
// 00584b53  e938410100           jmp 0x598c90
// 00584b58  6a00                 push 0
// 00584b5a  68402a9300           push 0x932a40
// 00584b5f  687c909200           push 0x92907c
// 00584b64  6a00                 push 0
// 00584b66  56                   push esi
// 00584b67  e85acc1100           call 0x6a17c6
// 00584b6c  83c414               add esp, 0x14
// 00584b6f  85c0                 test eax, eax
// 00584b71  740c                 je 0x584b7f
// 00584b73  68304b5800           push 0x584b30
// 00584b78  8bc8                 mov ecx, eax
// 00584b7a  e8f178edff           call 0x45c470
// 00584b7f  5e                   pop esi
// 00584b80  c3                   ret 
// library rbxgs/v8datamodel\ModelInstance.cpp (function ?makeJ@RBX@@YAXPAVInstance@1@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/ModelInstance.cpp
