// roc 2009-06 005eb600  unit: G3D::VVector3::?$TypedPropertyDescriptor  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005eb600
//
// 005eb600  64a100000000         mov eax, dword ptr fs:[0]
// 005eb606  6aff                 push -1
// 005eb608  683e518600           push 0x86513e
// 005eb60d  50                   push eax
// 005eb60e  b801000000           mov eax, 1
// 005eb613  64892500000000       mov dword ptr fs:[0], esp
// 005eb61a  8405986ba400         test byte ptr [0xa46b98], al
// 005eb620  7530                 jne 0x5eb652
// 005eb622  0905986ba400         or dword ptr [0xa46b98], eax
// 005eb628  68c062a100           push 0xa162c0
// 005eb62d  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 005eb635  e8861ff3ff           call 0x51d5c0
// 005eb63a  50                   push eax
// 005eb63b  b9d86aa400           mov ecx, 0xa46ad8
// 005eb640  e89be10000           call 0x5f97e0
// 005eb645  6840878900           push 0x898740
// 005eb64a  e8ace41200           call 0x719afb
// 005eb64f  83c404               add esp, 4
// 005eb652  8b0c24               mov ecx, dword ptr [esp]
// 005eb655  b8d86aa400           mov eax, 0xa46ad8
// 005eb65a  64890d00000000       mov dword ptr fs:[0], ecx
// 005eb661  83c40c               add esp, 0xc
// 005eb664  c3                   ret 
// library openrbx-client/App\script\Script.cpp (function ?classDescriptor@?$Described@VInstance@RBX@@$1?sInstance@2@3QBDBVDescribedBase@Reflection@2@@Reflection@RBX@@SAAAVClassDescriptor@23@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp
