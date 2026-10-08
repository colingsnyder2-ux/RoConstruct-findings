// roc 2010-06 0053fd40  unit: RBX::VChunk::?$WeakReferenceCountedPointer  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0053fd40
//
// 0053fd40  6aff                 push -1
// 0053fd42  68a8e49800           push 0x98e4a8
// 0053fd47  64a100000000         mov eax, dword ptr fs:[0]
// 0053fd4d  50                   push eax
// 0053fd4e  64892500000000       mov dword ptr fs:[0], esp
// 0053fd55  51                   push ecx
// 0053fd56  56                   push esi
// 0053fd57  8bf1                 mov esi, ecx
// 0053fd59  89742404             mov dword ptr [esp + 4], esi
// 0053fd5d  c7069cf2a100         mov dword ptr [esi], 0xa1f29c
// 0053fd63  c744241000000000     mov dword ptr [esp + 0x10], 0
// 0053fd6b  e8b0fcffff           call 0x53fa20
// 0053fd70  f644241801           test byte ptr [esp + 0x18], 1
// 0053fd75  c70638e8a100         mov dword ptr [esi], 0xa1e838
// 0053fd7b  7409                 je 0x53fd86
// 0053fd7d  56                   push esi
// 0053fd7e  e8177c2600           call 0x7a799a
// 0053fd83  83c404               add esp, 4
// 0053fd86  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0053fd8a  8bc6                 mov eax, esi
// 0053fd8c  5e                   pop esi
// 0053fd8d  64890d00000000       mov dword ptr fs:[0], ecx
// 0053fd94  83c410               add esp, 0x10
// 0053fd97  c20400               ret 4
// library rbxgs-view/MaterialFactory.cpp (function ??_G?$WeakReferenceCountedPointer@VMaterial@Render@RBX@@@G3D@@UAEPAXI@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-view MaterialFactory.cpp
