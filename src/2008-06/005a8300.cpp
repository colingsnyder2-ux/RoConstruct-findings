// roc 2008-06 005a8300  unit: RBX::Log  size: 46 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005a8300
//
// 005a8300  56                   push esi
// 005a8301  686c6b9700           push 0x976b6c
// 005a8306  6860825a00           push 0x5a8260
// 005a830b  8bf1                 mov esi, ecx
// 005a830d  e81ef0faff           call 0x557330
// 005a8312  a1646b9700           mov eax, dword ptr [0x976b64]
// 005a8317  83c408               add esp, 8
// 005a831a  68686b9700           push 0x976b68
// 005a831f  8906                 mov dword ptr [esi], eax
// 005a8321  ff15b0218000         call dword ptr [0x8021b0]
// 005a8327  894604               mov dword ptr [esi + 4], eax
// 005a832a  8bc6                 mov eax, esi
// 005a832c  5e                   pop esi
// 005a832d  c3                   ret 
// library rbxgs/util\Guid.cpp (function ??0Guid@RBX@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Guid.cpp
