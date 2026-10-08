// roc 2010-06 0053fc40  unit: RBX::SceneManager  size: 70 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0053fc40
//
// 0053fc40  6aff                 push -1
// 0053fc42  68a8e49800           push 0x98e4a8
// 0053fc47  64a100000000         mov eax, dword ptr fs:[0]
// 0053fc4d  50                   push eax
// 0053fc4e  64892500000000       mov dword ptr fs:[0], esp
// 0053fc55  51                   push ecx
// 0053fc56  56                   push esi
// 0053fc57  8bf1                 mov esi, ecx
// 0053fc59  89742404             mov dword ptr [esp + 4], esi
// 0053fc5d  c7069cf2a100         mov dword ptr [esi], 0xa1f29c
// 0053fc63  c744241000000000     mov dword ptr [esp + 0x10], 0
// 0053fc6b  e8b0fdffff           call 0x53fa20
// 0053fc70  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0053fc74  c70638e8a100         mov dword ptr [esi], 0xa1e838
// 0053fc7a  5e                   pop esi
// 0053fc7b  64890d00000000       mov dword ptr fs:[0], ecx
// 0053fc82  83c410               add esp, 0x10
// 0053fc85  c3                   ret 
// library rbxgs-view/MaterialFactory.cpp (function ??1?$WeakReferenceCountedPointer@VMaterial@Render@RBX@@@G3D@@UAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-view MaterialFactory.cpp
